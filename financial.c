#include <stdio.h>
#include <stdlib.h>
#define nax 10000;

typedef struct NodoPila{
    int valor;
    struct NodoPila* ptrSig;
}TNodoPila;

typedef TNodoPila* TPila;

void crear(TPila* ptrPila){
    *ptrPila = NULL;
}

void push(TPila* P, int valor){
    TNodoPila* nuevo = (TNodoPila*)malloc(sizeof(TNodoPila));
    nuevo->valor = valor;
    nuevo->ptrSig = *P;
    *P = nuevo;
}

int pila_vacia(TPila *P){
    return *P==NULL;
}

int pop(TPila* P){
    TNodoPila *ptrEliminar;
    int valor;

    if(!pila_vacia(P)){
        ptrEliminar = *P;
        valor = ptrEliminar->valor;
        *P  = ptrEliminar->ptrSig;
        free(ptrEliminar);
        return valor;
    }

    return -1;
}

int top(TPila* P){
    if(!pila_vacia(P)){
        return (*P)->valor;
    }

    return -1;
}

void finalizar_pila(TPila ptrPila){
    TNodoPila* ptrEliminar;

    ptrEliminar = ptrPila;

    while(ptrEliminar != NULL){
        ptrPila = ptrPila->ptrSig;
        free(ptrEliminar);
        ptrEliminar = ptrPila;
    }
}

void imprime_pila(TPila ptrPila){
    if(ptrPila == NULL)
        return;
    
    printf("%d ", ptrPila->valor);
    imprime_pila(ptrPila->ptrSig);
}

void ordenar_pila(TPila *P){
    int max, aux;
    TPila P2;
    P2 = NULL;

    while(!pila_vacia(P)){
        max = pop(P);

        while(!pila_vacia(&P2)){
            aux = top(&P2);

            if(aux > max){
                push(P, aux);
                pop(&P2);
            }else{
                break;
            }
        }

        push(&P2, max);
    }

    finalizar_pila(*P);
    *P = NULL;
    
    while(!pila_vacia(&P2)){
        push(P, pop(&P2));
    }

    finalizar_pila(P2);
}
int main(){
    TPila s;
    crear(&s);
    int arr[nax];
    int val;
    printf("Ingrese la cantidad de dias");
    scanf("%i",&n);
    for(int i=0;i<n;i++) arr[i]=0;

    printf("Ingrese los precios de los productos con respecto a los dīas\n");
    for(int i=0;i<n;i++){
        scanf("%i",&val);
    }
    int j=i;
    while(!pila_vacia(&s)){
        if(top(&s) < val){
           pop(&s);
           j--;
           arr[i] =+arr[j]
    }
    arr[i]+=1;
}
for(int i=0;i<n;i++){
    printf("%i",arr[i]);
}

}