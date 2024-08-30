#include <iostream>

int main(){
    int a,b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    for (int i = a; i <=b; i++)
    {
        if (i%3 == 0)
        {
            std::cout << "Foo" << "\n";
        }
        else if (i%2 == 0)
        {
            std::cout << "Bar" << "\n";
        }
        else
        {
            std::cout << "Baz" << "\n";
        }

        
    }
}