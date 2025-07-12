# coderrc-formatting
A program which CoderRC uses for formatting.

## Build

#### 1. Clone Source
    git clone https://github.com/CoderRC/coderrc-formatting.git
    cd coderrc-formatting

#### 2. Build
    mkdir build
    cd build
    ../configure
    make

## Install
    make install

## Info
CoderRC uses setup-indent and indent on each file formatted but heard others also use the .clang-format file so created the file on the repository.

No options then this is printed.

Option below prints the .clang-format file stored in the program.

    .clang-format

Option below prints what coderrc uses for formatting.

    p

    printf "%s" "$(file=fileName.c && setup-indent "$file" && indent "$file")"

## Requirements

Download a sh command line environment to run configure.

Download git to use the git command for cloning the source.

Download make to compile the library.

Download gcc with posix c functions to compile the source and configure it.

If the gcc is mingw and the sh command line environment supports the pacman command do

    pacman -S git
    pacman -S make
    pacman -S mingw-w64-x86_64-gcc
    git clone https://github.com/CoderRC/libmingw32_extended.git
    cd libmingw32_extended
    mkdir build
    cd build
    ../configure
    make
    make install
    cd ../..
    git clone https://github.com/CoderRC/coderrc-formatting.git
    cd coderrc-formatting
    mkdir build
    cd build
    ../configure LDFLAGS=-lmingw32_extended
    make

If the sh command line environment supports the pacman command do

    pacman -S git
    pacman -S make
    pacman -S gcc

## Contributing to the source

To properly add new sources to the repository, the sources must be added to the source directory in the repository.
