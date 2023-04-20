#include <stdio.h>
#define MAX 5

struct {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
} typedef compu;

void mostrarComputadoras(compu *puntero);
void mostrarPcMasVieja(compu *puntero); 
void mostrarPcMayorVelocidad(compu *puntero);                 

int main(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

     
    compu pc1= {1, 2018, 6, tipos[0]};
    compu pc2= {3, 2023, 3, tipos[3]};
    compu pc3= {2, 2020, 2, tipos[5]};
    compu pc4= {1, 2019, 5, tipos[1]};
    compu pc5= {1, 2023, 6, tipos[4]};
     
    compu arregloPc[MAX] = { pc1, pc2, pc3, pc4, pc5 };
    compu *punteroPc;
    punteroPc = arregloPc;

    mostrarComputadoras(punteroPc);
    mostrarPcMasVieja(punteroPc);
    mostrarPcMayorVelocidad(punteroPc);

    return 0;
}

//DEFINICION DE FUNCIONES

void mostrarComputadoras(compu *puntero){
    printf("----- Lista de PC ------- ");
    for (int i = 0; i < MAX; i++)
    {   
        printf("\nPC Nro: %d", i+1);

        printf("\nVelocidad de procesamiento en GHz: %d ", puntero[i].velocidad);
        printf("\nAnio de fabricacion: %d", puntero[i].anio);
        printf("\nCantidad de Nucleos: %d", puntero[i].cantidad);
        printf("\nTipo de procesador: %s ", puntero[i].tipo_cpu);
        printf("\n----------------------------------------------\n");
    }
    
}

void mostrarPcMayorVelocidad(compu *puntero) {
    int indice = 0;

    printf("PC Mayor Velocidad");
    for (int i = 0; i < MAX; i++)
    {   
        if (puntero[i].velocidad >= puntero[indice].velocidad) {
            indice = i; 
        }
        
    }
        printf("\nVelocidad de procesamiento en GHz: %d ", puntero[indice].velocidad);
        printf("\nAnio de fabricacion: %d", puntero[indice].anio);
        printf("\nCantidad de Nucleos: %d", puntero[indice].cantidad);
        printf("\nTipo de procesador: %s ", puntero[indice].tipo_cpu);
        printf("\n----------------------------------------------\n");
}

void mostrarPcMasVieja(compu *puntero) {
    int indice = 0;

    printf("PC mas vieja");
    for (int i = 0; i < MAX; i++)
    {   
        if (puntero[i].velocidad >= puntero[indice].anio) {
            indice = i; 
        }
        
    }
        printf("\nVelocidad de procesamiento en GHz: %d ", puntero[indice].velocidad);
        printf("\nAnio de fabricacion: %d", puntero[indice].anio);
        printf("\nCantidad de Nucleos: %d", puntero[indice].cantidad);
        printf("\nTipo de procesador: %s ", puntero[indice].tipo_cpu);
        printf("\n----------------------------------------------\n");

}
