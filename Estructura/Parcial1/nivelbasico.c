#include <stdio.h>

#define MAX 100
void mostrar();
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int arr[MAX];
int n = 0;
int datosIngresados = 0;

// Función para mostrar el arreglo
void mostrar() {
    printf("Arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Método Burbuja
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        printf("Pasada %d:\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                printf("Intercambio: ");
                mostrar();
            }
        }
        printf("Fin de pasada:\n");
        mostrar();
    }
}

// Método Selección
void selectionSort(int arr[], int n) {
    int i, j, min, temp;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

       int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        printf("Intercambio en posicion %d:\n", i);
        mostrar();
    }
}

// Método Inserción
void insertionSort(int arr[], int n) {
    int i, j, clave;
    for (int i = 1; i < n; i++) {
        int clave = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;

            printf("Movimiento:\n");
            mostrar();
        }

        arr[j + 1] = clave;

        printf("Inserción:\n");
        mostrar();
    }
}
int main() {
    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Registrar datos\n");
        printf("2. Mostrar arreglo\n");
        printf("3. Ordenar Burbuja\n");
        printf("4. Ordenar Seleccion\n");
        printf("5. Ordenar Insercion\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Cuantos datos desea ingresar: ");
                scanf("%d", &n);

                for (int i = 0; i < n; i++) {
                    printf("Dato %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }

                datosIngresados = 1;
                break;

            case 2:
                if (datosIngresados)
                    mostrar();
                else
                    printf("Primero debe ingresar datos.\n");
                break;

            case 3:
                if (datosIngresados)
                    bubbleSort(arr, n);
                else
                    printf("Primero debe ingresar datos.\n");
                break;

            case 4:
                if (datosIngresados)
                    selectionSort(arr, n);
                else
                    printf("Primero debe ingresar datos.\n");
                break;

            case 5:
                if (datosIngresados)
                    insertionSort(arr, n);
                else
                    printf("Primero debe ingresar datos.\n");
                break;

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while (opcion != 6);

    return 0;
}
