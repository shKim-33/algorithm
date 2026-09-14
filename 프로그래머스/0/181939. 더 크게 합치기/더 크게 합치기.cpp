#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string strA = to_string(a), strB = to_string(b);
    int sumAB = stoi(strA + strB), sumBA = stoi(strB + strA);
    
    if  (sumAB > sumBA)
        answer = sumAB;
    else
        answer = sumBA;
    
    return answer;
}