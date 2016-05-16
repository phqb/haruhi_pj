# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/phqb/C++/haruhi_linux_pj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/phqb/C++/haruhi_linux_pj

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/phqb/C++/haruhi_linux_pj/CMakeFiles /home/phqb/C++/haruhi_linux_pj/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/phqb/C++/haruhi_linux_pj/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named haruhi_linux_pj

# Build rule for target.
haruhi_linux_pj: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 haruhi_linux_pj
.PHONY : haruhi_linux_pj

# fast build rule for target.
haruhi_linux_pj/fast:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/build
.PHONY : haruhi_linux_pj/fast

AnimatedSprite.o: AnimatedSprite.cpp.o

.PHONY : AnimatedSprite.o

# target to build an object file
AnimatedSprite.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/AnimatedSprite.cpp.o
.PHONY : AnimatedSprite.cpp.o

AnimatedSprite.i: AnimatedSprite.cpp.i

.PHONY : AnimatedSprite.i

# target to preprocess a source file
AnimatedSprite.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/AnimatedSprite.cpp.i
.PHONY : AnimatedSprite.cpp.i

AnimatedSprite.s: AnimatedSprite.cpp.s

.PHONY : AnimatedSprite.s

# target to generate assembly for a file
AnimatedSprite.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/AnimatedSprite.cpp.s
.PHONY : AnimatedSprite.cpp.s

Animation.o: Animation.cpp.o

.PHONY : Animation.o

# target to build an object file
Animation.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Animation.cpp.o
.PHONY : Animation.cpp.o

Animation.i: Animation.cpp.i

.PHONY : Animation.i

# target to preprocess a source file
Animation.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Animation.cpp.i
.PHONY : Animation.cpp.i

Animation.s: Animation.cpp.s

.PHONY : Animation.s

# target to generate assembly for a file
Animation.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Animation.cpp.s
.PHONY : Animation.cpp.s

Bgm.o: Bgm.cpp.o

.PHONY : Bgm.o

# target to build an object file
Bgm.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Bgm.cpp.o
.PHONY : Bgm.cpp.o

Bgm.i: Bgm.cpp.i

.PHONY : Bgm.i

# target to preprocess a source file
Bgm.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Bgm.cpp.i
.PHONY : Bgm.cpp.i

Bgm.s: Bgm.cpp.s

.PHONY : Bgm.s

# target to generate assembly for a file
Bgm.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Bgm.cpp.s
.PHONY : Bgm.cpp.s

Cloud.o: Cloud.cpp.o

.PHONY : Cloud.o

# target to build an object file
Cloud.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Cloud.cpp.o
.PHONY : Cloud.cpp.o

Cloud.i: Cloud.cpp.i

.PHONY : Cloud.i

# target to preprocess a source file
Cloud.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Cloud.cpp.i
.PHONY : Cloud.cpp.i

Cloud.s: Cloud.cpp.s

.PHONY : Cloud.s

# target to generate assembly for a file
Cloud.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Cloud.cpp.s
.PHONY : Cloud.cpp.s

CollideLayer.o: CollideLayer.cpp.o

.PHONY : CollideLayer.o

# target to build an object file
CollideLayer.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/CollideLayer.cpp.o
.PHONY : CollideLayer.cpp.o

CollideLayer.i: CollideLayer.cpp.i

.PHONY : CollideLayer.i

# target to preprocess a source file
CollideLayer.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/CollideLayer.cpp.i
.PHONY : CollideLayer.cpp.i

CollideLayer.s: CollideLayer.cpp.s

.PHONY : CollideLayer.s

# target to generate assembly for a file
CollideLayer.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/CollideLayer.cpp.s
.PHONY : CollideLayer.cpp.s

Content.o: Content.cpp.o

.PHONY : Content.o

# target to build an object file
Content.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Content.cpp.o
.PHONY : Content.cpp.o

Content.i: Content.cpp.i

.PHONY : Content.i

# target to preprocess a source file
Content.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Content.cpp.i
.PHONY : Content.cpp.i

Content.s: Content.cpp.s

.PHONY : Content.s

# target to generate assembly for a file
Content.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Content.cpp.s
.PHONY : Content.cpp.s

CurrentLayer.o: CurrentLayer.cpp.o

.PHONY : CurrentLayer.o

# target to build an object file
CurrentLayer.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/CurrentLayer.cpp.o
.PHONY : CurrentLayer.cpp.o

CurrentLayer.i: CurrentLayer.cpp.i

.PHONY : CurrentLayer.i

# target to preprocess a source file
CurrentLayer.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/CurrentLayer.cpp.i
.PHONY : CurrentLayer.cpp.i

CurrentLayer.s: CurrentLayer.cpp.s

.PHONY : CurrentLayer.s

# target to generate assembly for a file
CurrentLayer.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/CurrentLayer.cpp.s
.PHONY : CurrentLayer.cpp.s

GameObject.o: GameObject.cpp.o

.PHONY : GameObject.o

# target to build an object file
GameObject.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/GameObject.cpp.o
.PHONY : GameObject.cpp.o

GameObject.i: GameObject.cpp.i

.PHONY : GameObject.i

# target to preprocess a source file
GameObject.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/GameObject.cpp.i
.PHONY : GameObject.cpp.i

