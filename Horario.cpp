//
// Created by gusta on 11/02/2018.
//

#include "Horario.h"
Horario::Horario(FormatoHora, FormatoHora, std::string) {
  FormatoHora*inicio= nullptr;
    FormatoHora*fin= nullptr;
    this->aula="";
}
Horario::Horario(int h, int m, int s, FormatoHora*inicio, FormatoHora*fin, std::string aula){
    this->inicio=inicio;
    this->fin=fin;
    this->aula=aula;


}


void Horario::setAula(std::string aula) {
    this->aula=aula;
}
FormatoHora*Horario::getInicio() {
    return this->inicio;
}
FormatoHora*Horario::getFin() {
    return this->fin;
}
std::string Horario::getAula() {
    return this->aula;
}
FormatoHora*Horario::CalculaDuracion() { //TE FALTA AÑADIR ESTO
//Aquí se procede a calcular la duración
// Duración = Hora Final - Hora Inicial
// Separar para la resta de cada una de las unidades
// H  M  S
//-H -M -S
//Se tiene que emplear un sistema de acarreo para que en caso de que la hora final tenga menos que la inicial,
//Se le

}
std::string Horario::toString() {

}

