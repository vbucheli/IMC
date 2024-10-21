/*
    Proyecto: IMC 
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto permite trabajar con:
    Uso de clases 
    Uso de bibliotecas
    Uso de APIs
    Reutilización de código
    Software modular y compatibles con otro software

    

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Octubre 2024
*/
#include "Persona.h"

Persona::Persona(double p, double a) : peso(p), altura(a) {}

double Persona::calcularIMC() const {
    return peso / std::pow(altura, 2);
}

void Persona::evaluarIMC() const {
    double imc = calcularIMC();
    std::cout << "Su Índice de Masa Corporal (IMC) es: " << imc << std::endl;

    if (imc < 18.5) {
        std::cout << "Usted está por debajo del peso normal." << std::endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        std::cout << "Usted tiene un peso normal." << std::endl;
    } else if (imc >= 25 && imc <= 29.9) {
        std::cout << "Usted tiene sobrepeso." << std::endl;
    } else {
        std::cout << "Usted tiene obesidad." << std::endl;
    }
}
