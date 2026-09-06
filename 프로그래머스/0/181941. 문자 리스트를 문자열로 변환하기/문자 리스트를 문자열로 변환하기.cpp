#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    
    for (auto& element : arr)
        answer += element;
    
    return answer;
}