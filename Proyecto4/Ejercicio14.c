#include <stdio.h>
#include <assert.h>
#include <limits.h>

typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

float peso_promedio (persona_t arr[], unsigned int longitud);
persona_t persona_de_mayor_edad (persona_t arr[], unsigned int longitud);
persona_t persona_de_menor_altura (persona_t arr[], unsigned int longitud);


int main(void) {
persona_t p1 = {"Paola", 21, 1.85, 75};
persona_t p2 = {"Luis", 54, 1.75, 69};
persona_t p3 = {"Julio", 40, 1.70, 80};
unsigned int longitud = 3;
persona_t arr[] = {p1, p2, p3};
printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
persona_t p = persona_de_mayor_edad(arr, longitud);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
p = persona_de_menor_altura(arr, longitud);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
}

float peso_promedio (persona_t arr[], unsigned int longitud) {
    float sum=0;
    unsigned int i=0;
    while (i<longitud) {
        sum=sum+arr[i].peso;
        i=i+1;
    }
    return sum=sum/longitud;
}

persona_t persona_de_mayor_edad (persona_t arr[], unsigned int longitud) {
    int max=INT_MIN;
    unsigned int i=0;
    persona_t ult;
    while (i<longitud) {
        if (arr[i].edad >= max) {
            max=arr[i].edad;
            ult= arr[i];
        }
        i=i+1;
    }
    return ult;
}

persona_t persona_de_menor_altura (persona_t arr[], unsigned int longitud) {
    float min=INT_MAX;
    unsigned int i=0;
    persona_t ult1;
    while (i<longitud) {
        if (arr[i].altura <= min) {
            min=arr[i].altura;
            ult1= arr[i];
        }
        i=i+1;
    }
    return ult1;
}
