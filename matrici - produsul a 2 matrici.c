//produsul a 2 matrici
//C[i][j]+=A[i][k]*B[k][j];
#include <stdio.h>
#define MAX 100
int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];

int main(){
    int n,m,p,i,j,k;
    printf("n = ");//nr de linii pt A
    scanf("%d",&n);
    printf("m = ");//nr de coloane pt A si linii pt B
    scanf("%d",&m);
    printf("p = ");//nr de coloane pt B
    scanf("%d",&p);
    //declaram elementele matricii A
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    //declaram elementele matricii B
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    //aflam elementele matricii C
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            c[i][j] = 0;
            for(k=0;k<m;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            printf("c[%d][%d] = %d  ",i,j,c[i][j]);
    return 0;
}

