#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0)
                continue;
            else {
                nums[i] = nums[i] + nums[i - 1];
            }
        }
        return nums;
    }
};

int main()
{
    Solution sol;
    vector<int> nums { 1, 2, 3, 4 };
    sol.runningSum(nums);
    std::cout << "Hello World!\n";
}
