// 70: Climbing Stairs

/* Topic:
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints:

1 <= n <= 45
*/

// First try
#include <iostream>

int main() {
    int n {6};
    int first {1};
    int second {2};
    int current {0};

    if (n == 1) return 1;
    else if (n == 2) return 2;
    else if (n == 3) return 3;
    else {
        for (size_t i = 3; i <= n; i++) {
            current = first + second;
            first = second;
            second = current;
        }
    }

    std::cout << "Possibilities: " << current << std::endl;

    return 0;
}

// Solution 
/*
class Solution {
public:
    int climbStairs(int n) {
        int first {1};
        int second {2};
        int current {0};

        if (n == 1) return 1;
        else if (n == 2) return 2;
        else if (n == 3) return 3;
        else {
            for (size_t i = 3; i <= n; i++) {
                current = first + second;
                first = second;
                second = current;
            }
            return current;
        }
    }
};
*/