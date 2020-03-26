#include <iostream>
#include <string>

int main()
{
    int height = 0;
    std::cout << "Enter triangle height : ";
    std::cin >> height;    
    
    for (int i = 0; i < height; i++)
    {
        std::string str = "";
        for (int offset = 0; offset <= i; offset++)
        {
            str.insert(str.begin() + offset, '*');
        }
        std::cout << str << std::endl;
    }
}

