#include <stdio.h>
#include <stdlib.h>

int main(){
    char *name = malloc(sizeof(char)*5);

    printf("Enter Your Name : ");
    fgets(name,2,stdin);
    printf("you have typed : %s",name);

    return 0;
}

/*
    breakdown {
        first create a size of character*5 time space into HEAP,
        then using fgest() limit the number of input to '2':
        HEAP Structure :
            name : [input] \0
        
        \0 == it refers that the space ends hare.
        i set to the input will just contain the 'one' character.
    }
*/