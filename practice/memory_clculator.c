#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);

int main(){
    int num1, num2,result;
    num1 = 4;
    num2 = 70;
    result = sum(num1,num2);

    size_t memoryByte = sizeof(num1) + sizeof(num2)+sizeof(result);
    double memoryMB = (double)memoryByte/(1024*1024);
    printf("Result = %d",result);
    printf("Total memory consumed : %zu\n",memoryByte);
    return 0;
}
int sum(int a,int b){
    return a+b;
}

// what is size_t variable does  ??
/*
    

*/