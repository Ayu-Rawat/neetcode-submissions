class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;
        vector<vector<int>> temp;
        vector<int> res;

        // count frequency
        for(const auto& x : nums){
            freq[x]++;
        }

        // store in pair
        for(const auto& pair : freq){
            temp.push_back({pair.first,pair.second});
        }

        // sort them
        sort(temp.begin(),temp.end(),[](const vector<int>& a, const vector<int>& b){
            return a[1] > b[1];
        });

        for(int i = 0; i < k; i++){
            res.push_back(temp[i][0]);
        }

        return res;
    }
};
