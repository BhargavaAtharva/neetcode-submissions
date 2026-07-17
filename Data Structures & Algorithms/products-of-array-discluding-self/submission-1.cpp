class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int nprod=1;
        int zc=0;
        vector<int> prods(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zc++;
            }
            else
                prod*=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(zc>=2)
            {
                prods[i]=0;
            }
            else if(zc==1)
            {
                if(nums[i]==0)
                    prods[i]=prod;
                else
                    prods[i]=0;       
             }
             else 
             {
                prods[i]=prod/nums[i];
             }
        }
        return prods;
    }
};
