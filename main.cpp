#include <iostream>

int res = 0;
int number_of_ways (int n, int start = 0)
{
    if (start == n) {
        res++;
    }

    for (int i = 1; i <= 3; ++i) {
        if (start < n) {
            start += i;
            number_of_ways(n, start);
            start -=i;
        }
    }
    return res;

}
int main() {
    std::cout << number_of_ways(3);

}
