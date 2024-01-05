// This is the Single Line Comment in C Language,

/*
    This is a
    Multiline Comment,

*/
/*
    Although C is a Statically Type Case Sensetive Language,
    I try to write this language as it a Capitalized Spelling Syntax
*/

#include <stdio.h> // standard input/output library functions 
// Commonly use as mother of `scanf()` & `printf()` Functions
#include <stdbool.h> // standared Library for the Bollean data type. like this :
/*
    true    Expands to the integer constant 1.
    false   Expands to the integer constant 0.
*/
#include <string.h> // standared library for string operations
/*
    Commonly Use functions :
        char  *strcpy(char *restrict, const char *restrict);
            syntax{
                strcpy(source, destination)
                // to copy the string, using pointer, first copy the pointer of the source and redirect that to destination
            }

*/


/*  Data Types {
        int, float, long, double -- this are stands for storing integer data. expect long, it is stands for add extra space inside of existing datatype
        syntax {
            int number;
            int number = 1;
            float number1 = 3.14;
            double number2 = 98.328723;
            long int number3 = 10121201212

        }
        usually double is the highest size of data storing integer unit.

        char, str -- this type data type is prefer to store the character and string type of dat, to use the str type should include the string.h
        syntax{
            char f_later_name = 's';
            char l_later_name = "s";

            str f_name = "sombit";
        }

        bool -- this is used for storing the boolean data
        syntax{
            bool isTrue = true;
            bool isFalse = false;

            true =1;
            false = 0;
        }

        pointer -- used to store the address (type of this is a integer)
        syntax{
            float abc = 3.14;
            *name_of_variable = abc;           

        }
        struct --  used for create user defined functions.
        syntax{
            struct name{
                int hi;
                float hello;

            }
        }
        use {
            struct name first_custom; // declare the variable
            struct first_custom.hi = 9; //assign the valse  
            struct first_custom.hello = 3.14; //assign the valse 
        }
}

*/

int main(){ // Mother of all Function, and the Execution fo the code start's from hear.
    printf("This is Hello From the C Language, compiled using GCC\n");
    bool isTrue = true;
    bool isFalse = false;

    printf("this is true : %d, This is False : %d\n",isTrue,isFalse);

    return 0;
}

// How this function works ?? 
/*
    First we have to declare the Return type of the Function, what type of value ot will return after complete its execution like this :
        int [it tells that, the function should only Return Integer type value] main()[this is the name of the function]{
            [this ``{}`` open close brackets tells that, this is the bounder of the function, within it everything,is belong to it]
            [Like in this main function i can create another variable called int sombit = 1; but outside this function ther is no availability of it.]


            return 0; [Finally at the end of the function tell that if the code run successfully, return the 0 means exit the program. ]
        }

    There is another way to create a Function like this :
        void [this void says that this function is not returning anything, thats why it refers to the void keyword] main(){
            [all stuffs are same like in the int main() function. expect it is not going to return anything.]
        }
*/
