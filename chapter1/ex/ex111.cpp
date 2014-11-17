#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1;
    std::cin >> num2;

    int sum = 0, val = num1, max = num2;
    while(val <= max)
    {
        sum += val;
        val++;
    }
    std::cout << "The sum of " << num1 << " to " << num2 << " inclusive is " << sum << std::endl;
}
