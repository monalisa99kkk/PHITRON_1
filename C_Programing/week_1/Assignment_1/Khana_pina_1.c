#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
       int tk;
    scanf("%d",&tk);
    if(tk >= 1000 )
    {
        printf("Three Kacchi\n");
    }
    else if(tk >= 500)
    {
        printf("One Large Pizza\n");
    }
    else if(tk >= 250 )
    {
        printf("Three Small Burger\n");
    }
    else if(tk >=100)
    {
        printf("Three Fuchka\n");
    }
    else 
    {
        printf("Nothing\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}