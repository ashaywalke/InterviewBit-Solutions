// bool myCompare(vector<pair<int,int>> A, vector<pair<int,int>> D){
//     return A.first
// }
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>> A,D;
    int n = arrive.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        A.push_back(make_pair(arrive[i],1));
    }
    for(int i=0;i<n;i++){
        A.push_back(make_pair(depart[i],-1));
    }
    sort(A.begin(), A.end());
    
    for(int i=0;i<A.size();i++){
        v.push_back(A[i].second);
    }
    for(int i=1;i<A.size();i++){
        v[i] = v[i]+v[i-1];
        if(v[i]>K)return 0;
    }
    return 1;
    
}
