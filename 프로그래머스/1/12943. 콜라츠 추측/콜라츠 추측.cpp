using namespace std;

int solution(int num) {
    int answer = 0;
    long long llNum = num;

    if (llNum == 1) return 0;

    while (answer <= 500)
    {
        answer++;

        if (llNum % 2 == 0)llNum /= 2;
        else llNum = llNum * 3 + 1;

        if (llNum == 1) return answer;
    }

    return -1;
}