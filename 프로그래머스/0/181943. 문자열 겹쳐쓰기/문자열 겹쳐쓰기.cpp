#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    for (int i = 0; i < my_string.size() ; ++i)
    {
        if (i >= s && i < overwrite_string.size() + s)
        {
            answer += overwrite_string[i - s];
        }
        else
        {
            answer += my_string[i];
        }
    }
    
    return answer;
}