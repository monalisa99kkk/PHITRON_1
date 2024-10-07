#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int amount;
    scanf("%d",&amount);
    if(amount % 3 == 0)
    printf("Yes\n");
    else
        printf("No");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}