#include <stdio.h>
#include <string.h>
// #include <math.h>
#include <stdlib.h>
#include "push_swap.h"


void moveZeroes(int* nums, int numsSize){
    int i, size, temp;

    i = 0;
    while (nums[numsSize - 1] != 0 || nums[numsSize - 2] != 0)
    {
        if (nums[i] == 0 && i < numsSize - 1)
        {
            temp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = temp;
        }
        i++;
        if (i == numsSize - 1)
            i = 0;
    }
}

int main(int ac, char **av) 
{

    int nums[] = {0,1,0,3,12};
    moveZeroes(nums, 5);

    int i = 0;
    while (i<5)
    {
        printf("%d\n", nums[i]);
        i++;
    }
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

    // int i = 2;
    // int num = atoi(av[1]);

    // if (ac == 2)
    // {
    //     while (i <= num)
    //     {
    //         if(num % i == 0)
    //         {
    //             printf("%d", i);
    //             if (i == num)
    //                 break;
    //             printf("*");
    //             num /= i;
    //             i = 2;
    //         }
    //         i++;
    //     }
    // }
    return 0;
}
