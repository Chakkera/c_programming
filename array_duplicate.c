#include <stdio.h>
#define N 10

int main(){
    int arr[N] = {0};
    int num ;
    printf("Enter the number");
    scanf("%d" ,&num);
    while(num > 0){
        int rem = num % 10 ;
        if(arr[rem] == 1)
            break ;
            arr[rem] = 1;
            num = num /10;
    }
    if(num > 0){
        printf("YES");
    }else{
        printf("NO");
    }
}
