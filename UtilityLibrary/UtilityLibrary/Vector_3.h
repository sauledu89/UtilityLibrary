#pragma once
#include "Prerequisites.h"  

/*

   Objetivo de la Clase Vector 3
   implementar una clase Vector3 que represente un
   vector en 3D y realizar varias operaciones 
   matemáticas básicas sobre ella.

 */

    class Vector3 {
    public:
        float x, y, z;  // Componentes del vector en los ejes X, Y y Z.

        
        // Inicializa las componentes del vector en (0, 0, 0).
         
        Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
       
        // Inicializa las componentes del vector
         
        Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

        /*
           Sobrecarga del operador + (suma de vectores).
           Permite sumar dos vectores y devuelve nuevo vector resultado
                    other = El vector a sumar.
           return Vector3 = El vector resultante de la suma.

         */
        Vector3 operator+(const Vector3& other) const {
            return Vector3(x + other.x, y + other.y, z + other.z);
        }

        /*
           brief Sobrecarga del operador - (resta de vectores).
           Permite restar dos vectores y devuelve un nuevo vector resultado.
                    other = El vector a restar.
           return Vector3 = El vector resultante de la resta.

         */

        Vector3 operator-(const Vector3& other) const {
            return Vector3(x - other.x, y - other.y, z - other.z);
        }

        /*
           Sobrecarga del operador * (multiplicación por un escalar).
           Multiplica el vector por un escalar y devuelve un nuevo vector con
           las componentes escaladas.
                   scalar = El escalar por el cual se multiplicará el vector.
           return Vector3 = El vector resultante de la multiplicación.
         */

        Vector3 operator*(float scalar) const {
            return Vector3(x * scalar, y * scalar, z * scalar);
        }

        /*
           Calcular magnitud del vector.
           La magnitud es la longitud del vector y se calcula como la raíz cuadrada
           de la suma de los cuadrados de sus componentes: √(x² + y² + z²).
           return = La magnitud del vector.

         */

        float magnitude() const {
            return sqrt(x * x + y * y + z * z);
        }

        /*
           Normaliza el vector.
           Devuelve un nuevo vector en la misma dirección pero con magnitud 1.
           Si la magnitud es 0, devuelve un vector nulo (0, 0, 0).
           return = vector normalizado.

         */

        Vector3 normalize() const {
            float mag = magnitude();
            if (mag == 0.0f) {
                return Vector3(0.0f, 0.0f, 0.0f);  // Si la magnitud es 0, devuelve un vector nulo.
            }
            return *this * (1.0f / mag);           // Escala el vector a magnitud 1.
        }

        /*
           Acceder a los datos del vector.
           Devuelve un puntero a las componentes del vector (x, y, z).
           return = const float* Puntero a componentes del vector.
         */

        const float* data() const {
            return &x;
        }

        /*
           Imprimir las componentes del vector en la consola.
           Mostrar las componentes en el formato "(x, y, z)".
         */
        void print() const {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
};