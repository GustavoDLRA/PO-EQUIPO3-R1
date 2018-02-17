//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_PROFESOR_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_PROFESOR_H


#include "Persona.h"
#include "Horario.h"
#include <iostream>

class Profesor: virtual public Persona {
private:
    std::string nomina;
public:
    Profesor();
    Profesor(std::string n,std::string fNac,char gen,std::string nomina );
    void setHorario(Horario*horario);
    Horario*getHorario();
    std::string getNomina();
    std::string toString();


};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_PROFESOR_H
