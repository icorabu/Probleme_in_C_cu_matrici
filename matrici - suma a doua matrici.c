//suma a doua matrici cu n linii si m coloane
//rezultatul va fi o a TREIA matrice care are elementele
//ca sume intre elementele celor 2 matrici initiale
//C[i][j] = A[i][j] + B[i][j]
#include <stdio.h>
#define MAX 100
int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];

int main(){
    int n,m;
    int i,j;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("%d",c[i][j]);
        }
    return 0;
}
