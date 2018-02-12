//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_HORARIO_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_HORARIO_H


#include "FormatoHora.h"
#include <iostream>

class Horario {
private:
  FormatoHora*inicio;
  FormatoHora*fin;
  std::string aula;

public:
   Horario(FormatoHora,FormatoHora,std::string);
   Horario(int,int,int,int,int,int);
   void setAula(std::string);
   FormatoHora*getInicio();
   FormatoHora*getFin();
   std::string getAula();
   FormatoHora*CalculaDuracion();
    std::string toString();

};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_HORARIO_H
