#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream archivo; 
    string nombre, seccion;

    archivo.open("nombres_secciones.txt");

    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    for (int i = 1; i <= 3; i++) {
        cout << "Ingrese el nombre de la persona " << i << ": ";
        getline(cin, nombre);
        cout << "Ingrese la seccion de la persona " << i << ": ";
        getline(cin, seccion);

        archivo << "Persona " << i << ": " << endl;
        archivo << "Nombre: " << nombre << endl;
        archivo << "Sección: " << seccion << endl;
        archivo << endl; 
    }

    archivo.close(); 
    cout << "Los datos se han guardado en 'nombres_secciones.txt'." << endl;

    return 0;
}
