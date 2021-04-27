#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
 
using namespace std;
 
int sprawdz(int l, int i, int liczba[]){
    int j;
    for(j=0; j<i; ++j){
        if(l == liczba[j]){
            l = rand() % 10;
            l = sprawdz(l,i,liczba);
        }
    }
    return l;
}
 
void wczytaj(int tab[]){
    int i;
    printf("podaj 10 roznych liczb\n");
    for(i=0; i<10; ++i){
        scanf("%d",&tab[i]);
    }
}
 
void losowanie(int liczba[]){
    int i,l;
    for(i=0; i<8; ++i){
        l = rand() % 10;
        l = sprawdz(l,i,liczba);
        liczba[i]=l;
    }
}
 
void wypisz(int tab[], int liczba[]){
    int i;
    printf("wylosowane 8 liczb\n");
    for(i=0; i<8; ++i){
        printf("%d ",tab[liczba[i]]);
    }
}
 
int main(){
 
    int liczba[8];
    srand(time(NULL));
    int tab[10];
 
    wczytaj(tab);
    losowanie(liczba);
    wypisz(tab,liczba);
 
    return 0;
}

