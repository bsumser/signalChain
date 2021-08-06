#ifndef PEDAL_H
#define PEDAL_H
#include <stdlib.h>
#include <iostream>

class Pedal
{
    public:
        Pedal(std::string effect, int volume, int tone, int gain);
		void setEffect(std::string value) { effect = value; }
		void setVolume(int value) { volume = value; }
		void setTone(int value) { tone = value; }
		void setGain(int value) { gain = value; }
		std::string getEffect(void) const { return effect; }
		int getVolume(void) const { return volume; }
		int getTone(void) const { return tone; }
		int getGain(void) const { return gain; }
    private:
        std::string effect;
        int volume;
        int tone;
        int gain;
};

#endif