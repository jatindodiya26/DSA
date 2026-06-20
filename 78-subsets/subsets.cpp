class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> op;
        solve(nums, 0, op);
        return ans;
    }

    void solve(vector<int>& nums, int i, vector<int>& op) {
        if (i == nums.size()) {
            ans.push_back(op);
            return;
        }

        // Include element
        op.push_back(nums[i]);
        solve(nums, i + 1, op);
        op.pop_back();

        // Exclude element
        solve(nums, i + 1, op);
    }
};