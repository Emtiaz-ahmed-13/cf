/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/Emtiaz-ahmed-13      */
/**************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int up_c = 0;
    int low_c = 0;

    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) up_c++;
        else low_c++;
    }

    // Convert to uppercase or lowercase based on counts
    if (up_c > low_c) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
