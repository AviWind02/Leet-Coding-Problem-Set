#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size = nums1.size();
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    std::sort(nums1.begin(), nums1.end());

    double median;
    if (size % 2 == 0) {
        median = (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
    }
    else {
        median = nums1[size / 2];
    }
    return median;
}

int main() {
    vector<int> nums1 = { 1,2 };
    vector<int> nums2 = { 3,4 };

    cout << findMedianSortedArrays(nums1, nums2);



    return 0;
}