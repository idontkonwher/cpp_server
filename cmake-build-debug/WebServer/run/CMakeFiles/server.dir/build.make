# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/server/cmake-build-debug

# Include any dependencies generated for this target.
include WebServer/run/CMakeFiles/server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include WebServer/run/CMakeFiles/server.dir/compiler_depend.make

# Include the progress variables for this target.
include WebServer/run/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include WebServer/run/CMakeFiles/server.dir/flags.make

WebServer/run/CMakeFiles/server.dir/run_server.cpp.o: WebServer/run/CMakeFiles/server.dir/flags.make
WebServer/run/CMakeFiles/server.dir/run_server.cpp.o: ../WebServer/run/run_server.cpp
WebServer/run/CMakeFiles/server.dir/run_server.cpp.o: WebServer/run/CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object WebServer/run/CMakeFiles/server.dir/run_server.cpp.o"
	cd /root/server/cmake-build-debug/WebServer/run && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT WebServer/run/CMakeFiles/server.dir/run_server.cpp.o -MF CMakeFiles/server.dir/run_server.cpp.o.d -o CMakeFiles/server.dir/run_server.cpp.o -c /root/server/WebServer/run/run_server.cpp

WebServer/run/CMakeFiles/server.dir/run_server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/run_server.cpp.i"
	cd /root/server/cmake-build-debug/WebServer/run && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/server/WebServer/run/run_server.cpp > CMakeFiles/server.dir/run_server.cpp.i

WebServer/run/CMakeFiles/server.dir/run_server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/run_server.cpp.s"
	cd /root/server/cmake-build-debug/WebServer/run && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/server/WebServer/run/run_server.cpp -o CMakeFiles/server.dir/run_server.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/run_server.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

WebServer/run/server: WebServer/run/CMakeFiles/server.dir/run_server.cpp.o
WebServer/run/server: WebServer/run/CMakeFiles/server.dir/build.make
WebServer/run/server: WebServer/base/libserver_server.a
WebServer/run/server: WebServer/log/liblibserver_log.a
WebServer/run/server: WebServer/server/liblibserver_server.a
WebServer/run/server: WebServer/run/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable server"
	cd /root/server/cmake-build-debug/WebServer/run && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
WebServer/run/CMakeFiles/server.dir/build: WebServer/run/server
.PHONY : WebServer/run/CMakeFiles/server.dir/build

WebServer/run/CMakeFiles/server.dir/clean:
	cd /root/server/cmake-build-debug/WebServer/run && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : WebServer/run/CMakeFiles/server.dir/clean

WebServer/run/CMakeFiles/server.dir/depend:
	cd /root/server/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/server /root/server/WebServer/run /root/server/cmake-build-debug /root/server/cmake-build-debug/WebServer/run /root/server/cmake-build-debug/WebServer/run/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : WebServer/run/CMakeFiles/server.dir/depend
