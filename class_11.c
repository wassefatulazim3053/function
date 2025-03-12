#include<stdio.h>
void num(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("a = %d\nb = %d",a,b);
   // printf("%d",a);
}
int main(){
    int a=10;
    int b=20;
    num(a,b);

return 0;
}
