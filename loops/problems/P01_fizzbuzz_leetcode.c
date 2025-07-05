/**
 * FizzBuzz Problem
 * Write a program that prints the numbers from 1 to n.
 *  But for multiples of three print "Fizz"instead of the number
 * and for the multiples of five print "Buzz".
 *  For numbers which are multiples of both three and five print "FizzBuzz".
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **fizzBuzz(int n)
{

    char **array = (char **)malloc(sizeof(char *) * n);
    // Allocate memory for an array of n strings.

    for (int i = 1; i <= n; i++)
    {
        array[i - 1] = (char *)malloc(sizeof(char) * 9);
        // Allocate memory for each string (up to 8 characters + null terminator)

        if (i % 15 != 0 && i % 5 != 0 && i % 3 != 0)
        {
            sprintf(array[i - 1], "%d", i);
            //sprintf is used print a string with
            // including %d,%f formats into a character array or string
            // it does not print to console.
        }
        else if (i % 15 == 0)
        {
            strcpy(array[i - 1], "FizzBuzz");
        }
        else if (i % 5 == 0)
        {
            strcpy(array[i - 1], "Buzz");
        }
        else if (i % 3 == 0)
        {
            strcpy(array[i - 1], "Fizz");
        }
    }

    return array;
}

/*
small revision for strings assignment and initialization:
1.strings are just arrays of characters ending with \0
2.Why can't we use = to assign strings (after declaration)?
❌ Invalid:

char str[10];
str = "Hello";  // ❌ Error! Cannot assign to array variable

Arrays are not assignable once declared. You must use strcpy() to copy
3.String Assignment: What Works, What Doesn’t
Type	                      Can use =?	                Modifiable?	           Example
char str[] = "Text";    	✅ only at initialization	✅ Yes	              Best for general usage
char *str = "Text";	        ✅ only at initialization	❌ No (read-only)	  Dangerous if modified
strcpy(str, "Text");	    ✅ after initialization	    ✅ Yes	              Use in loops or functions
*/

// lets understand the code step by step:

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);   // Read the value of n from user.

    if (n <= 0)
    {       
        printf("Please enter a positive integer.\n");
        return 1;  //here in main function if we return 1 or any non-zero value,
        // it indicates an error.
    }

    char** result = fizzBuzz(n); 
    //use fizzbuzz function to store array of strings in result.

   
    for (int i = 0; i < n; i++) {
        printf("%s\n", result[i]);
        free(result[i]);  
    }
    free(result);  

    return 0;
}
