#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5}; //static array
    int start = 0 , n = 5 , end = n-1 ,temp;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]  = temp;
        start++;
        end--;
    }
    //reverse array
    printf("reversed array: ");
    for(int i=0 ; i<n; i++){
        printf(" %d ",arr[i]);
        }
        printf("\n");
        return 0;
}


/*#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int temp,i=0,n = 4;
    for(i = 0 ; i <=n ; i++,n--){
        temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
    }
    printf("Reversed array : ");
    n = 4;
    for(i = 0 ; i <= n ;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array values: ");
    // Dynamically passing an array values
    for(int i = 0; i<n ; i++){
        scanf(" %d ",&arr[i]);
    }
    // reverse array
    printf("Reversed array : ");
    for(int i=0,j=n-1 ; i <= j ; i++){
        printf(" %d ",arr[i]);
        }
        printf("\n");
        return 0;
}
*/
