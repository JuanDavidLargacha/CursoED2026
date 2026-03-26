#include <stdio.h>
#include "Areas.h"
#include "Volumenes.h"

int main() {
    float radio = 6.0;
    float lado = 6.0;
    
    printf("Area del circulo: %.2f\n", areacirculo(radio));
    printf("Area del cuadrado: %.2f\n", areacuadrado(lado));
    printf("Volumen del cilindro: %.2f\n", volumencilindro(radio, lado));
    printf("Volumen del cubo: %.2f\n", volumecubo(lado));

    return 0;
}