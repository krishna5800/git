#include<stdio.h>

int Multiply(int iNo1, int iNo2)
{
    int iMul = 0;
    iMul = iNo1*iNo2;
    return iMul;
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    printf("Enter first number - \n");
    scanf("%d", &iValue1);

    printf("Enter second number - \n");
    scanf("%d", &iValue2);

    iAns = Multiply(iValue1, iValue2);

    printf("Multiplication is - %d\n",iAns);

    return 0;
}