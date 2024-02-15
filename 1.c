/*
Name: Ahmed Jlidi
KUID: 2231171736
Program Description : c program that prints number in a special pattern
*/

/*std io library with max = 9 macro*/
#include <stdio.h>
#define MAX 9

//main function that takes no arguments
int main(void)
{
    //count var to keep track of current line
    int count = MAX;

    //loop that starts with i =0, keeps iterating if count hasnt reached last line, increment i by 1
    for (int i = 1; count > 0; i++)
    {
        //if i is less than current line print space
        if (i <= count)
        {
            printf(" ");
        }
        //else print i - count, for example i == 10, count == 9, 10 - 9 = 1
        else
        {
            printf("%d", i - count);
        }

        //if i > MAX + 1,  which is 10, rest i to 0,decrement cout by 1 an print new line to start over
        if (i >=  MAX + 1)
        {
            i = 0;
            count--;
            printf("\n");
        }
    }

    return 0;
}
