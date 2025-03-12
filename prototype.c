#include<stdio.h>
void a(){
printf("hello\n");
void b();  // prototype
b();
}
void b(){
printf("hi\n");
void c();  // prototype
c();
}
void c(){
printf("how are you?\n");

}
int main(){
    a();

return 0;
}
