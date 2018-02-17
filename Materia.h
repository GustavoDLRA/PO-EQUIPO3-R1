//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_MATERIA_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_MATERIA_H

#include <iostream>
#include "Profesor.h"

class Materia {
private:
    std::string Nombre;
    std::string Clave;
    Horario*horario;
    Profesor*Maestro;


public:
    Materia(std::string nombre,std::string clave );
    Materia(std::string nombre,std::string clave,Horario*horario,Profesor*maestro);
    void setHorario(Horario*horario);
    void setMaestro(Profesor*profesor);
    std::string getNombre();
    std::string getClave();
    Horario*getHorario();
    Profesor*getMaestro();
    std::string toString();
};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_MATERIA_H
