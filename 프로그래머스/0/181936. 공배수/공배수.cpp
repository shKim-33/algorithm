#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m)
{
    if (n % m == 0)
        if (number % n == 0)
            return 1;
    if (m % n == 0)
        if (number % m == 0)
            return 1;
    if (number % (n * m) == 0)
        return 1;

    return 0;
}