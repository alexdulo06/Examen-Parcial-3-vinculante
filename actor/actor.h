#ifndef ACTOR_H
#define ACTOR_H

#include "../Tarea/tarea.h"
#include <vector>

class Actor {
private:
    std::string nombre;

public:
    explicit Actor(const std::string &nombre);
    void realizarTarea(const Tarea &tarea);
};

#endif // ACTOR_H
