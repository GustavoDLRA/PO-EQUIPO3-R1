//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_ALUMNO_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_ALUMNO_H


#include "Persona.h"
#include "Horario.h"
#include "Materia.h"
#include <iostream>
class Alumno: virtual public Persona {
    private:
    std::string matricula;
    std::string gene;
    Materia*materia[6];


    public:
    Alumno();
    Alumno(std::string n, std::string fNac,char gen,std::string matricula,std::string generacion);
    void setHorario(Horario*horario);
    void setMaterias(Materia*m[]);
    Horario*getHorario();
    Materia*getMateria();
    std::string getMatricula;
    std::string getGene();
    std::string toString();

};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_ALUMNO_H
