#include <stdio.h>

int main()
{
    int pizzasToEat=123;
    pizzasToEat=pizzasToEat+1;//same pizzasToEat++=pizzasToEat+1
    int output=pizzasToEat++;//unary oper.//increment happened after output=pizzatoeat and pizzasToEat increase by 1
    printf("PizzasToEat :%i\n",pizzasToEat);
    printf("Pizzas to eat :%i\n",output);
    int output1=++pizzasToEat;//unary oper.//increment happened after output=pizzatoeat
    printf("PizzasToEat :%i\n",pizzasToEat);
    printf("Pizzas to eat :%i\n",output1);
        printf("-------------------------------------\n");
    int pizzasToEatm=123;
    printf("Int Piza %i\n",pizzasToEatm);
    
    pizzasToEatm=pizzasToEatm-1;//same pizzasToEatm++
    printf("pizzasToEatm=pizzasToEatm-1 :%i\n",pizzasToEatm);
    
    int output11=pizzasToEatm--;//unary oper.//increment happened after output=pizzatoeat
    printf("output11=pizzasToEatm-- output is: %i pizzasToEat is :%i\n",output11,pizzasToEatm);
    
    int output101=pizzasToEatm-1;//unary oper.//increment happened after output=pizzatoeat
    printf("output101=pizzasToEatm-1 output is: %i pizzasToEat is :%i\n",output101,pizzasToEatm);
    
    int output111=--pizzasToEatm;//unary oper.//increment happened after output=pizzatoeat
    printf("output111=--pizzasToEatm  output is: %i pizzasToEat is :%i\n",output111,pizzasToEatm);
    

    return 0;
}