#include <iostream>

int main()
{
    int n;
    int x = 1;

    std::cout << "Input number:" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {

        for (int j = 1; j <= n-i; ++j)
        {
            std::cout << " ";
        }

        for (int k = 1; k < x+1; ++k)
        {
            std::cout << "*";
        }

        x += 2;
        std::cout << std::endl;
    }

    return 0;
}
