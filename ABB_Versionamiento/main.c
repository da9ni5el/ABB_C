#include <stdio.h>
#include <stdlib.h>
#include "recurso.h"

void iniciarArbol(nodo**raiz)
{
    (*raiz)->izdo = NULL;
    (*raiz)->dcho = NULL;
}

nodo*crearNuevo(int dato)
{
    nodo*nuevo = (nodo*)malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->izdo = nuevo->dcho = NULL;
    return nuevo;
}

void insertar(nodo**raiz, int dato)
{
    if(!(*raiz))
        *raiz = crearNuevo(dato);
    else if(dato < (*raiz)->dato)
        return insertar(&((*raiz)->izdo),dato);
    else
        return insertar(&((*raiz)->dcho), dato);
}

void recorrerInorden(nodo*raiz)
{
    if(raiz== NULL)
        return;
    recorrerInorden(raiz->izdo);
    printf("El valor del nodo es: %d\n", raiz->dato);
    recorrerInorden(raiz->dcho);
}


int main()
{
    raiz = (nodo*)malloc(sizeof(nodo));    
    iniciarArbol(&raiz);
    raiz = NULL;
    insertar(&raiz, 10);
    insertar(&raiz, 5);
    insertar(&raiz, 16);
    insertar(&raiz, 3);

    recorrerInorden(raiz);
    return 0;
}
