/*
 * Bgm.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Bgm.h"

using namespace std;
using namespace sf;

void Bgm::start() {
    forw.play();
    revr.setVolume(0.0);
    revr.play();;
}

Bgm::Bgm() {
    rewinded = false;
    dur = 0;
}

Bgm::~Bgm() {
    offset.clear();
}

bool Bgm::load(string _res_path, bool _auto_start, bool _loop) {
	if (!forw.openFromFile(_res_path) || !revr.openFromFile(_res_path + "_r"))
        return false;
	dur = forw.getDuration().asMilliseconds();
    forw.setLoop(_loop);
    revr.setLoop(_loop);
    if (_auto_start)
        start();
    offset.push_back(0);
    return true;
}

void Bgm::update(Time& delta_time, bool trvlg, int trvlg_spd) {
    if (!trvlg) {
        rewinded = false;
        revr.setVolume(0.0);
        forw.setVolume(100.0);
        if (offset.back() > dur)
            offset.push_back(0);
        else
            offset.push_back(offset.back() + delta_time.asMilliseconds());
    } else {
        forw.setVolume(0.0);
        revr.setVolume(100.0);
        int32_t of;
        for (int i = 0; i < trvlg_spd && offset.size() > 1; ++i) {
            of = offset.back();
            offset.pop_back();
        }
        if (!rewinded || trvlg_spd > 1) {
            rewinded = true;
            revr.setPlayingOffset(milliseconds(dur + 1 - of));
        }
        forw.setPlayingOffset(milliseconds(of));
    }
}
