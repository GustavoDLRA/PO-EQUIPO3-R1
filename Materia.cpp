//
// Created by gusta on 11/02/2018.
//

#include "Materia.h"
Materia::Materia(std::string, std::string) {
this->Nombre =Nombre;
this->Clave=Clave;
this->horario=horario;
this->Maestro=Maestro;
}
Materia::Materia(std::string, std::string, Horario, Profesor) {
    this->Nombre =Nombre;
    this->Clave=Clave;
    this->horario=horario;
    this->Maestro=Maestro;
}
void Materia::setHorario(Horario) {

}
void Materia::setMaestro(Profesor) {

}
std::string Materia::getNombre() {

}
std::string Materia::getClave() {

}
Horario*Materia::getHorario() {

}
Profesor*Materia::getMaestro() {

}
std::string Materia::toString() {

}
