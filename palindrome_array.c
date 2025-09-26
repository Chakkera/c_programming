#include <stdio.h>
int main(){
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array values :");
    for(int i=0 ;i<n ;i++){
        scanf(" %d ",&arr[i]);
    }
    // to find palindrome
    int flag=1; //assume that palindrome
    for(int i=0 ,j =n-1; i<j ; i++ , j--){
        if(arr[i] != arr[j]){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("Yes , it's palindrome");
    }else
    {
        printf("No, it's not palindrome");
    }
    printf("\n");
    return 0;
}
