class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n,0);
        vector<int> rightsum(n,0);
        vector<int> diff_sum;
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            leftsum[i] += nums[j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            rightsum[i] += nums[j];
        }
    }

    for (int i = 0; i < n; i++) {
        int ans = abs(rightsum[i] - leftsum[i]);
        diff_sum.push_back(ans);
    }

    return diff_sum;

    }
};