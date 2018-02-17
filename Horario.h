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
   Horario(FormatoHora inicio,FormatoHora fin,std::string);
   Horario(int h, int m, int s, FormatoHora*inicio, FormatoHora*fin, std::string aula);
   FormatoHora*CalculaDuracion();
   void setAula(std::string aula);
   FormatoHora*getInicio();
   FormatoHora*getFin();
   std::string getAula();
    std::string toString();

};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_HORARIO_H
