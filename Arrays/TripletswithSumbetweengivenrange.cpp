//https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/
#define pb push_back
// float minsum
int Solution::solve(vector<string> &A) {
    int n= A.size();
    vector<float> b[3];
    for(int i=0;i<n;i++){
        if(A[i][0]=='0')b[0].pb(stod(A[i]));
        else if(A[i][0]=='1')b[1].pb(stod(A[i]));
        else b[2].pb(stod(A[i]));
    }
    for(int i=0;i<3;i++){
        sort(b[i].begin(), b[i].end());
        /*for(int j=0;j<b[i].size();j++)
            cout<<b[i][j]<<" ";
        cout<<endl;*/
    }
    int i=0,j,k,l;
    float minsum,maxsum;
    if(b[0].size()>=3){
        l = b[0].size()-1, j=2, k=0;
        minsum = b[0][0]+b[0][1]+b[0][2];
        maxsum = b[0][l]+b[0][l-1]+b[0][l-2];
        if(minsum>=2)return 0;
        else if(minsum<2&&minsum>1)return 1;
        else{
            if(maxsum>1)return 1;
            else if(maxsum<=1){
                if(b[1].size()!=0&&minsum + b[1][k]-b[0][2]<2 )return 1;
                else return 0;
            }
        }
    }
    else if(b[0].size()==2){
        if(b[1].size()!=0&& b[1][k]+b[0][1]+b[0][0] < 2 )return 1;
                else return 0;
    }
    else{
        return 0;
    }
    
    // 5 0.6 0.8 0.7 1.2 1.4
    
}
