#include<stdio.h>
void display(float *m);

int main()
{
    float a=10.5;
    display(&a);
    printf("%d",a);
}
void display(float *m)
{
    *m=20.5;
    printf("%f",*m);


}
