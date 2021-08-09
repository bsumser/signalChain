#include "../include/Pedal.h"

Pedal::Pedal(std::string effectUser, int volumeUser, int toneUser, int gainUser)
{
    effect = effectUser;
    volume = volumeUser;
    tone = toneUser;
    gain = gainUser;
}