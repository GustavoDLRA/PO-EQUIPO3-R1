//
// Created by gusta on 11/02/2018.
//

#include "Alumno.h"
    Alumno::Alumno() {
        this->nombre="";
        this->fechaNac="";
        this->genero = 0;
        this->estatura=0;
        this->peso=0;
        this->gene="";
        this->matricula="";
        //FALTA AGREGARLE A ESTE MATERIAS[].
    }
Alumno::Alumno(std::string, std::string, char, std::string, std::string) {
    this->nombre=nombre;
    this->fechaNac=fechaNac;
    this->genero = genero;
    this->estatura=estatura;
    this->peso=peso;
    this->gene=gene;
    this->matricula=matricula;
    //FALTA AGREGARLE A ESTE MATERIAS[].
}
void Alumno::setHorario(Horario) {

}
Horario*Alumno::getHorario() {

}
std::string Alumno::getGene() {
    return gene;
}
std::string Alumno::getMatricula(){
    return matricula;
}
