
#include <stdio.h>
#include "lab.h"
#include <conio.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a,n;
    printf("Введите номер лабораторной\n");
    scanf("%d", &a);
    printf("Чтоб посмотреть доп.задание к лабораторной,введите 1\n");
    scanf("%d", &n);


    switch(a){
        case 1:
        if(n==1){lr1d();} else {lr1();}
        _getch();
        break;
        case 2:
        if(n==1){lr2d();} else {lr2();}
        _getch();
        break;
        case 3:
        if(n==1){lr3d();} else {lr3();}
        _getch();
        break;
        case 4:
        if(n==1){lr4d();} else {lr4();}
        _getch();
        break;
        case 5:
        if(n==1){lr5d();} else {lr5();}
        _getch();
        break;
        case 6:
        if(n==1){lr6d();} else {lr6();}
        _getch();
        break;
        case 7:
        lr7();
        _getch();
        break;
        default:
        printf("такой лабораторной не существует");
        break;
    }
}