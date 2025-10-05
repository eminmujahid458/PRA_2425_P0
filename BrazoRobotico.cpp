#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x_ini, double y_ini, double z_ini) {
    x = x_ini;
    y = y_ini;
    z = z_ini;
    sujetando = false;
}

double BrazoRobotico::getX() {
    return x;
}

double BrazoRobotico::getY() {
    return y;
}

double BrazoRobotico::getZ() {
    return z;
}

bool BrazoRobotico::estaSujetando() {
    return sujetando;
}

void BrazoRobotico::coger() {
    if (!sujetando) {
        sujetando = true;
        std::cout << "Brazo: Objeto cogido." << std::endl;
    } else {
        std::cout << "Brazo: Ya estoy sujetando un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (sujetando) {
        sujetando = false;
        std::cout << "Brazo: Objeto soltado." << std::endl;
    } else {
        std::cout << "Brazo: No hay objeto que soltar." << std::endl;
    }
}

void BrazoRobotico::mover(double x_dest, double y_dest, double z_dest) {
    x = x_dest;
    y = y_dest;
    z = z_dest;
    std::cout << "Brazo: Movido a ("
              << x << ", " << y << ", " << z << ")." << std::endl;
}

