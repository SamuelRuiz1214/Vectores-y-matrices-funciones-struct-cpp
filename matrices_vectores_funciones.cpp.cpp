
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funcion para ingresar los datos
void ingresarDatos(vector<string>& estudiantes, float notas[3][3]) {

    for (int i = 0; i < 3; i++) {
        cout << "\nIngrese el nombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i];

        for (int j = 0; j < 3; j++) {
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
}

// Funcion para calcular el promedio
float calcularPromedio(float notas[3][3], int fila) {
    float suma = 0;

    for (int j = 0; j < 3; j++) {
        suma += notas[fila][j];
    }

    return suma / 3;
}

// Funcion para mostrar los resultados
void mostrarResultados(vector<string> estudiantes, float notas[3][3]) {

    cout << "\n===== RESULTADOS =====\n";

    for (int i = 0; i < 3; i++) {

        cout << "\nEstudiante: " << estudiantes[i];

        cout << "\nNotas: ";

        for (int j = 0; j < 3; j++) {
            cout << notas[i][j] << " ";
        }

        cout << "\nPromedio: " << calcularPromedio(notas, i);

        if (calcularPromedio(notas, i) >= 3.0) {
            cout << "\nEstado: APROBADO\n";
        } else {
            cout << "\nEstado: REPROBADO\n";
        }
    }
}

int main() {

    vector<string> estudiantes(3);
    float notas[3][3];

    cout << "SISTEMA DE NOTAS DE ESTUDIANTES\n";

    // Llamar a las funciones
    ingresarDatos(estudiantes, notas);

    mostrarResultados(estudiantes, notas);

    return 0;
}
