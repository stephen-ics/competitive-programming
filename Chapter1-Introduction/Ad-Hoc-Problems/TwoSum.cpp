//
// Created by Stephen Ni on 2023-10-10.
//

// Link to the Problem: https://leetcode.com/problems/two-sum/
#include <iostream>
#include <vector>

int main() {

    int arr[] = {3, 2, 4};
    std::vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int target = 6;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int sum = target - num;
        for (int j = i+1; j < nums.size(); j++) {
            int num2 = nums[j];
            if (num2 == sum) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }

    return 0;
}

// start from a number
// sum = target - num
// pop num from list
// check if sum is in the list
// rinse and repreat