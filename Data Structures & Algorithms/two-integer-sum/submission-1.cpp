class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> idx;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int rem = target - nums[i];

            if(idx.find(rem)!=idx.end()){
                return {idx[rem],i};
            }

            idx[nums[i]] = i;
        }

        return {};
    }
};
