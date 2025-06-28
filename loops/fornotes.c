/*
loops:
why?:
implementing a certain set of statments repeatedly.

forloops,while loops,do while .

*/


#include <stdio.h>

int main()
 {
//normal for loop
    for (int i = 1; i < 5; i++)
     //for(intialisation;condition;updation)
    {
        printf("%d\n",i);
    //  code or statements to repeat
    }
    /* how for loop runs 
    1. first intialisation statement executes 
    2.checks condition statement 
    3. if true enters inside loopexecutes the statements 
    4.updation statement executes 
    5. checks condition statement and enter or exits loops 
    */

/*
types of initilisations :
1. single int i=o;
2.can be initilised with float
3. can be initilised with char
4. multiple variables int i=1,j=5;

types of conditions :
1. any logical expression is valid
2.non zero expresion is always true -infinite loops 
3.

types of updations:
1.i++ -normal for 
2. i-- -decreasing for 
3. i = i+1;
4= i = i+5
5. i = i-5
6. i=2*i
7. i=2+3*i
any valid maths equation with left side one operand .
*/
//types of for usage .
for (int i = 5; i >= 1; i--)
{  printf("%d\n",i); }

for (int i = 0; i < 25; i=i+5)
{  printf("%d\n",i); }

for (int i = 25; i>=1; i=i-5)
{  printf("%d\n",i); }

for (int i = 1; i < 25; i=i*2)
{  printf("%d\n",i); }

for (int i = 24; i>=1; i=i/2)
{  printf("%d\n",i); }

for (int i = 1; i<=50; i=2+3*i)
{  printf("%d\n",i); }

//float intialised
for (float i = 1.0; i <= 5.0; i++)
{  printf("%f\n",i); }

//char intialised
for (char i = 'a'; i <= 'z'; i++)
{  printf("%c\n",i); }

// multiple variables
for (int i = 1, j = 5; i <= 10 && j >= 1; i++, j--)
{
    printf("%d\n", i);
    printf("%d\n", j);
}
// in coondition we can use any logic build using &&,||,! etc.


// use of break and continue 
 for (int i = 1; i <= 10; i++)
      {
        if (i == 5) {
            continue;//skips that iteration 
        }
        if (i == 8) {
            break; // comes out of loop means fron then no iteration occurs 
        }
        printf("%d ", i);
    }
    return 0;

}