#ifndef PEDAL_H
#define PEDAL_H
#include <stdlib.h>
#include <iostream>
#include <vector>

class Pedal
{
    public:
        Pedal(std::string effectUser, int volumeUser, int toneUser, int gainUser);
        Pedal(std::string effectUser, std::vector<int> subUnits, int volumeUser, int toneUser, int gainUser);
		void setEffect(std::string value) { effect = value; }
		void setVolume(int value) { volume = value; }
		void setTone(int value) { tone = value; }
		void setGain(int value) { gain = value; }
		std::string getEffect() { return effect; }
		void sendSignal() {;}
		int getVolume() { return volume; }
		int getTone() { return tone; }
		int getGain() { return gain; }
    private:
        std::string effect;
        int volume;
        int tone;
        int gain;
};

#endif