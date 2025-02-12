#include<stdio.h>
void f(int a, int b){
    int c;
    
    for(int i = 0; i < 5; i++){
    c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
    }
    
}
int main(){
    int a = 0, b = 1, c;
    printf("%d\n", a);
    printf("%d\n", b);
    f(a , b);
    return 0;
}