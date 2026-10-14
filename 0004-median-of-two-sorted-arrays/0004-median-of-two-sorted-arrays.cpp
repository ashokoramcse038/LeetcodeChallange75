class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;

        // Add nums1
        for (int x : nums1) {
            arr.push_back(x);
        }

        // Add nums2
        for (int x : nums2) {
            arr.push_back(x);
        }

        // Sort the array
        sort(arr.begin(), arr.end());

        int n = arr.size();

        // Odd number of elements
        if (n % 2 != 0) {
            return arr[n / 2];
        }

        // Even number of elements
        else {
            return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        }
    
        
    }
};