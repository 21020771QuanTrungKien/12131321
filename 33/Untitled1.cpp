
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, 4) != "Zues" && i < s.length() - 4) {
            res = res + s[i];
        } else {
            res = res + "Zeus";
            i = i + 4;
        }
    }
    cout << res;
    return 0;
}