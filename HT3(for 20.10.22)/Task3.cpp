#include <iostream>
#include <cmath>

int main()
{
    int n, x;
    double s, sn_1;
    std::cout << "Input N:" << std::endl;
    std::cin >> n;
    std::cout << "Input X:" << std::endl;
    std::cin >> x;

    s = sin((x*M_PI)/180);
    sn_1 = s;

    for (int i = 1; i < n; ++i)
    {
        s += sin((sn_1*M_PI)/180);
        sn_1 = sin((sn_1*M_PI)/180);
    }

    std::cout << s << std::endl;  // Gives same results for n >= 3. Giving s and/or sn_1 long double type doesn't solve this.

    return 0;
}
