#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(int idx, string &s, string current, vector<string> &ans) {
    if (idx == s.length()) {
        ans.push_back(current);
        return;
    }


    generateSubsets(idx + 1, s, current + s[idx], ans);

  
    generateSubsets(idx + 1, s, current, ans);
}

int main() {
    string s = "abc";
    vector<string> ans;
    string current = "";

    generateSubsets(0, s, current, ans);

    
    for (auto subset : ans) {
        cout << "\"" << subset << "\"" << endl;
    }

    return 0;
}



/* #include <iostream>
#include <vector>
using namespace std;

void generateSubsets(int idx, string &s, string &current, vector<string> &ans) {
    if (idx == s.length()) {
        ans.push_back(current);
        return;
    }

     Choice 1: Include the current character
    current.push_back(s[idx]);            // include
    generateSubsets(idx + 1, s, current, ans);
    current.pop_back();                   // undo include (backtrack)

     Choice 2: Exclude the current character
    generateSubsets(idx + 1, s, current, ans);
}

int main() {
    string s = "abc";
    vector<string> ans;
    string current = "";

    generateSubsets(0, s, current, ans);

    for (auto subset : ans) {
        cout << "\"" << subset << "\"" << endl;
    }

    return 0;
}
*/ 