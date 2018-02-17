//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_FORMATOHORA_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_FORMATOHORA_H

#include <iostream>

class FormatoHora {
private:
   int horas;
   int minutos;
   int segundos;
public:
 FormatoHora(int h, int m, int s);
 int getHoras();
 int getMinutos();
 int getSegundos();
 std::string to_String();
 bool validaHrs(int);
 bool validaMS(int);
};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_FORMATOHORA_H
