#include "Sound.h"
#include <iostream>
#include <cstdlib>
#include <iostream>
#include <chrono>
#include <thread>

void playSound(const std::string& soundFile) {
    std::string command = "aplay " + soundFile;
    int result = std::system(command.c_str());
    if (result != 0) {
        std::cerr << "Failed to play sound file: " << soundFile << std::endl;
        std::cout << command << " executed" <<std::endl;
    }
}

void alsahelp(){
    std::string command = "aplay -h ";
    std::system(command.c_str());
    std::cout << command << " executed" <<std::endl;
}

void showsounddevice(){
    std::string command = "aplay -L";
    std::system(command.c_str());
    std::cout << command << " executed" <<std::endl;
}

void printIntroanim()
{
    // ANSI escape codes to set text color to red, green, and blue
    const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string blue = "\033[34m";
    const std::string reset = "\033[0m"; // Reset to default color

    std::cout << red << "Welcome to the " << green << "Sound Player" << blue << " Program!" << reset << std::endl;

    // Loading animation
    std::cout << "Loading";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << ".";
        std::cout.flush();                                    // Make sure the dots are printed immediately
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Wait for a second
    }
    std::cout << std::endl;
    std::cout << "Made by Michail Andreas Michalopoulos m.a.michalopoulos@student.tue.nl" << std::endl;
}

void showdocumentation() {
    printIntroanim();
    std::cout << " ----Lovely Sound Library documentation----" << std::endl
              << "Basically this whole thing just works by calling the library functions" << std::endl
              << "The functions are: " << std::endl
              << "  playSound(soundfile)" << std::endl
              << "  alsahelp()" << std::endl
              << "  showsounddevice()" << std::endl
              << "  showdocumentation()" << std::endl  
              << "soundfile being a string of the path to the sound file" << std::endl
              << "soundfile selection should be handled in the main code since the library is just for playing the sound" << std::endl
              << "Recommended method would be to make a config file with the paths to the different sound files" << std::endl
              << "and just call the playSound function with the path to the sound file" << std::endl
              << "Have fun!" << std::endl;
}