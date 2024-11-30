#include "actor.h"
#include <iostream>

Actor::Actor(const std::string &nombre) : nombre(nombre) {}

void Actor::realizarTarea(const Tarea &tarea) {
    std::cout << nombre << " está realizando la tarea: " << tarea.getNombre()
              << " (Duración: " << tarea.getDuracion() << " minutos)"
              << std::endl;
}
