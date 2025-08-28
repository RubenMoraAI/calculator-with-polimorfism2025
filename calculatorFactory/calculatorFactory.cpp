#include <iostream>
#include "Calculator.h"
#include "KineticEnergyCalculator.h"
using namespace std;

int main() {
    Calculator* calcs[10];
    int count = 0;

    // =============================
    // Aquí cada estudiante agregará su calculadora
    // Ejemplo (cuando tengas tu clase):
    // calcs[count++] = new MyCalculator(...);
    // =============================

    calcs[count++] = new  KineticEnergyCalculator(20,12);



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
