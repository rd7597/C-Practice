#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d",&age);
    printf("Your age is %d\n",age);
    
    if(age>=18)
    {
        printf("You are eligible to vote\n");
    }
    
    else if(age<0)
    {
        printf("You are not born yet\n");
    }
    
    else if(age==0)
    {
        printf("You are just born\n");
    }
    
    else if(age>0 && age<18)
    {
        printf("You are a minor\n");
    }
    
    else if(age>100)
    {
        printf("You are not eligible to vote\n");
    }
    
    else if(age>150)
    {
        printf("You are not eligible to vote\n");
    }
    
    else if(age<-150)
    {
        printf("You are not eligible to vote\n");
    }

    return 0;
}