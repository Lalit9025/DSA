class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int d = k % n;
        int i =0, j = n-1;

        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        i=0;
        j = d-1;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        i = d;
        j = n-1;

        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};