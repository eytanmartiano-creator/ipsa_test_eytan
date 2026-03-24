#include <stdio.h>
#include "tp1.h"
#include <stdio.h>
#include "tp1.h"

void f100 (){
    for (int i = 1; i <=100; i++) {
        printf("%d\n",i);
    }
}

void w100(){
    int iw=0;
    while (iw<100){
        iw++;
        printf("%d\n",iw);
    }
}



int memory(int value){
    printf("nombre : %d\n",value);
    printf("adresse : %p\n",&value);
    return 0;
}


void compare(int p, int m){

    int max;
    if (p >= m) {
        max = p;
    } else {
        max = m;
    }
    printf("Le maximum est : %d\n", max);

}


int sum (int a, int b){
    int s=a+b;
    printf("a+b=%d",s);
    return s;
}

void num_finder(int liste[], int n, int taille) {
    int i = 0;
    while (i < taille && liste[i] != n) {
        i++;
    }

    if (i < taille) {
        printf("Le nombre %d se trouve a l'index %d\n", n, i);
    } else {
        printf("%d n’est pas dans la liste\n", n);
    }
}

#include <stdio.h>

void binary_search(int liste2[], int num, int taille) {
    int debut = 0;
    int fin = taille - 1;
    int i = 0;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        i++;
        printf("%d\n valeure intermediaire : ",liste2[milieu]);

        if (liste2[milieu] == num) {
            printf("Le nombre %d se trouve a l'index %d\n", num, milieu);
            printf("Le nombre d'essais est de %d\n", i);
            return;
        }
        else if (liste2[milieu] < num) {
            debut = milieu + 1;
        }
        else {
            fin = milieu - 1;
        }
    }

    printf("%d n'est pas dans la liste\n", num);
}


void selection_sort(int arr[], int taille) {

    for (int i = 0; i < taille - 1; i++) {

        int min = i;

        for (int j = i + 1; j < taille; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Échange
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("La liste triee : ");

    for (int i = 0; i < taille; i++) {
        printf("%d ", arr[i]);
    }
}
