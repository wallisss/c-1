#include <stdio.h>

int main()
{
    int pizzasToEat=100;
    
    printf("init PizzasToEat :%i\n",pizzasToEat);
    pizzasToEat = pizzasToEat+100;
    printf("PizzasToEat + 100 :%i\n",pizzasToEat);
    pizzasToEat +=100;  //pizzasToEat = pizzasToEat+100
    printf("PizzasToEat += :%i\n",pizzasToEat);
    pizzasToEat -=100;  //
    printf("PizzasToEat -= :%i\n",pizzasToEat);
    pizzasToEat *=100;  //
    printf("PizzasToEat *= :%i\n",pizzasToEat);
    pizzasToEat /=100;  //
    printf("PizzasToEat /= :%i\n",pizzasToEat);
    pizzasToEat %=5;  //
    printf("PizzasToEat %%=5 :%i\n",pizzasToEat);
    return 0;
}