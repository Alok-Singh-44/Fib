#include<iostream>

int main(){
    int a = 0, b = 1, c;
    std::cout<<a<<std::endl<<b<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        c = a + b;
        std::cout <<c<<std::endl;
        a = b;
        b = c;
    }
    
}