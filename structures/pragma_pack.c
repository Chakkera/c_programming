#include <stdio.h>
#pragma pack(1) //force 1 byte aligment

struct packedStruct{
    char a;
    int b;
    char c;
};

#pragma pack() //reset

struct NormalStruct{
    char a;
    int b;
    char c;
};

int main(){
    printf("without structure padding : %zu bytes \n ",sizeof(struct packedStruct));
    printf("with structure padding : %zu bytes ",sizeof(struct NormalStruct));
    printf("\n");
    return 0;
    }
