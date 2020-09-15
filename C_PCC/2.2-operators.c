#include <stdio.h>
/*  operator (unary) + - >>> 1 operand -1 +1
    Arithmetic(binary) + - / * % >>> 
    Increment (unary) ++ --
    Assigment(binary) = += -= /= *= %= >>>
    Comparision(binary) == != < > <= >=
    Logical(binary) && || !
    Conditional(ternary) ?: 

    Reference - https://en.cppreference.com/w/c/language/operator_precedence 
    */

int main()
{
    printf("\nforce precedence with ()\n");
    int x=2*(3+3);
    int y=(2*3)+3;
    printf("x=%d\n",x);    
    printf("y=%d\n",y);

    printf("Modulus operator: \n");
    int c=10%3;
    printf("10%%3=%d\n",c);//10%% >>> 10% ; 10%/%/ >>> 10// ; 10\" >>> 10"

    printf("Unary minus:\n");
    int a=5;
    int b=-a;
    printf("b=%d\n",b);
    printf("a=%d\n",a);

    printf("post increment:\n");
    a=5;
    b=4;
    b=a++;//a++ =a+1 >>> firs b=a then a=a+1
    printf("b=%d\n",b);// b gets assigned to first
    printf("a=%d\n",a);//Then A is incremented

    b=5;
    a=5;//start fresh
    b=++a;// first ++a then assigne to b >>> 1+a=b >>> a=1+a b=a
    printf("Pre increment:\n");
    printf("b=%d\n",b);//B gets assigned to second
    printf("a=%d\n",a);//A is incremented first

    printf("Assignment operators:\n");
    a=5;
    b=4;
    b+=a;//f=f+e
    printf("b+=a >>> %d\n",b);
    a *=30;
    printf("a *= 30=%d\n",a);//5*30
    a%=140;
    printf("a %%= 140=%d\n",a);//150%140







    return 0;
}