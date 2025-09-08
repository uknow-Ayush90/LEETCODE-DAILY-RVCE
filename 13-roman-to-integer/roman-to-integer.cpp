class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        map<char,int> mpp;
        mpp['I']=1; mpp['V']=5; mpp['X']=10; mpp['L']=50;
        mpp['C']=100; mpp['D']=500; mpp['M']=1000;

        int sum = 0;
        int i = 1;
        while (i < n) {
            if ((s[i-1]=='I' && (s[i]=='V' || s[i]=='X')) ||
                (s[i-1]=='X' && (s[i]=='L' || s[i]=='C')) ||
                (s[i-1]=='C' && (s[i]=='D' || s[i]=='M'))) {
                sum += mpp[s[i]] - mpp[s[i-1]];
                i += 2; 
            } else {
                sum += mpp[s[i-1]];
                i += 1;
            }
        }
        if (i == n) sum += mpp[s[n-1]]; 
        return sum;
    }
};
