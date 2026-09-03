#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int cola_now = n, cola_received = 0, cola_leftover = 0;

    while (cola_now / a != 0)
    {
        cola_received += cola_now / a * b;
        cola_leftover = cola_now % a;
        cola_now = cola_now / a * b + cola_leftover;
    }

    return cola_received;
}