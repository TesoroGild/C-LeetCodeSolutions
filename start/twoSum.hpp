#ifndef __TWOSUM_HPP__
#define __TWOSUM_HPP__

#include <vector>
#include <iostream>

using namespace std;

class TwoSum {
    public:
        TwoSum();
        ~TwoSum();

        std::vector<int> SumTwoNumbers(std::vector<int>& nums, int target);
};

TwoSum::TwoSum() {}

TwoSum::~TwoSum() {}

vector<int> TwoSum::SumTwoNumbers(vector<int>& nums, int target) {
    int numsSize = nums.size();
    if (numsSize >= 2 && numsSize <= 10000) {
        if (target >= -1e9 && target <= 1e9) {
            for (int i = 0; i < numsSize; i++) {
                for (int j = i + 1; j < numsSize; j++) {
                    //std::cout << nums[i] << " + " << nums[j] << std::endl;
                    if ((nums[i] >= -1e9 && nums[i] <= 1e9)
                    && (nums[j] >= -1e9 && nums[j] <= 1e9)) {
                        if (nums[i] + nums[j] == target) {
                            //std::cout << nums[i] << " + " << nums[j] << " = " << target << std::endl;
                            return {i, j};
                        };
                        
                    }
                }
            }
        }
    }
    return {0, 0};
}

#endif