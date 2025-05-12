#include<stdio.h>
int main(){

int small = a[0];
int ids=0;
int n,a,i;
for(i=0;i<n;i++)
  {
    if(a[i] < small[i]){
       small = a[i];
       ids = i;
    }
  }
  printf("%d %d",small,ids);
  return 0;
}
