// 9: Palindrome Number

/* Topic:
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Constraints:

-231 <= x <= 231 - 1

Follow up: Could you solve it without converting the integer to a string?
*/

// First try
#include <iostream>
#include <string>

int main() {
    // Example 1:
    int x {121};
    std::string xString {std::to_string(x)};

    int i {0};
    unsigned long j {std::size(xString) - 1};

    if (xString[i] == '-') {
        return false;
    }
        
    while (i < j) {
        if (xString[i] == xString[j]) {
            i++;
            j--;
        } else {
            return false;
        }
    }

    return true;
}

// Solution 
/*
class Solution {
    public:
        bool isPalindrome(int x) {
            std::string xString {std::to_string(x)};
    
            int i {0};
            unsigned long j {std::size(xString) - 1};
    
            if (xString[i] == '-') {
                return false;
            }
                
            while (i < j) {
                if (xString[i] == xString[j]) {
                    i++;
                    j--;
                } else {
                    return false;
                }
            }
    
            return true;
        }
};
*/
