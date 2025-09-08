class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.size()!=goal.size()) return false;
      if(s==goal) return true;
      int n =s.size();
      string st= "";
      for(int i =1;i<n;i++)
      {
      string  h =s.substr(0,i);
      string  l =s.substr(i,n-i+1);
      st =l+h;
      if(st==goal) return true;
    }
    return false;}
};