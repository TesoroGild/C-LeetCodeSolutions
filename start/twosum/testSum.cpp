#include "twoSum.hpp"
#include <iostream>

int main() {
    TwoSum twoSum;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = twoSum.SumTwoNumbers(nums, target);

    if (!result.empty()) {
        std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;
    } else {
        std::cout << "Aucune paire trouvée" << std::endl;
    }

    return 0;
}