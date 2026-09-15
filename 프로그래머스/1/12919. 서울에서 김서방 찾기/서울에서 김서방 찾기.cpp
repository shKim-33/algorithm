#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    auto it = ranges::find(seoul, "Kim");
    string pos = to_string(it - seoul.begin());

    return "김서방은 " + pos + "에 있다";
}

