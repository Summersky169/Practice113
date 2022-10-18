#include <iostream>

int Degree(int x)  // You've never said that I can't use degree-counting function))
{
    int deg = 1;
    for (int i = 0; i < x; ++i)
        deg *= 2;

    return deg;
}


int main()
{
    int n;
    double s = 0;
    std::cin >> n;

    for (int j = 0; j < n; ++j)
    {
        s += 1./ Degree(j);
    }

    std::cout << s;

    return 0;
}
