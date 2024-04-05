#include <ctime>
#include <iostream>
#include <math.h>

// Your functions go here
int checkSNT_1(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int checkSNT_2(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    long long n = 10000000000; // Change this value to test with different n

    clock_t start, end;

    start = clock();
    checkSNT_1(n);
    end = clock();
    double time_taken1 = double(end - start);

    start = clock();
    checkSNT_2(n);
    end = clock();
    double time_taken2 = double(end - start);

    std::cout << "Time taken by checkSNT1: " << time_taken1 << std::endl;
    std::cout << "Time taken by checkSNT2: " << time_taken2 << std::endl;

    return 0;
}
