// audio.cpp

#include <iostream>

class AudioHandler {
public:
    void playAudio() {
        std::cout << "Playing audio..." << std::endl;
    }
    void stopAudio() {
        std::cout << "Stopping audio..." << std::endl;
    }
};

int main() {
    AudioHandler audio;
    audio.playAudio();
    audio.stopAudio();
    return 0;
}