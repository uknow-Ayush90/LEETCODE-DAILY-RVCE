class Solution {
public:
    int maxDepth(string s) {
  int n = s.size();
  int cnt1=0;
  int len=0;
  char last;
  for(int ch=0;ch<n;ch++)
  {
    
    if(s[ch]=='(' ) 
    {
    cnt1++;
    len= max(len,cnt1);
    last =ch;
    }
    else if(s[ch]==')')
    cnt1--; 

   
  }

return len;
    }
};