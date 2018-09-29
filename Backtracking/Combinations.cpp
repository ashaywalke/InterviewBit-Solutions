#define be(a) a.begin(), a.end()
void search(vector<int> &permutation, vector<vector<int>>& S, int N, int left, int K){
    // int N = chosen.size();
    if(K==0){
        S.push_back(permutation);
    }
    else
    {
        for(int i=left;i<=N;i++){
            permutation.push_back(i);
            search(permutation, S, N, i+1, K-1);
            permutation.pop_back();
        }
    }
}

vector<vector<int> > Solution::combine(int N, int K) {
    vector<vector<int>> S;
    vector<int> permutation;
    search(permutation, S, N, 1, K);
    sort(be(S));
    return S;
}
