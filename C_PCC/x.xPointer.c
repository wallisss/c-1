#include <stdio.h>
//https://www.youtube.com/watch?v=47IS8VtAM9E&list=WL&index=119&ab_channel=NorthwesternRobotics
int main()
{
int i;
int k, *ip;//1)ip=varible name.2)ip is type"pointer to type int"
printf("&i=%d\n",&i);
ip=&i;//reference operator >>return pointer(address)
printf("\nip=&i >> i=%d ,k=%d *ip=%d ip=%d\n",i,k,*ip,ip);
i=100;
printf("i=100 >> i=%d ,k=%d *ip=%d\n",i,k,*ip);
k=*ip;//dereference operator>>>return content of address
printf("k=*ip >> i=%d ,k=%d *ip=%d\n",i,k,*ip);
k=k+2;
printf("k=k+2 >> i=%d ,k=%d *ip=%d &k=%d,*(&k)=%d\n" ,i,k,*ip,&k,*(&k));
i=*(&k);
printf("i=*(&k) >> i=%d ,k=%d *ip=%d\n",i,k,*ip);
*(&k)=200;
printf("*(&k)=200 >> i=%d ,k=%d *ip=%d\n",i,k,*ip);


    return 0;
}
