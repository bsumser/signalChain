#include <iostream>
#include "../include/Pedal.h"

int main() {
    std::cout << "Hello world" << std::endl ;
    std::string effect = "distortion";

    Pedal newPedal(effect, 11, 11, 11);

    return 0;
}