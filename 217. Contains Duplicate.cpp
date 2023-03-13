#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int k = nums.size();
        std::set<int> s;
        for (int i : nums) {
            s.insert(i);
        }
        int x = s.size();
        if (x != k) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    if (solution.containsDuplicate(nums)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}
