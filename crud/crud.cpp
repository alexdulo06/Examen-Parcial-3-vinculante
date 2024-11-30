#include "crud.h"
#include <iostream>

Crud::Crud() {
    // Inicializar tareas con sus tiempos y dependencias
    tareas.emplace_back("Reserva de vuelo", 20);
    tareas.emplace_back("Informar a casa para empacar", 5);
    tareas.emplace_back("Empacar maletas", 40);
    // Agregar más tareas según sea necesario
}

void Crud::procesarTareas() {
    int tiempoTotal = 0;

    std::cout << "Procesando tareas:" << std::endl;
    for (const auto &tarea : tareas) {
        tiempoTotal += tarea.getDuracion();
        std::cout << "Tarea: " << tarea.getNombre()
                  << " - Duración: " << tarea.getDuracion() << " minutos"
                  << std::endl;
    }

    std::cout << "Tiempo total: " << tiempoTotal << " minutos" << std::endl;
    if (tiempoTotal <= 100) {
        std::cout << "Es posible completar las tareas en 100 minutos." << std::endl;
    } else {
        std::cout << "No es posible completar las tareas en 100 minutos." << std::endl;
    }
}
