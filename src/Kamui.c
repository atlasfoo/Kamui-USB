#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

int atrrib(int n){
    if(n<=0 || n>3){
        return 1;
    }
    switch(n){
        case 1:{
            printf("Accediendo a directorios, eliminando archivos infectados\n");
            system("dir /ah");
            system("pause");
            system("del /q/f/a/s *.ini");
            system("del /q/f/a/s *.lnk");
            system("del /q/f/a/s *.inf");
            system("del /q/f/a/s RECYCLER");
            system("rd RECYCLER");
            return 0;
        }
        case 2:
        {
            printf("Mostrando archivos ocultos...\n");
            system("attrib -r -s -h /s /d *.*");
            return 0;
        }
        case 3:{
            return -1;
        }
    }
    return 1;
}


int main(void){
    system("color 17");
    while (true)
    {
        printf("\t\t\t\t\t\tEsto es Kamui USB ANTIVIRUS\n");
        printf("\t\t\t\t\t(Usar unicamente dentro de memorias USB)\n");
        printf("\t\t\t\t\t\tSeleccione una opcion\n\n\n1.Remover Virus\n2.Mostrar archivos ocultos\n3.Salir\n");
        int opt=get_int("Sel: ");
        system("cls");
        if(atrrib(opt)==0){
            printf("Se ha realizado la opcion correctamente  :D\n\n");
        }else if(atrrib(opt)==1){
            eprintf("Opcion no valida\n");
        }else{
            break;
        }
        system("pause");
        system("cls");
        
    }
    printf("TechNica S.E. 2018 (Universidad Nacional de Ingenieria, FCYS), Managua, Nicaragua\n");
    printf("Recuerde presionar F5 ;)\n");
    system("pause");
    return 0;
}