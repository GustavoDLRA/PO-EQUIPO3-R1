cmake_minimum_required(VERSION 3.8)
project(PO_GDeLosRios_ProyectoParcial1)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Persona.cpp Persona.h Alumno.cpp Alumno.h Profesor.cpp Profesor.h Materia.cpp Materia.h Horario.cpp Horario.h FormatoHora.cpp FormatoHora.h)
add_executable(PO_GDeLosRios_ProyectoParcial1 ${SOURCE_FILES})