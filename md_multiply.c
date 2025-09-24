#include <stdio.h>
int main(){
    int a[5][5] = {{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j,mul = 1;
    printf("\n Row multiply : ");
    for(i = 0 ; i < 5 ; i++){
        for(j = 0 ; j < 5 ; j++){
            mul *= a[i][j];
        }
        printf(" %d ",mul);
        mul = 1;
    }
    printf("\n Column multiply : ");
    for( j = 0 ; j < 5 ; j++){
        for( i = 0 ; i < 5 ; i++){
            mul *= a[i][j];
        }
        printf(" %d ",mul);
        mul = 1;
    }
    return 0;
}
