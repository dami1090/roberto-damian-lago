#include <stdio.h>
#include <stdlib.h>
#include "lab.h"
#include <string.h>
#include <conio.h>

void inicializarMedicamentos(eMedicamento lista[], int M)
{
     int codigo[]={1,2,3,4,5};
    char descrip[][100]={"valium","ibu","seretide","aspirina","diclo"};
    float precio[]={155,76,352,14.50,166.25};
    int idLab[]={1,2,3};
    int stock[]={15,21,35,44,2};

    int i;
    for(i=0;i<M;i++)
    {
            lista[i].codigo=codigo[i];
            lista[i].precio=precio[i];
            lista[i].idLab=idLab[i];
            lista[i].stock=stock[i];
            strcpy(lista[i].descrip,descrip[i]);
    }

}

void inicializarLaboratorio(eLaboratorio lista[], int L)
{
    int idLab[]={1,2,3};
    char nombreLab[][100]={"bago","roemmers","bayer"};
    char direccionLab[][100]={"mitre","belgrano","sarmiento"};
    char telefonoLab[][100]={"15653822","1145301898","42012254"};

    int i;
    for(i=0;i<L;i++)
    {
        lista[i].idLab=idLab[i];
        strcpy(lista[i].nombreLab,nombreLab[i]);
        strcpy(lista[i].direccionLab,direccionLab[i]);
        strcpy(lista[i].telefonoLab,telefonoLab[i]);
    }
}
void inicializarCliente(eCliente lista[], int C)
{
    int idCliente[]={0,1,2,3,4,5,6,7,8,9};
    char nombreCliente[][100]={"raul","whashintong","aldo","nedved","caruso","ash","piccolo","sasha","morgana","gulses"};
    int codigo[]={1,2,3,4,5,1,1,3,4,2};

    int i;
    for(i=0;i<C;i++)
    {
        lista[i].idCliente=idCliente[i];
        lista[i].codigo=codigo[i];
        strcpy(lista[i].nombreCliente,nombreCliente[i]);
    }
}

/*void mostrarListaMedicamento(eMedicamento[],MEDIC)
{
    int i;
    for(i=0;i<MEDIC;i++)
    {
        if(eMedicamento[i])
    }
}*/

void mostrarListaCliente(eCliente lista[],int C)
{
    int i;
    for(i=0;i<C;i++)
    {
        mostrarCliente(lista[i]);
    }
}

void mostrarCliente(eCliente cli)
{
    printf("%d--%s--%d\n", cli.idCliente,cli.nombreCliente,cli.codigo);
}

void mostrarTodosMedicMASRazSoc(eLaboratorio listaL[],eMedicamento listaM[],int M)
{
    int i;
    for(i=0;i<M;i++)
    {
        mostrarMedicMASRazSoc(listaL[i],listaM[i]);
        //mostrarMedicMASRazSoc(listaM[i]);
    }
}

void mostrarMedicMASRazSoc(eLaboratorio lab,eMedicamento med)
{
    printf("%d--%s--%s\n", med.codigo,med.descrip,lab.nombreLab);
}
