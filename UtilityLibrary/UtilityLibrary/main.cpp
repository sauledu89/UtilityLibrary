#include "Vector_2.h"
using namespace std;

int main() {
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

    return 0;
}