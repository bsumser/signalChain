#include <iostream>
#include "../include/Pedal.h"

int main() {
    std::cout << "Hello world" << std::endl ;
    std::string effect = "distortion";

    Pedal newPedal(effect, 11, 11, 11);

    std::cout << newPedal.getEffect() << std::endl;
    std::cout << newPedal.getVolume() << std::endl;
    std::cout << newPedal.getTone() << std::endl;
    std::cout << newPedal.getGain() << std::endl;

    return 0;
}