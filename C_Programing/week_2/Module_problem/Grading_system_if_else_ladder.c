#include<stdio.h>
int main ()
{
    int marks;
    scanf("%d",&marks);
    if(marks < 0 || marks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(marks >= 80 && marks <=100)
    {
        printf("You have got A+ Grade\n");
    }
    else if(marks >= 70 && marks <=79)
    {
        printf("You have got A Grade\n");
    }
    else if(marks >= 60 && marks <=69)
    {
        printf("You have got A- Grade\n");
    }
    else if(marks >= 50 && marks <=59)
    {
        printf("You have got B Grade\n");
    
    }
    else if(marks >= 40 && marks <=49)
    {
        printf("You have got C Grade\n");
    }
    else if(marks >=33 && marks <= 39)
    {
        printf("You have got D Grade\n");
    }
    else 
    {
        printf("You have got F Grade\n");
    }
   return 0; 
}