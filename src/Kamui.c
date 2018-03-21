#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

int atrrib(int n){
    if(n<=0){
        eprintf("Opcion no Valida\n");
        return 1;
    }
    switch(n){
        case 1:{
            system("attrib -r -s -h /s /d *.*");
            return 0;
        }
        case 2:{
            system("del *.ini");
            system("del *.ink");
            system("del *.inf");
            return 0;
        }
        case 3:{
            return -1;
        }
        default:{
            printf("Opcion aun en desarrollo :)\n");
            return 1;
        }
    }
}


int main(void){
    system("color 9f");
    printf("\t\tBienvenidos a Kamui USB ANTIVIRUS\n");
    printf("(Usar unicamente dentro de memorias USB)\n");
    system("pause");
    while(true){
        system("cls");
        printf("\t\tSeleccione una opcion\n\n\n1.Mostrar archivos ocultos (remover recycler)\n2.Remover Virus\n3.Salir\n");
        int opt=get_int();
        system("cls");
        if(atrrib(opt)==0){
            printf("Se ha realizado la opcion correctamente  :D\n\n");
        }else if(atrrib(opt)==-1){
            break;
        }
        system("pause");
    }
    
    return 0;
}