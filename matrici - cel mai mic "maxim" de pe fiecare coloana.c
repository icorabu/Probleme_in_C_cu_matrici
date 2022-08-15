//maximul de pe fiecare coloana
//si apoi cel mai mic "maxim"
#include <stdio.h>
//#include <conio.h>

#define MAX 100

int a[MAX][MAX];

void main(void){
    int n,m;
    int i,j;
    int max,minmax;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    
    for (i=0;i<n;i++)
        for (j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    
    minmax = a[0][0];
    for (j=0;j<m;j++){
        max = a[0][j];
        for (i=0;i<n;i++){
            if (max<a[i][j])
                max = a[i][j];
        }
        minmax = (minmax>max)?max:minmax ;
    }
    printf("minmax = %d\n",minmax);

}
