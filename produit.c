#include <stdio.h>

int main() {
    int i, j, k;
    int m, n, p;

    
    printf("Entrez le nombre de lignes de A : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de A (et lignes de B) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de B : ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    printf("\nEntrez les elements de la matrice A :\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEntrez les elements de la matrice B :\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("\nLe produit des deux matrices est :\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
