#include "tarea.h"

Tarea::Tarea(const std::string &nombre, int duracion) : nombre(nombre), duracion(duracion) {}

std::string Tarea::getNombre() const {
    return nombre;
}

int Tarea::getDuracion() const {
    return duracion;
}
