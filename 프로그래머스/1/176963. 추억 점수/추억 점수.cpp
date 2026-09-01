#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for (auto& val_photo : photo)
{
    int point = 0;

    for (auto& name_in_photo : val_photo)
    {
        auto iter = ranges::find(name, name_in_photo);
        if (iter != name.end())
        {
            const auto index = iter - name.begin();

            point += yearning[index];
        }
    }

    answer.push_back(point);
}
    
    return answer;
}