#ifndef CRUD_H
#define CRUD_H

#include "../Tarea/tarea.h"
#include <vector>

class Crud {
private:
    std::vector<Tarea> tareas;

public:
    Crud();
    void procesarTareas();
};

#endif // CRUD_H
