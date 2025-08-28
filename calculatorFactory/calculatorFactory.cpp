#include <iostream>
#include "Calculator.h"
#include "BasicCalculator.h"
using namespace std;

int main() {
    Calculator* calcs[10];
    int count = 0;
	calcs[count++] = new BasicCalculator(5, 3);
     
    // =============================
    // Aquí cada estudiante agregará su calculadora
    // Ejemplo (cuando tengas tu clase):
    // calcs[count++] = new MyCalculator(...);
    // =============================

    // Ejecutar todas las calculadoras
    for (int i = 0; i < count; i++) {
        calcs[i]->calculate();
        calcs[i]->print();
    }

    for (int i = 0; i < count; i++) {
        delete calcs[i];
    }

    return 0;
}
