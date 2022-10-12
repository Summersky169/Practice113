#include <iostream>
#include <cmath>

int main() {
    double a, b, c, D, x1, x2;
    std::cout << "Input A:\n";
    std::cin >> a;
    std::cout << "Input B:\n";
    std::cin >> b;
    std::cout << "Input C:\n";
    std::cin >> c;
    if (a == 0)
    {
        std::cout << "This equation is not quadratic!!!\n";
        exit(0);
    }
    D = pow(b, 2) - 4*a*c;
    if (D < 0)
        std::cout << "No solions" << "\n";
    if (D == 0)
    {
        x1 = -b / (2 * a);
        std::cout << "One solution: x = " << x1 << "\n";
    }
    if ((b*b - 4*a*c) > 0)
    {
        x1 = (-b - sqrt(D)) / 2 * a;
        x2 = (-b + sqrt(D)) / 2 * a;
        std::cout << "First solution: x1 = " << x1 << "\n";
        std::cout << "Second solution: x2 = " << x2 << "\n";
    }
    return 0;
}
