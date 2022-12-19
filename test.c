#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    while(i < n*2-1)
    {
        j = 0;
        
        while (j < n*2-1)
        {
            if (j >= i && j <= n - i)
                printf("%d ", n - i);
            else
                printf("%d ", n);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
