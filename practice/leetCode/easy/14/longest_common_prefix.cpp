// 13: Longest Common Prefix

/* Topic:
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

// First try
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> strs {""};
    std::string result {""};

    for (size_t i = 0; i < std::size(strs[0]); i++) {
        char c {strs[0][i]};

        for (size_t j = 1; j < std::size(strs); j++) {
            if (i >= std::size(strs[j]) || c != strs[j][i]) {
                std::cout << result << "\n" << std::endl;
                return 0;
            }
        }

        result.push_back(c);
    }
    
    std::cout << result << "\n" << std::endl;
    return 0;
}

// Solution 
/*
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            std::string result {""};

            for (size_t i = 0; i < std::size(strs[0]); i++) {
                char c {strs[0][i]};

                for (size_t j = 1; j < std::size(strs); j++) {
                    if (i >= std::size(strs[j]) || c != strs[j][i]) {
                        return result;
                    }
                }

                result.push_back(c);
            }
            
            return result;
        }
    };
*/