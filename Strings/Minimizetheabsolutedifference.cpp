//Solution 1: Backward Approach
/*int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=A.size()-1,j=B.size()-1, k=C.size()-1;
    int ans=INT_MAX;
    int maxe=INT_MIN, mine=INT_MAX;
    while(i>=0 && j>=0 && k>=0){
        maxe=max(max(A[i],B[j]),C[k]);
        mine=min(min(A[i],B[j]), C[k]);
        ans=min(ans,maxe-mine);
        if(A[i]==maxe)i--;
        else if(B[j]==maxe)j--;
        else if(C[k]==maxe)k--;
        
    }
    return ans;
    
}
*/
//Solution2: Forward Approach
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i=0,j=0,k=0;
    int minm=INT_MAX;
        while(i<A.size()&&j<B.size()&&k<C.size()){
            int diff=max(max(A[i],B[j]),C[k])-min(min(A[i],B[j]),C[k]);
            if(diff<minm){
                minm=diff;
            }
            if(A[i]<=B[j]&&A[i]<=C[k]){
                i++;
            }else if(B[j]<=C[k]&&B[j]<=A[i]){
                j++;
            }else{
                k++;
            }
        }
        return minm;
}
