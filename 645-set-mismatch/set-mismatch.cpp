class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int dup = -1;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            int idx = abs(nums[i]) - 1;

            if(nums[idx] > 0) {
                nums[idx] *= -1;
            }
            else {
                dup = abs(nums[i]);
            }
        }

        vector<int> ans;

        for(int i = 0; i < n; i++) {

            if(nums[i] > 0) {

                ans.push_back(dup);
                ans.push_back(i + 1);
                break;
            }
        }

        return ans;
    }
};