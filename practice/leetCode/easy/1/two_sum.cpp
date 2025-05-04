// 1: Two Sum

/* Topic:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

// First try
#include <iostream>
#include <vector>

int main()
{
    // Example 1:
    std::vector<int> nums {2, 7, 11, 15};
    int target {9};

    /* // Example 2:
    std::vector<int> nums {3, 2, 4};
    int target {6};*/

    /* // Example 3:
    std::vector<int> nums {3, 3};
    int target {6};*/

    std::vector <int> result;

    for (int i = 0; i < std::size(nums); i++)
    {
        for (int j = i + 1; j < std::size(nums); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
    }
    
    std::cout
        << "["
        << result[0]
        << ","
        << result[1]
        << "]"
        << std::endl;

    return 0;
}

// Solution

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::vector <int> result;

            for (int i = 0; i < std::size(nums); i++)
            {
                for (int j = i + 1; j < std::size(nums); j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        result.push_back(i);
                        result.push_back(j);
                        break;
                    }
                }
            }
    
            return result;
        }
    };
