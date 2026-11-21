#include<iostream>
#include<algorithm>
using namespace std;
string reverseString(string str) {
    int n = str.length();
    string ans = "";
    reverse(str.begin(), str.end());
    for(int i = 0; i < n; i++) {
        string word = "";
        while(i < n && str[i] != ' ') {
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0) {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
