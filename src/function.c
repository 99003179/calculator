#include<function.h>
#include<stdio.h>
#include<math.h>

int pro_add(int input1,int input2)//adding the inputs passed and returns the result
{
    int result = input1+input2;
    return result;
}

int pro_subtract(int input1,int input2)//removes input2 from input1 the inputs passed and returns the result
{
    int result = input1-input2;
    return result;
}


int pro_multiply(int input1,int input2)//multiplies  the inputs passed and returns the result
{
    int result = input1*input2;
    return result;
}

int pro_divide(int input1,int input2)//divide input1 by input2 the inputs passed and returns the result
{
    int result = input1/input2;
    return result;
}

double pro_squareroot(double triginput)// returns the result of suarqeroot of triginput
{
    double result = sqrt(triginput);
    return result;
}

int pro_modulus(int input1,int input2)//returns the remainder obtained by doing input1 % input2
{
    int result = input1 % input2;
    return result;
}

int pro_fact(int input1)//returns the factorial value of passed input
{
    int factorial =1;
    if (input1 < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (int i = 1; i <= input1; ++i) {
            factorial *= i;
        }
        return factorial;
    }
}


int pro_power(int input1,int input2)// returns the power value as input1^input2
{
    int result = pow(input1,input2);
    return result;
}

