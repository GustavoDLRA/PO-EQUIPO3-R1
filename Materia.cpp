//
// Created by gusta on 11/02/2018.
//

#include "Materia.h"
Materia::Materia(std::string nombre, std::string clave) {
this->Nombre =nombre;
this->Clave=clave;
this->horario= nullptr;
this->Maestro= nullptr;
}
Materia::Materia(std::string nombre, std::string clave, Horario*horario, Profesor*maestro) {
    this->Nombre=nombre;
    this->Clave=clave;
    this->horario=horario;
    this->Maestro=maestro;
}
void Materia::setHorario(Horario*horario) {
    this->horario=horario;
}
void Materia::setMaestro(Profesor*profesor) {
    this->Maestro=profesor;
}
std::string Materia::getNombre() {
    return this->Nombre;
}
std::string Materia::getClave() {
    return this->Clave;
}
Horario*Materia::getHorario() {
    return this->horario;
}
Profesor*Materia::getMaestro() {
    return this->Maestro;
}
std::string Materia::toString() {

}
