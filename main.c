#include <stdio.h>
#include <stdlib.h>
#include "EDFilas.h"
#include "EDPila.h"


int buscarF(TFila *pF,int obj){
    int compro=0,dato;
    while (FilaVacia(*pF)!=1 && compro==0){
        QuitardeFila(pF,&dato);
        if (obj==dato){
            compro=1;
        }
    }
    return compro;
}


int main() {
    TFila original;
    TFila copia;
    TPila S;
    TFila Q;
    int dato,obj;
    /*Fila s,q:
     *
*/
    CrearFila(&original,sizeof(dato));
    CrearFila(&copia,sizeof(dato));
   // printf("La fila esta: %i\n", FilaVacia(original));

    dato =9;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);
    dato =1;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);
    dato =4;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);
    dato =6;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);
    dato =7;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);
    dato =23;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);
    dato =12;
    AgregarAFila(&original,&dato);
    AgregarAFila(&copia,&dato);

    obj = 12;
    obj=buscarF(&copia,obj);

    if(obj==1){
        printf("Se encontro el elemento");
    }else{
        printf("No se encontro el elemento");
    }

    //PILA Y FILA
    CrearPila(&S,sizeof(dato));
    CrearFila(&Q,sizeof(dato));

    dato = 3;
    Apilar(&S,&dato);
    dato = 12;
    Apilar(&S,&dato);
    dato = 5;
    AgregarAFila(&Q,&dato);
    dato = 8;
    AgregarAFila(&Q,&dato);



    return 0;
}
