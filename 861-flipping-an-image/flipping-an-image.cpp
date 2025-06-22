class Solution {
public:
    void reverse(vector<int>&it)
    {
        int l=0;
        int n = it.size();
        int r =n-1;
        while(l<=r)
        {
            swap(it[l],it[r]);
            l++;
            r--;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m =image[0].size();
      
      for(auto &it: image)
      {  reverse(it);
        for(int i = 0;i<it.size();i++)
        {
            if(it[i]==1)
            it[i]=0;
            else
             it[i]=1;
        }
      }
return image;

    }
};