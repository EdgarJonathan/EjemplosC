#include <stdio.h>
#include <stdlib.h>

//llamadas asincronas y no asicronas tema de maniana

//structs
struct nodo
{
    char* dato;
    struct nodo *Siguiente;
} typedef Nodo;

//metodos
Nodo * crear(char *string);
void insertar(Nodo**p, char* string);
void imprimir(Nodo *p);

//variables



int main()
{
    Nodo*primero =NULL;

    insertar(&primero,"aadsf");
    insertar(&primero,"adfkajdlkfjhflkadsjflkjasdl;fj;f");
    insertar(&primero,"qholaa:v");
    insertar(&primero,"efasdfdffsf");
    insertar(&primero,"efsf");


    imprimir(primero);
    return 0;
}


Nodo * crear(char *string)
{
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato=string;
    nuevo->Siguiente=NULL;

    return nuevo;
}


void insertar(Nodo**p, char* string)
{
    Nodo * nuevo = crear(string);
    if(*p!=NULL)
    nuevo->Siguiente =*p;

    *p=nuevo;
}

void imprimir(Nodo *p)
{
    Nodo *temp =p;
    while(temp != NULL)
    {
        printf("dato->%s \n",temp->dato);
        temp=temp->Siguiente;
    }
}
