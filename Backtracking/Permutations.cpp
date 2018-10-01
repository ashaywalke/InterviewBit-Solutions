//https://www.interviewbit.com/problems/permutations/
void permutation(vector<int> A, int N, vector<vector<int>> &perms, vector<int>perm, vector<int> chosen )
{
    if(perm.size()==N)
    {
        // sort(perm.begin(), perm.end());
        // cout<<"pushing = "<<left<<endl;
        perms.push_back(perm);
        return;
    }
    else
    {
        for(int i=0; i< N; i++){
            if(chosen[i]) continue;
            perm.push_back(A[i]);
            chosen[i] = 1;
            permutation(A, N, perms, perm, chosen);
            chosen[i] = 0;
            perm.pop_back();
        }
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) 
{
    int N =A.size();
    vector<int> chosen(N, 0);
    vector<int> perm;
    vector<vector<int>> perms;
    permutation(A, N, perms, perm, chosen);
    return perms;
    
}
