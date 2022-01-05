#include <string>
#include <iostream>>

using namespace std;

class Solution
{
public:
    string modifyString(string s)
    {
        int c = 'a';
        int length = s.size();
        for (int i = 0; i < length; ++i)
        {
            if (s[i] == '?')
                s[i] = i + 1 < length && c == s[i + 1] ? ++c : c;
            else
                c = s[i];
            if (++c >= 'z')
                c = 'a';
        }
        return s;
    }
};

int main()
{
    auto s = new Solution;
    cout << s->modifyString("abc?dsawd?sda") << endl;
    return 0;
}