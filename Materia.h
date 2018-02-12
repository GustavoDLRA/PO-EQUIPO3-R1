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
    Materia(std::string,std::string);
    Materia(std::string,std::string,Horario,Profesor);
    void setHorario(Horario);
    void setMaestro(Profesor);
    std::string getNombre();
    std::string getClave();
    Horario*getHorario();
    Profesor*getMaestro();
    std::string toString();
};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_MATERIA_H
