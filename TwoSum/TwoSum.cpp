// TwoSum.cpp: This file contains an implementation of the twoSum function to find two numbers in a vector that add up to a target value.

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> answer;

    // Iterate through each element in the vector
    for (int i = 0; i < nums.size(); i++)
    {
        // Iterate through each element after the current element
        for (int j = i + 1; j < nums.size(); j++)
        {
            int sum = nums[i] + nums[j];

            // Check if the sum of the two elements equals the target value
            if (sum == target)
            {
                // Add the indices of the two elements and the sum to the answer vector
                answer.push_back(i);
                answer.push_back(j);
                answer.push_back(sum);

                // Return the answer vector since we have found a valid solution
                return answer;
            }
        }
    }

    // Return an empty vector if no solution is found
    return answer;
}

int main()
{
    // Define input vector and target value
    vector<int> nums = { 3, 3 };
    int target = 6;

    // Call the twoSum function to find the solution
    vector<int> res = twoSum(nums, target);

    // Print the result
    cout << "[" << res[0] << "," << res[1] << "]";

    return 0;
}
