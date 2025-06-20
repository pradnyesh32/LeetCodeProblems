class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> hm;
        vector<int> res = {0,0};
        for(int i = 0 ; i < nums.size();++i)
        {
            int temp = target - nums[i] ;
            if(hm.find(temp) != hm.end())
            {
                res[0] = hm.at(temp);
                res[1] = i;
            }
            else
            {
                hm[nums[i]]= i;
            }
                

        }
        return res;
        
    }
};
