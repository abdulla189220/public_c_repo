/* do-while Loop in C
Syntax:
    do {
        // statements to repeat
    } while (condition);

- The do-while loop repeats a block of code as long as the condition is true.
- The loop body is executed at least once before the condition is checked.
- If the condition is false at the start, the loop body still executes once.
*/

#include <stdio.h>

int main()
{
    // Normal do-while loop
    int i = 1;
    do
    {
        printf("%d\n", i);
        // code or statements to repeat
        i++; // updation done inside loop
    } while (i < 5);

    /* how do-while loop runs
    1. executes the loop body first
    2. checks condition statement
    3. if true, enters loop again and executes the statements
    4. updation statement executes (usually inside the loop)
    5. checks condition statement again and enters or exits loop
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

    // types of do-while usage
    i = 5;
    do { printf("%d\n", i); i--; } while (i >= 1);

    i = 0;
    do { printf("%d\n", i); i = i + 5; } while (i < 25);

    i = 25;
    do { printf("%d\n", i); i = i - 5; } while (i >= 1);

    i = 1;
    do { printf("%d\n", i); i = i * 2; } while (i < 25);

    i = 24;
    do { printf("%d\n", i); i = i / 2; } while (i >= 1);

    i = 1;
    do { printf("%d\n", i); i = 2 + 3 * i; } while (i <= 50);

    // float initialised
    float f = 1.0;
    do { printf("%f\n", f); f++; } while (f <= 5.0);

    // char initialised
    char c = 'a';
    do { printf("%c\n", c); c++; } while (c <= 'z');

// multiple variables using do-while loop
i = 1;
int j = 5;
do
{
    printf("%d\n", i);
    printf("%d\n", j);
    i++;
    j--;
} while (i <= 10 && j >= 1);
// in condition we can use any logic built using &&, ||, ! etc.

    // use of break and continue
    i = 1;
    do
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
    } while (i <= 10);

    return 0;
}