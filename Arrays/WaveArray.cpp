vector<int> Solution::wave(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    // int n1= n-n%4, t;
    for(int i=0;i<n;i+=2){
        if(i==n-1)break;
        swap(A[i],A[i+1]);
        
    }
    return A;
    
    
}
