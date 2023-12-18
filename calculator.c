#include<stdio.h>
int main()
{
    char opt;
    float num1, num2;
    float result;
    printf("select any operation: ");

    scanf("%c" , &opt);

    printf("enter num1: ");
    scanf("%f" , &num1);
    printf("enter num2: ");
    scanf("%f" , &num2);

    if(opt == '+')
    {
        result = num1 + num2;
        printf("%f" , result);
    }
    else if(opt == '-')
    {
        result = num1 - num2;
        printf("%f" , result);
    }
    else if(opt == '*')
    {
        result = num1 * num2;
        printf("%f" , result);
    }
    else if(opt == '/')
    {
        result = num1 / num2;
        printf("%f" , result);
    }
    else
    {
        printf("invalid operations");
    }

return 0;
}