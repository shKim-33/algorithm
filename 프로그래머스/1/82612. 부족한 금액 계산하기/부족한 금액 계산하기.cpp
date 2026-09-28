using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1, cost = 0;

    for (int i = 0; i < count; ++i)
        cost += price * (i + 1);

    answer = cost - money;

    if (answer < 0)
        answer = 0;

    return answer;
}