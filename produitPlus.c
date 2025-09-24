#include <stdio.h>

int main() {
    int a,b,res=0;
    printf("Entrer a et b : ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++) {
        res+=a;
    printf("Resultat = %d\n",res);
    }
    return 0;
}