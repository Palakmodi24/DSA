#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(string& str, vector<string>& ans, int index) {
    // Base case
    if (index >= str.size()) {
        ans.push_back(str);
        return;
    }

    for (int j = index; j < str.size(); j++) {
        swap(str[index], str[j]);
        solve(str, ans, index + 1);
        // Backtrack
        swap(str[index], str[j]);
    }
}

vector<string> permute(string str) {
    vector<string> ans;
    int index = 0;
    solve(str, ans, index);
    return ans;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<string> permutations = permute(input);

    cout << "All permutations:" << endl;
    for (const string& perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
