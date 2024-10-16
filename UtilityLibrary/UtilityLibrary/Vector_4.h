#pragma once
#include "Prerequisites.h"  

/*

   Objetivo de la Clase Vector 3
   deberás implementar una clase Vector4 
   que represente un vector en 4D y realizar 
   operaciones matemáticas comunes sobre ella.

 */

class Vector4 {
public:
    float x, y, z, w;  // Componentes en 4 ejes.

    /*
      Constructor por defecto.
      Inicializa las componentes del vector en (0, 0, 0, 0).
    */

    Vector4() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

    /*
      Constructor parametrizado.
      Inicializa las componentes del vector con los valores proporcionados.
     */
    Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

    /*
      Sobrecarga del operador, suma de vectores.
      - Suma las componentes de dos vectores.
      - Devuelve un nuevo vector resultado.
     */
    Vector4 operator+(const Vector4& other) const {
        return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
    }

    /* 
       Sobrecarga del operador para resta de vectores.
       - Resta las componentes de dos vectores.
       - Devuelve un nuevo vector resultado.
     */
    Vector4 operator-(const Vector4& other) const {
        return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
    }

    /*
      Sobrecarga del operador para multiplicar por escalar.
     
      - Multiplica cada componente del vector por un escalar
      - Devuelve un nuevo vector con los resultados.
     */
    Vector4 operator*(float scalar) const {
        return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
    }

    /* 
      Magnitud del vector.
     = longitud del vector, se calcula como la raíz cuadrada.
       de la suma de los cuadrados de sus componentes.
     */
    float magnitude() const {
        return std::sqrt(x * x + y * y + z * z + w * w);
    }

    /* Normalizar vector.
       Devuelve un nuevo vector en la misma dirección, pero con magnitud 1.
     */

    Vector4 normalize() const {
        float mag = magnitude();
        if (mag == 0.0f) {
            return Vector4(0.0f, 0.0f, 0.0f, 0.0f);  // Devuelve un vector nulo si la magnitud es 0.
        }
        return *this * (1.0f / mag);                 // Escala el vector para tener magnitud 1.
    } 
    
    const float* data() const {   //Accede a los datos del vector con punteros 
        return &x;
    }
    
     // Imprimir las componentes del vector

    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ", " << w << ")" << std::endl;
    }
};