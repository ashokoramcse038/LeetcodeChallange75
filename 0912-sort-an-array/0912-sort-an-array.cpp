class Solution {
public:
    void merge(vector<int> &arr, int lb, int mid, int ub) {

    // Create temporary vector
    vector<int> temp(ub - lb + 1);

    int i = lb;
    int j = mid + 1;
    int k = 0;

    // Compare and merge two sorted parts
    while (i <= mid && j <= ub) {

        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= ub) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temporary array into original array
    for (int k = 0; k < temp.size(); k++) {
        arr[lb + k] = temp[k];
    }
}
    void fun_mergesort(vector<int> &arr, int lb, int ub) {

    if (lb < ub) {

        int mid = lb + (ub - lb) / 2;

        fun_mergesort(arr, lb, mid);

        fun_mergesort(arr, mid + 1, ub);

        merge(arr, lb, mid, ub);
    }
}
    vector<int> sortArray(vector<int>& nums) {
        fun_mergesort(nums,0,nums.size()-1);
        return nums;
        
    }
};