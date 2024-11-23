#include <iostream>

// Función que intercambia valores para cumplir con v1 <= v2 <= v3
void ordenar(int &v1, int &v2, int &v3) {
    // Usamos una variable temporal para el intercambio
    int temp;

    // Ordenamos los valores
    if (v1 > v2) {
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
    if (v2 > v3) {
        temp = v2;
        v2 = v3;
        v3 = temp;
    }
    if (v1 > v2) {
        temp = v1;
        v1 = v2;
        v2 = temp;
    }
}

int main() {
    int v1, v2, v3;

    // Solicitar al usuario que ingrese los valores
    std::cout << "Ingrese el valor de v1: ";
    std::cin >> v1;
    std::cout << "Ingrese el valor de v2: ";
    std::cin >> v2;
    std::cout << "Ingrese el valor de v3: ";
    std::cin >> v3;

    // Mostrar valores antes de ordenar
    std::cout << "Valores antes de ordenar: " << "v1 = " << v1 << ", v2 = " << v2 << ", v3 = " << v3 << std::endl;

    // Invocar la función para ordenar los valores
    ordenar(v1, v2, v3);

    // Mostrar valores después de ordenar
    std::cout << "Valores después de ordenar: " << "v1 = " << v1 << ", v2 = " << v2 << ", v3 = " << v3 << std::endl;

    return 0;
}
