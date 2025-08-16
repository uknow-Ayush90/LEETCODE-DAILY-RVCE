class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n =arr.size();
        vector<pair<int,int>> result(n);
        for(int i=0;i<n;i++)
        {
            result[i] = {__builtin_popcount(arr[i]),arr[i]};
        }
        sort(result.begin(),result.end());
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            res[i] = result[i].second;
        }
        return res;
    }
};