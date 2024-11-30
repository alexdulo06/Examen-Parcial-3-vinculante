#ifndef TAREA_H
#define TAREA_H

#include <string>

class Tarea {
private:
    std::string nombre;
    int duracion;

public:
    Tarea(const std::string &nombre, int duracion);
    std::string getNombre() const;
    int getDuracion() const;
};

#endif // TAREA_H
