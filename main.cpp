#include <iostream>
#include <stdio.h>
using namespace std;

void pecahan ();
int main() {
    pecahan();
}
void pecahan (){
    int a,b,l,t;
    printf("Masukkan pembilang : ");
    scanf("%d",&a);
    printf("Masukkan penyebut : ");
    scanf("%d",&b);
    t=a/b;
    l=a%b;
    if(a%b==0)
        printf("Bilangan (%d/%d)\n disederhanakan menjadi %d",a,b,t);
    else if (a%b!=0)
        printf("Bilangan (%d/%d)\n disederhakan menjadi (%d %d/%d)",a,b,t,l,b);

    getchar();
}
