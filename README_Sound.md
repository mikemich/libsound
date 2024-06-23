# Lovely Sound Library
(see "Sound Library" in Documentation)

## Introduction

Welcome to the Lovely Sound Library! This library provides simple functions for playing sound files.

## Functions

The library provides the following functions:

- `playSound(soundfile)`: Plays the sound file specified by `soundfile`, which is a string containing the path to the sound file.

- `alsahelp()`: Displays help information for the ALSA sound system.

- `showsounddevice()`: Displays information about the sound device.

- `showdocumentation()`: Displays this documentation.

## Usage

Sound file selection should be handled in the main code since the library is just for playing the sound. The recommended method would be to make a config file with the paths to the different sound files and just call the `playSound` function with the path to the sound file.

## Example

Here's a simple example of how you can use the library:

```cpp
#include "Sound.h"

int main() {
    playSound("/path/to/soundfile.wav");
    return 0;
}