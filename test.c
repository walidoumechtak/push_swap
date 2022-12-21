#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "push_swap.h"

int main() 
{
    s_swap  *f;
    s_swap  *s;
    s_swap  *t;
    s_swap  *stackB;

    stackB = lst_new(0);
    f = lst_new(1);
    s = lst_new(2);
    t = lst_new(3);

    add_back(&f,s);
    add_back(&f,t);
    pushB(&f,&stackB);

    // delone(&s);
    while (f != NULL)
    {
        printf("%d\n", f -> data);
        f = f -> next;
    }

    return 0;
}
