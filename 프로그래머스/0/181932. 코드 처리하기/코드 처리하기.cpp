#include <string>
#include <iostream>

using namespace std;

string solution(string code)
{
    string answer = "";
    int mode = 0;

    for (int i = 0; i < code.size(); ++i)
    {
        mode == 0
            ? code[i] == '1'
              ? (void)(mode = 1)
              : i % 2 == 0
                ? (void)(answer += code[i])
                : (void)0
            : code[i] == '1'
              ? (void)(mode = 0)
              : i % 2 == 1
                ? (void)(answer += code[i])
                : (void)0;

        cout << mode << "\n";
    }

    if (answer == "")
        answer = "EMPTY";

    return answer;
}