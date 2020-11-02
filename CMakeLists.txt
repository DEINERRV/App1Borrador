cmake_minimum_required(VERSION 3.17)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp Paciente.cpp Paciente.h Enfermedad.cpp Enfermedad.h EnfermedadConteo.h PacienteAnalizado.cpp PacienteAnalizado.h PreAnalisis.cpp PreAnalisis.h ILoad.cpp ILoad.h ISave.cpp ISave.h CSV.cpp CSV.h JSON.cpp JSON.h PacientesManager.cpp PacientesManager.h EnfermedadesManager.cpp EnfermedadesManager.h PacientesAnalizadosManager.cpp PacientesAnalizadosManager.h App1Facade.cpp App1Facade.h Menu.cpp Menu.h)