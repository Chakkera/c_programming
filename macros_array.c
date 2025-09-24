#include <stdio.h>

#define N 10

int main(){
    int arr[N] = {1,2,3,4,5,6,7,8,9};
    int i;
   // printf("%d \n",arr[1]);
    for(i = 0 ; i < N ; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    for(i = 9 ; i >= 0 ; i--){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    return 0;
}
