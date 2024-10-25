#pragma once 
#include "Prerequisites.h" 

/* 
   Clase Quaternion
   Un cuaterni�n se utiliza para representar rotaciones en 3D, evitando problemas como el "gimbal lock".
*/
class Quaternion {

public:
    // Componentes del cuaterni�n: parte escalar (w) y parte vectorial (x, y, z).
    float w, x, y, z;  

    /*
       Constructor por defecto.
       Inicializa los componentes del cuaterni�n en 0.
    */

    Quaternion() : w(0.0f), x(0.0f), y(0.0f), z(0.0f) {}

    //Constructor parametrizado.
    
    Quaternion(float w, float x, float y, float z) : w(w), x(x), y(y), z(z) {}

    /*
       Creaci�n de un cuaterni�n a partir de un �ngulo y un eje de rotaci�n.
       axis =  Eje de rotaci�n representado como un array de 3 componentes.
       angle = �ngulo de rotaci�n en radianes.
       return =  El cuaterni�n correspondiente a la rotaci�n.
    */
    static Quaternion fromAxisAngle(const std::array<float, 3>& axis, float angle) {
        float halfAngle = angle * 0.5f;
        float s = sin(halfAngle);
        return Quaternion(std::cos(halfAngle), axis[0] * s, axis[1] * s, axis[2] * s);
    }

    // Sobrecarga del operador + para sumar dos cuaterniones.
    
    Quaternion operator+(const Quaternion& q) const {
        return Quaternion(w + q.w, x + q.x, y + q.y, z + q.z);
    }

    // Sobrecarga del operador * para multiplicar dos cuaterniones.
 
    Quaternion operator*(const Quaternion& q) const {
        return Quaternion(
            w * q.w - x * q.x - y * q.y - z * q.z,  ///< Parte escalar.
            w * q.x + x * q.w + y * q.z - z * q.y,  ///< Componente X.
            w * q.y - x * q.z + y * q.w + z * q.x,  ///< Componente Y.
            w * q.z + x * q.y - y * q.x + z * q.w   ///< Componente Z.
        );
    }

    // Sobrecarga del operador * para multiplicar un cuaterni�n por un escalar.

    Quaternion operator*(float scalar) const {
        return Quaternion(w * scalar, x * scalar, y * scalar, z * scalar);
    }

    // Calcula la magnitud del cuaterni�n.

    float magnitude() const {
        return sqrt(w * w + x * x + y * y + z * z);
    }

    //Normalizaci�n del Quaternion
   
    Quaternion normalize() const {
        float mag = magnitude();
        if (mag == 0.0f) return Quaternion();
        return *this * (1.0f / mag);
    }

    // Conjugaci�n del Quaternion
   
    Quaternion conjugate() const {
        return Quaternion(w, -x, -y, -z);
    }

    // Devuelve el cuaterni�n inverso.

    Quaternion inverse() const {
        float magSquared = magnitude() * magnitude();
        if (magSquared == 0.0f) return Quaternion();
        return conjugate() * (1.0f / magSquared);
    }

    // Rotaci�n de un vector 3D usando el cuaterni�n.

    array<float, 3> rotate(const array<float, 3>& v) const {
        Quaternion qv(0, v[0], v[1], v[2]);
        Quaternion qr = (*this) * qv * conjugate();
        return { qr.x, qr.y, qr.z };
    }

    // Devuelve un puntero a los datos del cuaterni�n.
 
    const float* data() const {
        return &w;
    }

    // Imprime los componentes del cuaterni�n en consola.
     
    void print() const {
        cout << "(" << w << ", " << x << ", " << y << ", " << z << ")" << endl;
    }
};