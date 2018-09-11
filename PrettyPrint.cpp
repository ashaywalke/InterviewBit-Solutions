vector<vector<int> > Solution::prettyPrint(int A) {
    int n=2*A-1;
    int T=0,B=n-1,L=0,R=n-1;
    
    vector<vector<int>> v(n, vector<int>(n,0));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         int k=0;
    //         if(i==k||j==k||i==n-k||j==n-k){
    //             A[i][j]=A-k;
    //         }
    //     }
    // }
    int k=0;
    while(A!=0){
        // cout<<A<<endl;
    for(int i=L;i<=R;i++)
        v[T][i]=A;
    T++;
    for(int i=T;i<=B;i++)
        v[i][R]=A;
    R--;
    for(int i=R;i>=L;i--)
        v[B][i]=A;
    B--;
    for(int i=B;i>=T;i--){
        v[i][L]=A;
    }
    L++;A--;
    // L++;T++;
    // R--;B--;
    }
    return v;
        
    
}
