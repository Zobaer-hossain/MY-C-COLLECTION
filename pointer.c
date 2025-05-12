#include<stdio.h>
int main(){

int  a=10,b=12;
int *var_a,*var_b;
var_a=&a;
var_b=&b;

printf("%d\n", *var_a + *var_b);
printf("%d\n\n\n", *var_a);


int d,e;
printf("put two integer:");
scanf("%d %d",&d,&e);
int *var_d,*var_e;
var_d=&d;
var_e=&e;

if(*var_d > *var_e)
    printf("%d",*var_d);
  else
    printf("%d",*var_e);


return 0;


}
