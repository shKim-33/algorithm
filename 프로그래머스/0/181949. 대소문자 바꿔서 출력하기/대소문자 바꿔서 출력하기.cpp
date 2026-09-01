#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (char& ch : str)
    {
        if (std::islower(ch))
            ch = std::toupper(ch);
        else if (std::isupper(ch))
            ch = std::tolower(ch);
    }
    
    cout << str;
    
    return 0;
}