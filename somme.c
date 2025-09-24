#include <stdio.h>


int main() {
    int i, j, lignes, colonnes;
    int A[lignes][colonnes], B[lignes][colonnes], Somme[lignes][colonnes];

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &colonnes);

    printf("\nEntrez les elements de la matrice A :\n");
    for(i = 0; i < lignes; i++) {
         for(j = 0; j < colonnes; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEntrez les elements de la matrice B :\n");
    for(i = 0; i < lignes; i++) {
         for(j = 0; j < colonnes; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < lignes; i++) {
         for(j = 0; j < colonnes; j++) {
            Somme[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nLa somme des deux matrices est :\n");
    for(i = 0; i < lignes; i++) {
        for(j = 0; j < colonnes; j++) {
            printf("%d\t", Somme[i][j]);
        }
        printf("\n");
    }

    return 0;
}
