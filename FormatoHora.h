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
 FormatoHora(int, int, int);
 std::string to_String();
 bool validaHrs(int);
 bool validaMS(int);
};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_FORMATOHORA_H
