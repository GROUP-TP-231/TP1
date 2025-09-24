#include<stdio.h>
#include<stdlib.h>

int main(){
    int T[30]={1,2,5,54,78,26,27,30,30,755,168,646,868,6544,56568,6568,6854,6846,1646,686,4556,6456,456,468,44,612,47,566,4886,54};
    int perm;
    for(int i = 0; i < 29; i++){
        for(int j = 0; j < 29-i; j++){
            if(T[j] > T[j+1]){
                perm = T[j+1];
                T[j+1] = T[j];
                T[j] = perm;
            }
        }
    }
    printf("Le tableau trié est :\n");
    for(int i=0; i<30;i++){
        printf("%d\n",T[i]);
    }
    return 0;
}