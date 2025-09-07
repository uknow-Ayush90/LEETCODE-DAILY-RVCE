class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int h = floor(n/3);
        vector<int> res;
        map<int,int> mpp;
        for(auto it : nums)
        {
            mpp[it]++;

        }
for(auto it :mpp)
{
    if(it.second >h)
    res.push_back(it.first);
}
       
     return res;   
    }
};