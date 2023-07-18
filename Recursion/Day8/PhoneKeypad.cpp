#include <iostream>
#include <vector>
#include <array>

using namespace std;

void solve(const string& digit, string output, int index, vector<string>& ans, array<string, 10> mapping) {
    // Base case
    if (index >= digit.length()) {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];
    for (char ch : value) {
        output.push_back(ch);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(const string& digits) {
    vector<string> ans;
    string output;
    int index = 0;
    array<string, 10> mapping = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main() {
    string digits;
    cout << "Enter the digits: ";
    cin >> digits;

    vector<string> result = letterCombinations(digits);

    // Print the letter combinations
    for (const string& combination : result) {
        cout << combination << " ";
    }

    return 0;
}
