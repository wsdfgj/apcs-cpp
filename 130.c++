#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string input;
    std::cin >> input;

    int n = input.length();
    std::vector<std::vector<bool>> isPalindrome(n, std::vector<bool>(n, false));

    // 初始化長度為 1 和 2 的回文子字串
    int maxLength = 1;
    int startIdx = 0;
    for (int i = 0; i < n; ++i) {
        isPalindrome[i][i] = true;
        if (i < n - 1 && input[i] == input[i + 1]) {
            isPalindrome[i][i + 1] = true;
            maxLength = 2;
            startIdx = i;
        }
    }

    // 尋找長度大於 2 的回文子字串
    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            if (input[i] == input[j] && isPalindrome[i + 1][j - 1]) {
                isPalindrome[i][j] = true;
                if (len > maxLength) {
                    maxLength = len;
                    startIdx = i;
                }
            }
        }
    }

    std::cout << maxLength << std::endl;
    std::cout << startIdx + 1 << " " << startIdx + maxLength << std::endl;

    return 0;
}