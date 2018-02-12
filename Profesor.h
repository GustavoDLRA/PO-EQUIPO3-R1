//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_PROFESOR_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_PROFESOR_H


#include "Persona.h"
#include "Horario.h"
#include <iostream>

class Profesor: virtual Persona {
private:
    std::string nomina;
public:
    Profesor();
    Profesor(std::string,std::string,char,std::string );
    void setHorario(Horario);
    //void setMaterias(Materias[]);
    Horario*getHorario();
    //Materias[]*getMaterias();
    std::string getNomina();

};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_PROFESOR_H
