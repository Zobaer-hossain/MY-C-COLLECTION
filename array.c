#include<stdio.h>

int main(){

int n,x;
scanf("%d %d",&n ,&x);

int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
  int found = 0;
  for(int i=0;i<n;i++){
    if(a[i]==x){
        found = 1;
        break;
    }
  }

  if(found){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }

return 0;


}
