class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> hm;
        for(int &num: nums){
            hm[num]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto &it: hm)
        {
            int elem=it.first;
            int freq=it.second;
            bucket[freq].push_back(elem);
        }
        vector<int> result;
        for(int i=n;i>=0;i--)
        {
            if(bucket.size()==0)
                continue;
            
            while(bucket[i].size()>0&&k>0)
            {
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;

            }
        }
        return result;
        }
};
