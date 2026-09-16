class Solution {
public:
    int arraySign(vector<int>& nums) {

        int sign = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                sign = sign * (-1);
            }

            else if(nums[i] == 0){
                sign = 0;
            }
        }
        return sign;
    }
};