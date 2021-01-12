#include <stdio.h>
int oldestValue(int ages[],int size)
{
    int largest=ages[0];
    for (int i=1;i<size;i++)// 1.i=1>>2.i<size=true >>3.do {bla}>>4.i++>>5.2. ...if 2.=false end loop
    {
        if(ages[i]>largest)
        {
            largest=ages[i];
        }
    }
    return largest;
}

int main()
{
    int size=7;
    int ages[]={1,3,55,32,14,9,99};
    printf("Oldes value is=%d",oldestValue(ages,size));


    return 0;
}
