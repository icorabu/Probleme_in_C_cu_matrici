//cel mai mic element de pe liniile impare
//cel mai mare element de pe liniile pare
#include <stdio.h>
#define MAX 200
int a[MAX][MAX],b[MAX][MAX];

int main(){
    int i,j,n,m;
    int min,max;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    for (i=0;i<n;i++){
        if (i%2 == 1){
            min = a[i][0];
            for (j=0;j<m;j++){
                if (a[i][j]<min)
                    min = a[i][j];
            }
            printf("Minimul pe linia impara %d este: %d\n",i,min);
        }
            //printf("Minimul pe linia para %d este: %d\n",i,min);
        else{
            max = a[i][0];
            for (j=0;j<m;j++){
                if (a[i][j]>max)
                    max = a[i][j];
            }
            printf("Maximul pe linia para %d este: %d\n",i,max);
        }
        
    }
    return 0;
}
