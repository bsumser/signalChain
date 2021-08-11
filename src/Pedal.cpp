#include "../include/Pedal.h"

Pedal::Pedal(std::string effectUser, int volumeUser, int toneUser, int gainUser)
{
    effect = effectUser;
    volume = volumeUser;
    tone = toneUser;
    gain = gainUser;

    std::cout << "Pedal loaded:" << std::endl <<
    "effect = " << effect << std::endl <<
    "volume = " << volume << std::endl <<
    "tone = " << tone << std::endl <<
    "gain = " << gain << std::endl;
}