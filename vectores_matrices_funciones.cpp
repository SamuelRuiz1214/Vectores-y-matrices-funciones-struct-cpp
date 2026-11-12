#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funcion para mostrar los productos
void mostrarProductos(vector<string> nombres, vector<int> precios) {
    cout << "\n--- PRODUCTOS ---\n";

    for (int i = 0; i < nombres.size(); i++) {
        cout << i + 1 << ". " << nombres[i]
             << " - $" << precios[i] << endl;
    }
}

// Funcion para calcular el total vendido
int calcularTotal(int ventas[3][3], vector<int> precios) {
    int total = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            total += ventas[i][j] * precios[j];
        }
    }

    return total;
}

// Funcion para mostrar las ventas
void mostrarVentas(int ventas[3][3]) {
    cout << "\n--- VENTAS POR DIA ---\n";

    for (int i = 0; i < 3; i++) {
        cout << "Dia " << i + 1 << ": ";

        for (int j = 0; j < 3; j++) {
            cout << ventas[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {

    // Vectores de productos
    vector<string> nombres = {"Arroz", "Leche", "Pan"};
    vector<int> precios = {3000, 4500, 2000};

    // Matriz de ventas: filas = dias, columnas = productos
    int ventas[3][3] = {
        {2, 3, 5},
        {4, 1, 2},
        {3, 2, 4}
    };

    int opcion;

    do {
        cout << "\n===== TIENDA =====\n";
        cout << "1. Ver productos\n";
        cout << "2. Ver ventas\n";
        cout << "3. Calcular total vendido\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            mostrarProductos(nombres, precios);
        }
        else if (opcion == 2) {
            mostrarVentas(ventas);
        }
        else if (opcion == 3) {
            int total = calcularTotal(ventas, precios);
            cout << "\nTotal vendido: $" << total << endl;
        }
        else if (opcion == 4) {
            cout << "Saliendo del programa...\n";
        }
        else {
            cout << "Opcion incorrecta\n";
        }

    } while (opcion != 4);

    return 0;
}