/*
 * Bgm.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef BGM_H_
#define BGM_H_

#include <SFML/System/Time.hpp>
#include <SFML/Audio/Music.hpp>
#include <vector>
#include <string>

using namespace std;
using namespace sf;

/** \brief Store and play game's audio
 *
 * public:
 *      start()     Start to play audio
 *      update()    Update audio's offset and reversion
 * private
 *      buff, rbuff Bgm and reversed audio's buffers
 *      sound, rsound   Bgm and reversed audio's buffer holder
 *      dur         Length of audio in millisecond
 *      rewinded    The rewind event is triggered?
 */
class Bgm
{
    public:
        Bgm();
        virtual ~Bgm();
        bool load(string _res_path, bool _auto_start, bool _loop);
        void start();
        void update(Time& delta_time, bool trvlg, int trvlg_spd);

    private:
        Music forw, revr;
        vector<int32_t> offset;
        int32_t dur;
        bool rewinded;
};

#endif /* BGM_H_ */
