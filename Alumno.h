//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_ALUMNO_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_ALUMNO_H


#include "Persona.h"
#include "Horario.h"
#include <iostream>
class Alumno: virtual Persona {
    private:
    std::string matricula;
    std::string gene;
    //Materias:Materias[6]

    public:
    Alumno();
    Alumno(std::string, std::string,char,std::string,std::string );
    void setHorario(Horario);
    //void setMaterias(Materias[]);
    Horario*getHorario();
    //Materias[]*getMaterias();
    std::string getMatricula;
    std::string getGene();

};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_ALUMNO_H