GameObject.s: GameObject.cpp.s

.PHONY : GameObject.s

# target to generate assembly for a file
GameObject.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/GameObject.cpp.s
.PHONY : GameObject.cpp.s

GameObjectState.o: GameObjectState.cpp.o

.PHONY : GameObjectState.o

# target to build an object file
GameObjectState.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/GameObjectState.cpp.o
.PHONY : GameObjectState.cpp.o

GameObjectState.i: GameObjectState.cpp.i

.PHONY : GameObjectState.i

# target to preprocess a source file
GameObjectState.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/GameObjectState.cpp.i
.PHONY : GameObjectState.cpp.i

GameObjectState.s: GameObjectState.cpp.s

.PHONY : GameObjectState.s

# target to generate assembly for a file
GameObjectState.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/GameObjectState.cpp.s
.PHONY : GameObjectState.cpp.s

Physics.o: Physics.cpp.o

.PHONY : Physics.o

# target to build an object file
Physics.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Physics.cpp.o
.PHONY : Physics.cpp.o

Physics.i: Physics.cpp.i

.PHONY : Physics.i

# target to preprocess a source file
Physics.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Physics.cpp.i
.PHONY : Physics.cpp.i

Physics.s: Physics.cpp.s

.PHONY : Physics.s

# target to generate assembly for a file
Physics.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Physics.cpp.s
.PHONY : Physics.cpp.s

Player.o: Player.cpp.o

.PHONY : Player.o

# target to build an object file
Player.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Player.cpp.o
.PHONY : Player.cpp.o

Player.i: Player.cpp.i

.PHONY : Player.i

# target to preprocess a source file
Player.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Player.cpp.i
.PHONY : Player.cpp.i

Player.s: Player.cpp.s

.PHONY : Player.s

# target to generate assembly for a file
Player.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Player.cpp.s
.PHONY : Player.cpp.s

Polygon.o: Polygon.cpp.o

.PHONY : Polygon.o

# target to build an object file
Polygon.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Polygon.cpp.o
.PHONY : Polygon.cpp.o

Polygon.i: Polygon.cpp.i

.PHONY : Polygon.i

# target to preprocess a source file
Polygon.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Polygon.cpp.i
.PHONY : Polygon.cpp.i

Polygon.s: Polygon.cpp.s

.PHONY : Polygon.s

# target to generate assembly for a file
Polygon.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Polygon.cpp.s
.PHONY : Polygon.cpp.s

Scene.o: Scene.cpp.o

.PHONY : Scene.o

# target to build an object file
Scene.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Scene.cpp.o
.PHONY : Scene.cpp.o

Scene.i: Scene.cpp.i

.PHONY : Scene.i

# target to preprocess a source file
Scene.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Scene.cpp.i
.PHONY : Scene.cpp.i

Scene.s: Scene.cpp.s

.PHONY : Scene.s

# target to generate assembly for a file
Scene.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/Scene.cpp.s
.PHONY : Scene.cpp.s

StaticObject.o: StaticObject.cpp.o

.PHONY : StaticObject.o

# target to build an object file
StaticObject.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/StaticObject.cpp.o
.PHONY : StaticObject.cpp.o

StaticObject.i: StaticObject.cpp.i

.PHONY : StaticObject.i

# target to preprocess a source file
StaticObject.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/StaticObject.cpp.i
.PHONY : StaticObject.cpp.i

StaticObject.s: StaticObject.cpp.s

.PHONY : StaticObject.s

# target to generate assembly for a file
StaticObject.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/StaticObject.cpp.s
.PHONY : StaticObject.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/haruhi_linux_pj.dir/build.make CMakeFiles/haruhi_linux_pj.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... haruhi_linux_pj"
	@echo "... AnimatedSprite.o"
	@echo "... AnimatedSprite.i"
	@echo "... AnimatedSprite.s"
	@echo "... Animation.o"
	@echo "... Animation.i"
	@echo "... Animation.s"
	@echo "... Bgm.o"
	@echo "... Bgm.i"
	@echo "... Bgm.s"
	@echo "... Cloud.o"
	@echo "... Cloud.i"
	@echo "... Cloud.s"
	@echo "... CollideLayer.o"
	@echo "... CollideLayer.i"
	@echo "... CollideLayer.s"
	@echo "... Content.o"
	@echo "... Content.i"
	@echo "... Content.s"
	@echo "... CurrentLayer.o"
	@echo "... CurrentLayer.i"
	@echo "... CurrentLayer.s"
	@echo "... GameObject.o"
	@echo "... GameObject.i"
	@echo "... GameObject.s"
	@echo "... GameObjectState.o"
	@echo "... GameObjectState.i"
	@echo "... GameObjectState.s"
	@echo "... Physics.o"
	@echo "... Physics.i"
	@echo "... Physics.s"
	@echo "... Player.o"
	@echo "... Player.i"
	@echo "... Player.s"
	@echo "... Polygon.o"
	@echo "... Polygon.i"
	@echo "... Polygon.s"
	@echo "... Scene.o"
	@echo "... Scene.i"
	@echo "... Scene.s"
	@echo "... StaticObject.o"
	@echo "... StaticObject.i"
	@echo "... StaticObject.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
