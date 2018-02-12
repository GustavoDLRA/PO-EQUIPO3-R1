//
// Created by gusta on 11/02/2018.
//

#ifndef PO_GDELOSRIOS_PROYECTOPARCIAL1_PERSONA_H
#define PO_GDELOSRIOS_PROYECTOPARCIAL1_PERSONA_H

#include <iostream>

class Persona {
protected:
    std::string nombre;
    std::string fechaNac;
    char genero;
    float estatura;
    float peso;
public:
    Persona();
    Persona(std::string,std::string, char);
    void setEstatura(float);
    void setPeso(float);
    std::string getNombre();
    std::string getFechaNac();
    std::string getGenero();
    float getEstatura();
    float getPeso();
    virtual std::string toString()=0;
};


#endif //PO_GDELOSRIOS_PROYECTOPARCIAL1_PERSONA_H
