#include<stdio.h>

int summation(int a,int b);
main(){

int a,b;
printf("enter integers:");
scanf("%d %d",&a ,&b );
int c = summation(a,b);
c=a+b;
printf("the sum is: %d",c);

return 0;
}
