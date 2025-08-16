class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt=0;
       while (a != 0 || b != 0 || c != 0)

        {
      int lc  = c&1;
      int la =a&1;
      int lb = b&1;
      
      if(lc==1)
       {
        if(la==0 && lb==0)
        cnt = cnt+1;
     
       }
       else
       {
        if(la==1 &&lb==1)cnt+=2;
        else if(la==1 || lb==1)
        cnt+=1;
       }
       a>>=1;
       b>>=1;
       c>>=1;
        }
return cnt;
    }
};