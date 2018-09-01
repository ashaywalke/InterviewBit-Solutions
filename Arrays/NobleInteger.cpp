int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int i,j,n=A.size();
    for(i=0;i<n;i++){
        while(A[i+1]==A[i]&&i!=n-1)i++;
        if(A[i]==n-i-1)return 1;
    }
    return -1;
}
