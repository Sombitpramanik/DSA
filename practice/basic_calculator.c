#include <stdio.h>
#include <stdlib.h>
void sum(int *a,int *b);

int main(){
    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));

    printf("Enter num1 : ");
    scanf("%d",num1);
    printf("Enter num2 : ");
    scanf("%d",num2);

    sum(num1,num2);

    size_t totalMemory = sizeof(int) + sizeof(int);
    printf("Memory space occupied: %zu bytes\n", totalMemory);

    // Convert to MB
    double totalMemoryMB = (double)totalMemory / (1024 * 1024);
    printf("Memory space occupied: %f MB\n", totalMemoryMB);

    free(num1);
    free(num2);
    return 0;
}

void sum(int *a, int *b){
    printf("sum of %d & %d is : %d\n",*a,*b,*a+*b);
}