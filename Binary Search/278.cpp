//link- https://leetcode.com/problems/first-bad-version/submissions/1670798195/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0;
        int r=n;
        while(l<=r){
            int m=l+(r-l)/2;
            if(isBadVersion(m))r=m-1;
            else l=m+1;
        }
        return l;
    }
};
