#include <stdio.h>
#include <string.h>
// #include <math.h>
#include <stdlib.h>
#include "push_swap.h"

int main(int ac, char **av) 
{
    // s_swap  *f;
    // s_swap  *s;
    // s_swap  *t;
    // s_swap  *stackB;

    // stackB = lst_new(0);
    // f = lst_new(1);
    // s = lst_new(2);
    // t = lst_new(3);

    // add_back(&f,s);
    // add_back(&f,t);
    // pushB(&f,&stackB);

    // // delone(&s);
    // while (f != NULL)
    // {
    //     printf("%d\n", f -> data);
    //     f = f -> next;
    // }

    int i = 2;
    int num = atoi(av[1]);

    if (ac == 2)
    {
        while (i <= num)
        {
            if(num % i == 0)
            {
                printf("%d", i);
                if (i == num)
                    break;
                printf("*");
                num /= i;
                i = 2;
            }
            i++;
        }
    }
    return 0;
}
