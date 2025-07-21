class Solution {
public:
int find(int i ,vector<int>&parent)
{
    if(parent[i]==i) return i;
    return parent[i] =find(parent[i],parent);//path comp

}

void unionbr(int x,int y,vector<int>&rank,vector<int>&parent)
{
    int xp =find(x,parent);
    int yp = find(y,parent);
    if(xp==yp) return;
    if(rank[xp]>rank[yp])
    {
        parent[yp]=xp;
    }
    else if(rank[yp]>rank[xp])
    {
        parent[xp]=yp;
    }
    else
    {
        parent[xp]=yp;
        rank[yp]+=1;
    }

}
    int makeConnected(int n, vector<vector<int>>& connections) {
vector<int>parent(n);
vector<int>rank(n,1);
for(int i=0;i<n;i++)
{
    parent[i]=i;
}
int ee=0;
for(auto it: connections)
{
    int f =it[0];
    int s =it[1];
    if(find(f,parent)==find(s,parent))
    {
        ee++;
    }
    else
    {
        unionbr(f,s,rank,parent);
    }
}
int cnt=0;
for(int i=0;i<n;i++)
{
    if(find(i,parent)==i)
    cnt++;
}
if(ee>=cnt-1) return cnt-1;
return -1;





    }
};