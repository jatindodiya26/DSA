class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
             return nums[0];

    return max(getmax(nums,0,nums.size()-2),getmax(nums,1,nums.size()-1));  
    }
private:
    int getmax(vector<int> & nums, int s, int e){
        int prev_rob=0,max_rob=0;

        for(int i=s; i<=e; i++){
            int temp = max(max_rob,prev_rob+nums[i]);
            prev_rob=max_rob;
            max_rob=temp;
        }
        return max_rob;
    }
};