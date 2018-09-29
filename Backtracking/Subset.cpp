/*
bool mycomp(vector<int> v1, vector<int> v2){
    int ct=0;
    for(int i=0;i<min(v1.size(), v2.size());i++){
        if(v1[i]<v2[i]) return 1;
        else if(v1[i]==v2[i])ct++; 
        else return 0;
    }
    if(ct==min(v1.size(), v2.size())) 
        return v1.size()<v2.size();
}
*/
void search(int k, vector<int> A, vector<int> subset, vector<vector<int>> &S){
    int n=A.size();
    // vector<int> subset;
    if(k==n){
        sort(subset.begin(), subset.end());
        S.push_back(subset);
    }
        //process subset
    else
    {
        search(k+1, A, subset, S);
        subset.push_back(A[k]);
        search(k+1, A, subset, S);
        subset.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> subset;
    vector<vector<int>> S;
    search(0, A, subset, S);
    sort(S.begin(), S.end());
    return S;
    
}
