//Solution 1
vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int l1=A.size(), l2=B.size();
    vector<int> v;
    int i=0,j=0;
    while(i<=l1-1&&j<=l2-1){
        if(A[i]==B[j]){
            v.push_back(A[i]);
            i++;j++;
        }
        else if(A[i]>B[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return v;
    
}
