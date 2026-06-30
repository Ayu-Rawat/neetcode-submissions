class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        unordered_map<int,int> idx;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int rem = target - nums[i];
            if(idx.find(rem)!=idx.end()){
                res[0] = idx[rem];
                res[1] = i;
                break;
            }else{
                idx[nums[i]] = i;
            }
        }

        return res;
    }
};
