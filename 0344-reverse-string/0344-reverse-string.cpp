class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0;
        for(int j=n-1;j>=n/2;j--){
            swap(s[i],s[j]);
            i++;
        }
    }
};