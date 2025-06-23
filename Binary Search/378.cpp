//link- https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/submissions/1670847305/

class Solution {
public:
    int countSmallerOrEqual(vector<vector<int>>& matrix,int val){
        int n=matrix.size();
        int count=0;
        for(int i=0;i<n;i++){
            count+=upper_bound(matrix[i].begin(),matrix[i].end(),val)-matrix[i].begin();
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int ans=-1;
        int l=matrix[0][0];
        int r=matrix[n-1][n-1];
        while(l<=r){
            int mid=l+(r-l)/2;
            int cnt=countSmallerOrEqual(matrix,mid);
            if(cnt>=k){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
            
        }
        return ans;
    }
};
