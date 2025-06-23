// link - https://leetcode.com/problems/find-smallest-letter-greater-than-target/submissions/1668211972/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        for(int i=0;i<n;i++){
            if(letters[i]>target) return letters[i];
        }
        return letters[0];
    }

};
