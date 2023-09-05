#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <climits>

std::string shortestSubstringWithAllLetters(const std::string& s) {
    std::vector<int> letterCount(26, 0);
    int uniqueLetters = 0;
    int minLength = INT_MAX;
    int minStart = -1;

    int left = 0, right = 0;

    while (right < s.size()) {
        if (letterCount[s[right] - 'a'] == 0) {
            uniqueLetters++;
        }
        letterCount[s[right] - 'a']++;

        while (uniqueLetters == 26) {
            if (right - left + 1 < minLength) {
                minLength = right - left + 1;
                minStart = left;
            }

            letterCount[s[left] - 'a']--;
            if (letterCount[s[left] - 'a'] == 0) {
                uniqueLetters--;
            }
            left++;
        }

        right++;
    }

    if (minStart != -1) {
        return s.substr(minStart, minLength);
    } else {
        return "QQ";
    }
}

int main() {
    std::string inputString;
    std::cin >> inputString;

    std::string result = shortestSubstringWithAllLetters(inputString);
    std::cout << result << std::endl;

    return 0;
}
