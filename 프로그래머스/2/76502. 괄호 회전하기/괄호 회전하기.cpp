#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        string open = "";
        bool correct = true;

        for (int j = 0; j < s.size(); ++j)
        {
            char c = s[(i + j) % s.size()];

            if (c == '(' || c == '{' || c == '[')
                open += c;
            else if (open.empty())
            {
                correct = false;
                break;
            }
            else if (c == ')')
            {
                if (open.back() == '(')
                    open.pop_back();
                else
                    correct = false;
            }
            else if (c == '}')
            {
                if (open.back() == '{')
                    open.pop_back();
                else
                    correct = false;
            }
            else
            {
                if (open.back() == '[')
                    open.pop_back();
                else
                    correct = false;
            }

            if (!correct)
                break;
        }

        if (correct && open.empty())
            answer++;
    }

    return answer;
}
