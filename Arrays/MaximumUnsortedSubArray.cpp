// https://www.interviewbit.com/problems/maximum-unsorted-subarray/
vector<int> Solution::subUnsort(vector<int> &A){
    vector<int> v;
    int n = A.size();
    int l=0,r=n-1;
    int minm = INT_MAX, maxm=INT_MIN;
    if(n==1){v.push_back(-1);return v;}
    while(l<r){
        if(A[l+1]<A[l])break; 
        
        l++;
        
    }
    if(l==n-1){v.push_back(-1);return v;}
    while(l<r){
        
        if(A[r]<A[r-1])break;
        r--;
        
    }
    
    for(int j=l;j<=r;j++){    
        minm=min(A[j],minm);
        maxm=max(A[j],maxm);
    }
    while(l>0&&A[l-1]>minm){
        l--;
    }
    while(r<n-1&&A[r+1]<maxm ){
        r++;
    }
    v.push_back(l);v.push_back(r);
    return v;

}
