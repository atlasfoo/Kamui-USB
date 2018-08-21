#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

void delete_recycler(){
    system("dir /ah");
    system("pause");
    system("del /q/f/a/s *.ini");
    system("del /q/f/a/s *.lnk");
    system("del /q/f/a/s *.cmd");
    system("del /q/f/a/s *.dll");
    system("del /q/f/a/s *.inf");
    system("del /q/f/a/s RECYCLER");
    system("rd RECYCLER");
} 

int atrrib(int n){
    if(n<=0 || n>3){
        return 1;
    }
    switch(n){
        case 1:{
            printf("Accediendo a directorios, eliminando archivos infectados\n");
            delete_recycler();
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

void display_exit(){
    printf("\t\tTechnica S.E. 2018 (Universidad Nacional de Ingenieria, FCYS), Managua, Nicaragua\n");
    printf("\t\t\t\t\tRecuerde presionar F5 ;)\n\n\n\n\n\n\n\n\n");
}


int main(void){
    system("color 4F");
    while (true)
    {
        printf("\t\t\t\t\t\t    Kamui USB ANTIVIRUS\n");
        printf("\t\t\t\t\t(Usar unicamente dentro de memorias USB)\n");
        printf("\t\t\t\t\t\t   Seleccione una opcion\n\n\n1.Remover Virus\n2.Mostrar archivos ocultos\n3.Salir\n");
        int opt=get_int("Sel: ");
        system("cls");
        if(atrrib(opt)==0){
            printf("Se ha realizado la opcion correctamente  :D\n\n");
        }else if(atrrib(opt)==1){
            eprintf("OPCION NO VALIDA!!\nPresione cualquier tecla para regresar al menu principal.\n");
        }else{
            break;
        }
        fflush(stdin);
        getchar();
        system("cls");
        
    }
    display_exit();
    system("pause");
    return 0;
}