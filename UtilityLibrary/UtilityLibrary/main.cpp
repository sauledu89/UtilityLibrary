#include "Prerequisites.h"
#include "Vector_2.h"
#include "Vector_3.h"
using namespace std;


void Vector_2(){

    cout << " PRUEBA VECTOR 2 " << endl;

        Vector2 v1(4.0f, 4.0f);  // vector con valores iniciales.
        Vector2 v2;              // vector vacío.

        // operaciones con vectores.
        Vector2 v3 = v1 + Vector2(3.0f, 2.0f);  // Suma de dos vectores.
        Vector2 v4 = v1 - Vector2(3.5f, 2.5f);  // Resta de dos vectores.
        Vector2 v5 = v1 * 2.0f;                 // Multiplicación por un escalar.
        float mag = v1.magnitude();      // Calcular de magnitud del vector.
        Vector2 v6 = v1.normalize();     // Normalizar vector.
        const float* data = v1.data();   // Obtener datos del vector.

        // Imprimir resultados.

        cout << "Suma de vectores" << endl;
        v3.print();
        cout << "\nResta de vectores" << endl;
        v4.print();
        cout << "\nMultiplicacion: vector x escalar" << endl;
        v5.print();
        cout << "\nMagnitud de v1: " << mag << endl;
        v6.print();
        cout << "\nInfo de v1: (" << data[0] << ", " << data[1] << ")" << endl;

}

void Vector_3() {

    cout << "PRUEBA VECTOR 3 " << endl;

    
    Vector3 v1(3.0f, 4.0f, 5.0f); // Creación de vector 3D con valores iniciales
    Vector3 v2;                   // Creación de vector vacío.

    Vector3 v3 = v1 + Vector3(1.0f, 2.0f, 3.0f);  // Suma de vectores.
    Vector3 v4 = v1 - Vector3(0.5f, 0.5f, 0.5f);  // Resta de vectores.
    Vector3 v5 = v1 * 2.0f;                       // Multiplicación por escalar.

    
    float magnitud = v1.magnitude();  // Calcular magnitud del vector.

    
    Vector3 v6 = v1.normalize();      // Normalizar vector (volverlo de magnitud 1).

    const float* datos = v1.data();   // Obtener datos internos de vector (con puntero).
    

    // Impresión de resultados

    cout << "v3: "; v3.print();
    cout << "v4: "; v4.print();
    cout << "v5: "; v5.print();
    cout << "Magnitud de v1: " << magnitud << endl;
    cout << "v6 (normalizado): "; v6.print();
    cout << "Datos de v1: (" << datos[0] << ", " << datos[1] << ", " << datos[2] << ")" << endl;

}

    int main() {

        int option;

        do {

            // Ejecutar las prueba de clase vector deseada.
            cout << "\nIngrese el numero de clase vector a probar.\n"
                << "1 . Reto vector 2.\n"
                << "2 . Reto vector 3.\n" 
                << "3 . Salir del programa.\n" << endl;

            cin >> option;

            switch (option) {

            case 1:
                cout << "---------- Reto Vector 2 : ----------" << endl;
                Vector_2();
                cout << "---------- Reto Vector 2 : ----------" << endl;
                break;

            case 2:
                cout << "---------- Reto Vector 3 : ----------" << endl;
                Vector_2();
                cout << "---------- Reto Vector 3 : ----------" << endl;
                break;

            default: 
                cout << "----- Por favor ingresa un valor entre 1 y 3 : -----" << endl;
            }
        } while (option != 0);
    }
