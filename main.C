#include <stdio.h>
#include "tp1.h"

int main()
{
    printf("Hello World!\n");

    int p = 6;
    int m = 9;
    int a=2;
    int b=3;

    compare(p,m);
    f100();
    w100();

    int nombre=42;
    memory(nombre);

    sum(a,b);

    int liste[]={3,4,1,5,7,9};
    int num=5;

    num_finder(liste, num,6);

    int liste2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int taille2 = 31;
    int num2=9;
    binary_search(liste2, num2, taille2);

    int liste3[] = {5, 2, 9, 1, 3};
    int taille3 = 5;

    selection_sort(liste3, taille3);

    return 0;
}



