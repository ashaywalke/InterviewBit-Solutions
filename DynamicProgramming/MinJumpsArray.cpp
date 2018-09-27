int Solution::jump(vector<int> &A) {
    //ans=jumps;
    int jumps=0, k, j=0, max_r, maxm, N = A.size();
    vector<int> mj;
    k=0;
    if(N==1) return 0;
    if(A[0]==0) return -1;
    for(int i=0;i<N;i++){
        maxm=INT_MIN;
        
        // mj[k]=
        // cout<<jumps<<' '<<A[i]<<' '<<A[k]<<endl;
        // cout<<jumps<<' '<<i<<' '<<k<<endl;
        
        max_r=k+A[k];
        // cout<<j<<endl;
        if(max_r>=N-1) return jumps+1;
        for(j=i;j<=max_r&&j<=N-1; j++)
        {
            if(j==0){
                // if(i+A[i]>=N-1) return jumps+1;
                continue;
            }
            if(j+A[j]>=N-1) 
            {
                
                return jumps+2;
            }
            if(j+A[j]>maxm)
            {
                maxm=j+A[j];k=j;    
            }
            // cout<<A[j]<<" ";
        }
        if(maxm<=A[i]+i) return -1;
        jumps++;
        
        
        // cout<<"j: "<<j<<endl;
        i=max_r;
    }
    // cout<<"C1"<<endl;
    return jumps;
}
