#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter number : ");
    scanf("%d",&a);
    printf("enter power : ");
    scanf("%d",&b);
    int p=pow (a,b);
    printf("%d raised to the power %d = %d",a,b,p);

return 0;
}
