class Solution {
public:

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' ||
               ch == 'u';
    }

    int maxVowels(string s, int k) {

        int count = 0;

        // First window
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                count++;
            }
        }

        int maxCount = count;

        // Sliding window
        int startIndex = 0;
        int endIndex = k;

        while(endIndex < s.size()) {

            // Remove left character
            if(isVowel(s[startIndex])) {
                count--;
            }
            startIndex++;

            // Add right character
            if(isVowel(s[endIndex])) {
                count++;
            }
            endIndex++;

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};