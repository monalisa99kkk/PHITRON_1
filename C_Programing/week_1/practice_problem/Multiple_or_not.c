#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a, b;
   scanf("%d %d",&a,&b);
   if(a%b==0 || b%a == 0)
   {
       printf("Yes\n");
   }
    else
    {
        printf("No");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
