# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/orsah/Desktop/Invoicer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/orsah/Desktop/Invoicer/build

# Include any dependencies generated for this target.
include CMakeFiles/Invoicer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Invoicer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Invoicer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Invoicer.dir/flags.make

CMakeFiles/Invoicer.dir/codegen:
.PHONY : CMakeFiles/Invoicer.dir/codegen

CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o: CMakeFiles/Invoicer.dir/flags.make
CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o: /home/orsah/Desktop/Invoicer/core/invoicer-form/invoice_form.c
CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o: CMakeFiles/Invoicer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orsah/Desktop/Invoicer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o -MF CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o.d -o CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o -c /home/orsah/Desktop/Invoicer/core/invoicer-form/invoice_form.c

CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/orsah/Desktop/Invoicer/core/invoicer-form/invoice_form.c > CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.i

CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/orsah/Desktop/Invoicer/core/invoicer-form/invoice_form.c -o CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.s

CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o: CMakeFiles/Invoicer.dir/flags.make
CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o: /home/orsah/Desktop/Invoicer/interfaces/invoice-volume/invoice_volume.c
CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o: CMakeFiles/Invoicer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orsah/Desktop/Invoicer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o -MF CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o.d -o CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o -c /home/orsah/Desktop/Invoicer/interfaces/invoice-volume/invoice_volume.c

CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/orsah/Desktop/Invoicer/interfaces/invoice-volume/invoice_volume.c > CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.i

CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/orsah/Desktop/Invoicer/interfaces/invoice-volume/invoice_volume.c -o CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.s

CMakeFiles/Invoicer.dir/main.c.o: CMakeFiles/Invoicer.dir/flags.make
CMakeFiles/Invoicer.dir/main.c.o: /home/orsah/Desktop/Invoicer/main.c
CMakeFiles/Invoicer.dir/main.c.o: CMakeFiles/Invoicer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orsah/Desktop/Invoicer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Invoicer.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Invoicer.dir/main.c.o -MF CMakeFiles/Invoicer.dir/main.c.o.d -o CMakeFiles/Invoicer.dir/main.c.o -c /home/orsah/Desktop/Invoicer/main.c

CMakeFiles/Invoicer.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Invoicer.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/orsah/Desktop/Invoicer/main.c > CMakeFiles/Invoicer.dir/main.c.i

CMakeFiles/Invoicer.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Invoicer.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/orsah/Desktop/Invoicer/main.c -o CMakeFiles/Invoicer.dir/main.c.s

CMakeFiles/Invoicer.dir/nuklear_impl.c.o: CMakeFiles/Invoicer.dir/flags.make
CMakeFiles/Invoicer.dir/nuklear_impl.c.o: /home/orsah/Desktop/Invoicer/nuklear_impl.c
CMakeFiles/Invoicer.dir/nuklear_impl.c.o: CMakeFiles/Invoicer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orsah/Desktop/Invoicer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Invoicer.dir/nuklear_impl.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Invoicer.dir/nuklear_impl.c.o -MF CMakeFiles/Invoicer.dir/nuklear_impl.c.o.d -o CMakeFiles/Invoicer.dir/nuklear_impl.c.o -c /home/orsah/Desktop/Invoicer/nuklear_impl.c

CMakeFiles/Invoicer.dir/nuklear_impl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Invoicer.dir/nuklear_impl.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/orsah/Desktop/Invoicer/nuklear_impl.c > CMakeFiles/Invoicer.dir/nuklear_impl.c.i

CMakeFiles/Invoicer.dir/nuklear_impl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Invoicer.dir/nuklear_impl.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/orsah/Desktop/Invoicer/nuklear_impl.c -o CMakeFiles/Invoicer.dir/nuklear_impl.c.s

# Object files for target Invoicer
Invoicer_OBJECTS = \
"CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o" \
"CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o" \
"CMakeFiles/Invoicer.dir/main.c.o" \
"CMakeFiles/Invoicer.dir/nuklear_impl.c.o"

# External object files for target Invoicer
Invoicer_EXTERNAL_OBJECTS =

Invoicer: CMakeFiles/Invoicer.dir/core/invoicer-form/invoice_form.c.o
Invoicer: CMakeFiles/Invoicer.dir/interfaces/invoice-volume/invoice_volume.c.o
Invoicer: CMakeFiles/Invoicer.dir/main.c.o
Invoicer: CMakeFiles/Invoicer.dir/nuklear_impl.c.o
Invoicer: CMakeFiles/Invoicer.dir/build.make
Invoicer: CMakeFiles/Invoicer.dir/compiler_depend.ts
Invoicer: /usr/lib/x86_64-linux-gnu/libGL.so
Invoicer: CMakeFiles/Invoicer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/orsah/Desktop/Invoicer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Invoicer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Invoicer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Invoicer.dir/build: Invoicer
.PHONY : CMakeFiles/Invoicer.dir/build

CMakeFiles/Invoicer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Invoicer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Invoicer.dir/clean

CMakeFiles/Invoicer.dir/depend:
	cd /home/orsah/Desktop/Invoicer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/orsah/Desktop/Invoicer /home/orsah/Desktop/Invoicer /home/orsah/Desktop/Invoicer/build /home/orsah/Desktop/Invoicer/build /home/orsah/Desktop/Invoicer/build/CMakeFiles/Invoicer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Invoicer.dir/depend

