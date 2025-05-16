// 409. Longest Palindrome

/* Topic:
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
*/

// Code | O(n) | 0 ms | 9.22 MB
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s {"ccc"};
    std::vector<int> freq(128, 0);

    for (size_t i = 0; i < std::size(s); i++) {
        char c = s[i];
        int ascii = (int)c;
        freq[ascii]++;
    }

    int result {0};
    int odd {0};

    for (size_t i = 0; i < std::size(freq); i++) {
        if (freq[i] % 2 == 0) {
            result += freq[i];
        } else {
            result += freq[i] - 1;
            odd = 1;
        }
    }
    
    if (odd == 1) {
        result += 1;
    }
    
    std::cout << result;
    return 0;
}