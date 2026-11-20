class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        int d = k%n;
        int cnt = 0;
        
        for(int start = 0; cnt < n; start++){
            int ci = start;
            int temp = nums[ci];

            while(true){
                int ni = (ci+k) % n;
                int temp1 = nums[ni];
                nums[ni] = temp;
                temp = temp1;
                cnt++;
                ci = ni;
                if(ci == start) break;
            }
        }

        
    }
};