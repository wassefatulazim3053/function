
int main(){
    void a(); // prototype
    a();

return 0;
}

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
