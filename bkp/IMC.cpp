#include <iostream>
#include <cmath> // Biblioteca para funciones matemáticas

// Definición de la clase Persona
class Persona {
private:
    double peso;   // Atributo para el peso en kilogramos
    double altura; // Atributo para la altura en metros

public:
    // Constructor para inicializar los atributos
    Persona(double p, double a) : peso(p), altura(a) {}

    // Método para calcular el IMC
    double calcularIMC() const {
        return peso / std::pow(altura, 2); // Fórmula del IMC
    }

    // Método para obtener una evaluación del IMC
    void evaluarIMC() const {
        double imc = calcularIMC();
        std::cout << "Su Índice de Masa Corporal (IMC) es: " << imc << std::endl;

        // Evaluación del estado basado en el IMC
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
};

int main() {
    double peso, altura;

    // Solicitar datos del usuario
    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> peso;
    
    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    // Crear un objeto de la clase Persona
    Persona persona(peso, altura);

    // Evaluar el IMC utilizando el objeto
    persona.evaluarIMC();

    return 0;
}
