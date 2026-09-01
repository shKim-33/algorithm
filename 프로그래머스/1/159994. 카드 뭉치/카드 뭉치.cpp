#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";

    int index_c1 = 0;
    int index_c2 = 0;
    
    for (int i = 0; i < goal.size(); ++i)
    {
        if (goal[i] == cards1[index_c1])
            index_c1++;
        else
        {
            if (goal[i] == cards2[index_c2])
                index_c2++;
            else
                return "No";
        }
    }
    
    return "Yes";
}