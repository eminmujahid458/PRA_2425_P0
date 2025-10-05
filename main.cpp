#include "BrazoRobotico.h"
#include <iostream>

int main() {
    BrazoRobotico brazo(0.0, 0.0, 0.0);

    std::cout << "Posición inicial: ("
              << brazo.getX() << ", "
              << brazo.getY() << ", "
              << brazo.getZ() << ")\n";

    brazo.mover(1.5, 2.0, 0.8);
    brazo.coger();
    if (brazo.estaSujetando()) {
        std::cout << "Esta Sujetando\n";
    } else {
        std::cout << "No esta Sujetando\n";
    }

    brazo.mover(3.0, 1.0, 0.5);
    brazo.soltar();
    if (brazo.estaSujetando()) {
        std::cout << "Estado final - Esta sujetando\n";
    } else {
        std::cout << "Estado final - No esta sujetando\n";
    }
    return 0;
}

