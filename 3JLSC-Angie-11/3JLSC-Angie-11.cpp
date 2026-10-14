// 3JLSC-Angie-11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>

using namespace std;

int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int sumaIterativa(int n) {
    int suma = 0;
    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int main() {
    int cantidad, opcion;

    cout << "Cuantos numero  desea ingresar ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Por favor, ingrese un numero mayor a cero." << endl;
        return 1;
    }

    cout << "\n--- MENU DE OPCIONES ---" << endl;
    cout << "1. Suma de digitos por Metodo Recursivo" << endl;
    cout << "2. Suma de digitos por Metodo Iterativo" << endl;
    cout << "Seleccione una opción (1 o 2): ";
    cin >> opcion;

    if (opcion != 1 && opcion != 2) {
        cout << "Opcion no valida." << endl;
        return 1;
    }

    for (int i = 0; i < cantidad; i++) {
        int numero;
        cout << "\nIngrese el numero " << (i + 1) << ": ";
        cin >> numero;

        if (numero < 0) {
            cout << "Por favor, ingrese un numero natural (positivo)." << endl;
            continue;
        }

        if (opcion == 1) {
            cout << "Resultado (Recursivo): " << sumaRecursiva(numero) << endl;
        }
        else {
            cout << "Resultado (Iterativo): " << sumaIterativa(numero) << endl;
        }
    }

    return 0;
}
