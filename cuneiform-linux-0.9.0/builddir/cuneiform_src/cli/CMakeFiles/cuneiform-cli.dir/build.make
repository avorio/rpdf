# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.6

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir

# Include any dependencies generated for this target.
include cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/depend.make

# Include the progress variables for this target.
include cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/progress.make

# Include the compile flags for this target's objects.
include cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/flags.make

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/flags.make
cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o: ../cuneiform_src/cli/cuneiform-cli.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o"
	cd /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o -c /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/cuneiform_src/cli/cuneiform-cli.cpp

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.i"
	cd /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/cuneiform_src/cli/cuneiform-cli.cpp > CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.i

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.s"
	cd /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/cuneiform_src/cli/cuneiform-cli.cpp -o CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.s

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.requires:
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.requires

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.provides: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.requires
	$(MAKE) -f cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/build.make cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.provides.build
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.provides

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.provides.build: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.provides.build

# Object files for target cuneiform-cli
cuneiform__cli_OBJECTS = \
"CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o"

# External object files for target cuneiform-cli
cuneiform__cli_EXTERNAL_OBJECTS =

cuneiform: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o
cuneiform: cuneiform_src/Kern/puma/libcuneiform.so.0.9.0
cuneiform: /usr/lib/libMagick++.so
cuneiform: /usr/lib/libdl.so
cuneiform: cuneiform_src/Kern/rcorrkegl/librcorrkegl.so.0.9.0
cuneiform: cuneiform_src/Kern/rfrmt/librfrmt.so.0.9.0
cuneiform: cuneiform_src/Kern/rmarker/librmarker.so.0.9.0
cuneiform: cuneiform_src/Kern/rblock/librblock.so.0.9.0
cuneiform: cuneiform_src/Kern/rneg/librneg.so.0.9.0
cuneiform: cuneiform_src/Kern/rout/librout.so.0.9.0
cuneiform: cuneiform_src/Kern/ced/libced.so.0.9.0
cuneiform: cuneiform_src/Kern/rpic/librpic.so.0.9.0
cuneiform: cuneiform_src/Kern/rselstr/librselstr.so.0.9.0
cuneiform: cuneiform_src/Kern/rstuff/librstuff.so.0.9.0
cuneiform: cuneiform_src/Kern/rimage/librimage.so.0.9.0
cuneiform: cuneiform_src/Kern/rline/librline.so.0.9.0
cuneiform: cuneiform_src/Kern/rshelllines/librshelllines.so.0.9.0
cuneiform: cuneiform_src/Kern/rverline/librverline.so.0.9.0
cuneiform: cuneiform_src/Kern/cimage/libcimage.so.0.9.0
cuneiform: cuneiform_src/Kern/cfio/libcfio.so.0.9.0
cuneiform: cuneiform_src/Kern/cpage/libcpage.so.0.9.0
cuneiform: cuneiform_src/Kern/lns32/liblns32.so.0.9.0
cuneiform: cuneiform_src/Kern/rdib/librdib.so.0.9.0
cuneiform: cuneiform_src/Kern/smetric/libsmetric.so.0.9.0
cuneiform: cuneiform_src/Kern/exc/libexc.so.0.9.0
cuneiform: cuneiform_src/Kern/loc/libloc32.so.0.9.0
cuneiform: cuneiform_src/Kern/rreccom/librreccom.so.0.9.0
cuneiform: cuneiform_src/Kern/rpstr/librpstr.so.0.9.0
cuneiform: cuneiform_src/Kern/rstr/librstr.so.0.9.0
cuneiform: cuneiform_src/Kern/cline/libcline.so.0.9.0
cuneiform: cuneiform_src/Kern/rcutp/librcutp.so.0.9.0
cuneiform: cuneiform_src/Kern/pass2/libpass2.so.0.9.0
cuneiform: cuneiform_src/Kern/rbal/librbal.so.0.9.0
cuneiform: cuneiform_src/Kern/rsadd/librsadd.so.0.9.0
cuneiform: cuneiform_src/Kern/leo/libleo32.so.0.9.0
cuneiform: cuneiform_src/Kern/evn32/libevn32.so.0.9.0
cuneiform: cuneiform_src/Kern/fon/libfon32.so.0.9.0
cuneiform: cuneiform_src/Kern/ctb/libctb32.so.0.9.0
cuneiform: cuneiform_src/Kern/msk/libmsk32.so.0.9.0
cuneiform: cuneiform_src/Kern/dif/libdif32.so.0.9.0
cuneiform: cuneiform_src/Kern/cpu/libcpu32.so.0.9.0
cuneiform: cuneiform_src/Kern/r35/libr3532.so.0.9.0
cuneiform: cuneiform_src/Kern/mmx/libmmx32.so.0.9.0
cuneiform: cuneiform_src/Kern/rling/librling.so.0.9.0
cuneiform: cuneiform_src/Kern/rling/sources/librlings.so.0.9.0
cuneiform: cuneiform_src/Kern/cstr/libcstr.so.0.9.0
cuneiform: cuneiform_src/Kern/ccom/libccom.so.0.9.0
cuneiform: cuneiform_src/Kern/std/libstd32.so.0.9.0
cuneiform: cuneiform_src/Kern/cfcompat/libcfcompat.so.0.9.0
cuneiform: /usr/lib/libdl.so
cuneiform: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/build.make
cuneiform: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../cuneiform"
	cd /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cuneiform-cli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/build: cuneiform
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/build

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/requires: cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/cuneiform-cli.cpp.o.requires
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/requires

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/clean:
	cd /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli && $(CMAKE_COMMAND) -P CMakeFiles/cuneiform-cli.dir/cmake_clean.cmake
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/clean

cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/depend:
	cd /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0 /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/cuneiform_src/cli /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli /home/wo/programming/opp-tools/rpdf/cuneiform-linux-0.9.0/builddir/cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cuneiform_src/cli/CMakeFiles/cuneiform-cli.dir/depend

