#include <fstream> 
#include <iostream> 
using namespace std;
typedef char TCadena[30];

int main() {
    int i;
    float r;
    TCadena cad;
    ifstream fichin("EJEMPLOS.TXT"); 
    
    if (!fichin) {
        cout << "\n Incapaz de crear o abrir el fichero ";
    } else {
        fichin >> i; 
        
        while (!fichin.eof()) {
            cout << i << " "; 
            fichin >> r;
            cout << r << " "; 
            fichin >> cad;
            cout << cad << "\n"; 
            fichin >> i;
        }
        fichin.close();
    }
    return 0;
}


