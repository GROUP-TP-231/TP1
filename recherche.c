#include<stdio.h>
#include<stdlib.h>

int main(){
    int valeur, T[30]={1,2,5,54,78,5
                      ,755,168,646,868,6544
                      ,56568,6568,6854,6846,1646,686
                      ,4556,6456,456,468,44,612
                      ,47,566,4886,54,1};
    // le tableau a ete initialiser des le depart;

    printf("entrer la valeur recherchée: ");
    scanf("%d",&valeur);
    for(int i = 0; i < 30;i++){
        if(valeur==T[i]){
            printf("valeur trouvée!\n");
           break;
        }

    }
    printf("valeur non trouvée!!\n");

}