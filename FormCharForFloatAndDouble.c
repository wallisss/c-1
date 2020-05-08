#include <stdio.h>

int main()
{
        printf("how many dogs do you have?: ");
        //int double float
        double dogs;

        scanf("%lf", &dogs);/*scanf %lf(le,lg)>>double write in mem adres &dogs(It needs to change the variable.
                            Since all arguments in C are passed by value you need to pass a pointer if 
                            you want a function to be able to change a parameter.)
                            Pointers aren't promoted to anything, so you should be using %lf, %lg 
                            or %le (or %la in C99) to read in doubles.
                            */
        //floating point
        //precision -- how much data thr varible can hold
        //stored in scientific notation
        //24000=2.4*10^4    ; 0.000045=4.5*10^-5    ;25000=2.5e4(10*10*10*10)<<hardcoding

        printf(" decimal %%f: %f\n exponent %%e: %e\n Computer decides%%g: %g",dogs,dogs,dogs);//float ..it become double
                        //double tqake up twice as much space
                        //float can not trust
        /*Conversion Characters
        %f  -   Decimal notation
        %e  -   Scientific notation
        %g  -   Computer decides (Uses the shorter of %e or %f)
                They are both examples of floating point input/output.
                %g and %G are simplifiers of the scientific notation floats %e and %E.
                %g will take a number that could be represented as %f (a simple float or double) 
                or %e (scientific notation) and return it as the shorter of the two
    
        */
    return 0;
}