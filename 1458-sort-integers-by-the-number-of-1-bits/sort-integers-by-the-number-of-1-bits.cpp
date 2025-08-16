class Solution {
public:
int solve(int num)
{
    int h;
    if(num==0) return 0;
    if (num==1) return 1;
    if(num%2==0){
       h= solve(num/2);
    }
    else
    h=1+solve(num/2);
return h;
}
    vector<int> sortByBits(vector<int>& arr) {
        int n =arr.size();
        vector<pair<int,int>> result(n);
        for(int i=0;i<n;i++)
        {
            result[i] = {solve(arr[i]),arr[i]};
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