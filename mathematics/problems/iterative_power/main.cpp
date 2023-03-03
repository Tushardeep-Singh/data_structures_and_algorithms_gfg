#include <iostream>

// bit is 1 when power % 2 != 0
// bit is 0 when power % 2 == 0
// Time complexity : O(log n)
// Auxiliary space : O(1)
class mathematics
{
public:
    void iterative_power(long long base, long long power)
    {
        while (power > 0)
        {                                     
            if (power & 1)
            {
                result *= base;
            }
            base *= base;
            power = power >> 1;
        }
        std::cout << "result: " << result;
    }

private:
    int result{1};
};

int main()
{
    mathematics m1;
    m1.iterative_power(2, 20);
}