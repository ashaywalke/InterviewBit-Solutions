int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int allxor=0;
    for(int i=0;i<n;i++){
        allxor^=A[i];
    }
    return allxor;
}
