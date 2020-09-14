#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a=10;
    printf("%d bytes\n",sizeof(a));// 8 bytes=64 bits; 4 bytes=32 bits
    double b=10.5;
    printf("%lu bytes\n",sizeof(b));//printf("%d",sizeof(b));>>>8bit
    float c=10.5;//float for memory size (mb only)
    printf("%lu bytes\n ",sizeof(c));

    char d='a';
    char e[]="char array";// aka string
    bool f=false;
    int cats;
    int Cats;//not same
    int _caTs5;//5cats not aloved

    int zero=.999999;
    printf("zero is %d\n",zero);
    int slices=17;
    int people=2;
/*
    double slicesPerPerson=slices/people;// 8.0000 witchout (double)slices
    printf("%lf slices\n",slicesPerPerson);//
*/
    double slicesPerPerson=(double)slices /*17.0 *//people;//8.5000 ;(double)slices for correct answer
    printf("%lf slices\n",slicesPerPerson);//%f for float %lf for double %Lf for long double

    double t1=25/2*2;//24.000000
    double t2=25/2*2.0;//24.000000
    double t3=25.0/2*2;//25.000000
    double t4=(double)25/2*2;//25.000000
    double t5=(double)25/2*2.0;//25.000000
    printf("t1:%lf t2:%lf t3:%lf t4:%lf t5:%lf /n",t1,t2,t3,t4,t5);


    return 0;
}