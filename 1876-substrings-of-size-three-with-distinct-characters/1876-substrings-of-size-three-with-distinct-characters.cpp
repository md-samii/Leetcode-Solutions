class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        if(n<3){
            return 0;
        }
        for(int left=0,right=2;right<n;left++,right++){
            if(s[left]!=s[left+1] && s[left]!=s[right] && s[left+1]!=s[right])
                count++;
        }
        return count;
    }
};