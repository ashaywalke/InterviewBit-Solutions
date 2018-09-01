#define pb push_back
/*#define pb push_back
vector<int> Solution::plusOne(vector<int> &A) {//THIS ONE WORKS TOO
    vector<int> v;
    int k= A.size();
    int zeros = 0;
    int i=0;
    while(A[i]==0){
        zeros++;i++;
        if(zeros==k){v.pb(1);return v;}
    }
    // if(A[i]==0)
    int n = k-zeros;
    if(n==1&&A[k-1]==9){v.pb(1);v.pb(0);return v;}
    // v=A;
    int cf=0;
    for(i=0;i<n;i++){
        if(i==0&&A[k-i-1]==9){
            v.pb(0);cf=1;
        }
        else if(i!=0 &&cf==1){
            if(A[k-i-1]==9){
                if(i!=n-1){
                    cf=1;v.pb(0);
                }
                else{
                    cf=0;
                    // if(zeros){
                        v.pb(0);
                        v.pb(1);
                    // }
                    // else{
                    //     v.resize(n+1,0);
                    //     for(int j=n-1;j>=0;j--){
                    //         v[j+1]=v[j];
                    //     }
                    //     v[0]=1;
                    // }
                }
            }
            else v.pb(A[k-i-1]+1),cf=0;
        }
        else if(i!=0&&cf==0){
            v.pb(A[k-i-1]);
        }
        else if(i==0 && A[k-i-1]<9){
            // if(k==1)
            v.pb(A[k-i-1]+1);
        }
        
    }
    reverse(v.begin(), v.end());
    return v;
    
}
*/

vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    vector<int> v;
    int cf = 1,D,j;
    for(int i=0;i<A.size();i++){
        // int D = A[i];
        D = A[i]+cf;
        cf = D/10;
        v.pb(D%10);
    }
    // for(int i= 0;i<v.size();i++)
    //     cout<<v[i]<<endl;
    if(cf)v.pb(1);
    j = v.size()-1;
    
    while(v[j]==0 &&j>0){
        v.pop_back();j--;
    }
    
    reverse(A.begin(),A.end());
    reverse(v.begin(), v.end());
    return v;
    
}
