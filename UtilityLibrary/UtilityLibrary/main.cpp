#include "Prerequisites.h"
#include "Vector_2.h"
#include "Vector_3.h"
#include "Vector_4.h"

using namespace std;


void Vector_2(){

    cout << " PRUEBA VECTOR 2 " << endl;

        Vector2 v1(4.0f, 4.0f);  // vector con valores iniciales.
        Vector2 v2;              // vector vac�o.

        // operaciones con vectores.
        Vector2 v3 = v1 + Vector2(3.0f, 2.0f);  // Suma de dos vectores.
        Vector2 v4 = v1 - Vector2(3.5f, 2.5f);  // Resta de dos vectores.
        Vector2 v5 = v1 * 2.0f;                 // Multiplicaci�n por un escalar.
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

    
    Vector3 v1(3.0f, 4.0f, 5.0f); // Creaci�n de vector 3D con valores iniciales
    Vector3 v2;                   // Creaci�n de vector vac�o.

    Vector3 v3 = v1 + Vector3(1.0f, 2.0f, 3.0f);  // Suma de vectores.
    Vector3 v4 = v1 - Vector3(0.5f, 0.5f, 0.5f);  // Resta de vectores.
    Vector3 v5 = v1 * 2.0f;                       // Multiplicaci�n por escalar.

    
    float magnitud = v1.magnitude();  // Calcular magnitud del vector.

    
    Vector3 v6 = v1.normalize();      // Normalizar vector (volverlo de magnitud 1).

    const float* datos = v1.data();   // Obtener datos internos de vector (con puntero).
    

    // Impresi�n de resultados

    cout << "v3: "; v3.print();
    cout << "v4: "; v4.print();
    cout << "v5: "; v5.print();
    cout << "Magnitud de v1: " << magnitud << endl;
    cout << "v6 (normalizado): "; v6.print();
    cout << "Datos de v1: (" << datos[0] << ", " << datos[1] << ", " << datos[2] << ")" << endl;

}

void Vector_4() {
    cout << "PRUEBA VECTOR 4 " << endl;

    Vector4 v1(1.0f, 2.0f, 3.0f, 4.0f);                 // Creaci�n de vector 4D con valores iniciales 
    Vector4 v2;                                         // Creaci�n de vector vac�o.

    Vector4 v3 = v1 + Vector4(1.0f, 1.0f, 1.0f, 1.0f);  // Suma de vectores.
    Vector4 v4 = v1 - Vector4(0.5f, 0.5f, 0.5f, 0.5f);  // Resta de vectores.
    Vector4 v5 = v1 * 2.0f;                             // Multiplicaci�n por un escalar.

    float magnitud = v1.magnitude();  // Magnitud del vector.

    
    Vector4 v6 = v1.normalize();      // Normalizar vector 

    
    const float* datos = v1.data();   // Obtener los datos del vector con puntero.

    // Imprimir resultados

    std::cout << "v3: "; v3.print();
    std::cout << "v4: "; v4.print();
    std::cout << "v5: "; v5.print();
    std::cout << "Magnitud de v1: " << magnitud << std::endl;
    std::cout << "v6 (normalizado): "; v6.print();
    std::cout << "Datos de v1: (" << datos[0] << ", " << datos[1] << ", " << datos[2] << ", " << datos[3] << ")" << std::endl;
}

    // Ejecuci�n del programa con men� de testeo por reto.

    int main() {

        int option;

        do {

            // Ejecutar las prueba de clase vector deseada.
            cout << "\nIngrese el numero de clase vector a probar.\n"
                << "1 = Test de reto: clase vector 2.\n"
                << "2 = Test de reto: clase vector 3.\n" 
                << "3 = Test de reto: clase vector 4.\n"
                << "\n4 = Salir del programa.\n" << endl;

            cin >> option;

            switch (option) {

            case 1:
                cout << "---------- Reto Vector 2 : ----------" << endl;
                Vector_2();
                cout << "---------- Reto Vector 2 : ----------" << endl;
                break;

            case 2:
                cout << "---------- Reto Vector 3 : ----------" << endl;
                Vector_3();
                cout << "---------- Reto Vector 3 : ----------" << endl;
                break;

            case 3:
                cout << "---------- Reto Vector 4 : ----------" << endl;
                Vector_4();
                cout << "---------- Reto Vector 4 : ----------" << endl;
                break;

            default: 
                cout << "----- Por favor ingresa un valor entre 1 y 4 : -----" << endl;
            }
        } while (option != 4);
    }
