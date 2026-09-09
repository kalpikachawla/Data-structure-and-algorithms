#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string s, string output, int index, vector<string>& ans) {
    if(index >= s.length()) {
        ans.push_back(output);
        return;
    }
    solve(s, output, index + 1, ans);
    char element = s[index];
    output.push_back(element);
    solve(s, output, index + 1, ans);
}
int main() {
    string s = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(s, output, index, ans);
    for(string x : ans) {
        cout << x << endl;
    }
}