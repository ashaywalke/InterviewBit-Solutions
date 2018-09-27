//https://www.interviewbit.com/problems/longest-increasing-subsequence/

int Solution::lis(const vector<int> &A) {
    int N= A.size();
    vector<int> lis(N, 1);
    // lis[0]=1;
    for(int i=1; i<N; i++){
        for(int j=0; j<i; j++){
            if(A[j]<A[i] && lis[i]< lis[j] + 1) lis[i] = lis[j] + 1;
        }
        cout<<lis[i]<<endl;
    }
    return lis[N-1];
}
