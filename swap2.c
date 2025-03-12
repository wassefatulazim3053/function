#include <stdio.h>
int a = 10, b = 20;
void swap() {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    swap();
    printf("a = %d\nb = %d",a,b);
    return 0;
}

