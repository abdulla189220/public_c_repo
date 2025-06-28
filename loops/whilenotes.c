/* while Loop in C
Syntax:
    while (condition) {
        // statements to repeat
    }
- The while loop repeats a block of code as long as the condition is true.
- The condition is checked before the loop body is executed.
- If the condition is false at the start, the loop body is not executed at all.
*/

#include <stdio.h>

int main()
{
    // Normal while loop
    int i = 1;
    while (i < 5)
    // while(condition)
    {
        printf("%d\n", i);
        // code or statements to repeat
        i++; // updation done inside loop
    }

    /* how while loop runs
    1. checks condition statement
    2. if true, enters inside loop and executes the statements
    3. updation statement executes (usually inside the loop)
    4. checks condition statement again and enters or exits loop
    */

    /*
    types of initialisations:
    1. single int i=0;
    2. can be initialised with float
    3. can be initialised with char
    4. multiple variables (use separate statements)

    types of conditions:
    1. any logical expression is valid
    2. non-zero expression is always true - infinite loops

    types of updations:
    1. i++ - normal increment
    2. i-- - decrement
    3. i = i+1;
    4. i = i+5;
    5. i = i-5;
    6. i = 2*i;
    7. i = 2+3*i;
    any valid math equation with left side one operand.
    */

    // types of while usage
    i = 5;
    while (i >= 1)
    { printf("%d\n", i); i--; }

    i = 0;
    while (i < 25)
    { printf("%d\n", i); i = i + 5; }

    i = 25;
    while (i >= 1)
    { printf("%d\n", i); i = i - 5; }

    i = 1;
    while (i < 25)
    { printf("%d\n", i); i = i * 2; }

    i = 24;
    while (i >= 1)
    { printf("%d\n", i); i = i / 2; }

    i = 1;
    while (i <= 50)
    { printf("%d\n", i); i = 2 + 3 * i; }

    // float initialised
    float f = 1.0;
    while (f <= 5.0)
    { printf("%f\n", f); f++; }

    // char initialised
    char c = 'a';
    while (c <= 'z')
    { printf("%c\n", c); c++; }

// multiple variables using while loop
int i = 1, j = 5;
while (i <= 10 && j >= 1)
{
    printf("%d\n", i);
    printf("%d\n", j);
    i++;
    j--;
}
// in condition we can use any logic built using &&, ||, ! etc.

    // use of break and continue
    i = 1;
    while (i <= 10)
    {
        if (i == 5) {
            i++;
            continue; // skips that iteration
        }
        if (i == 8) {
            break; // comes out of loop, no further iteration
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}