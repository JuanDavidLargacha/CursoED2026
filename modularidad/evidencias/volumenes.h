#ifndef VOLUMENES_H
#define VOLUMENES_H
#define PI 3.14159 

float volumencilindro(float radio, float altura) {
    return PI * radio * radio * altura;
}

float volumecubo(float lado) {
    return lado * lado * lado;
}
#endif