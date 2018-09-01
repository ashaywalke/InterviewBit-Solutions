void Solution::setZeroes(vector<vector<int> > &A) {
    
    int rf=0, cf=0, m=A.size(), n = A[0].size();
    for(int i=0;i<n;i++){
        if(A[0][i]==0){rf=1; break;}
    }
    for(int i=0;i<m;i++){
        if(A[i][0]==0){
            cf = 1; break;
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][j]==0){
                A[i][0]=0;A[0][j]=0;
            }
        }
    }
    
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][0]==0 || A[0][j]==0){
                A[i][j]=0;
            }    
        }
    }
    if(rf){
        for(int i=0;i<n;i++){
            A[0][i]=0;
        }
    }
    if(cf){
        for(int i=0;i<m;i++){
            A[i][0]=0;
        }
    }
    
}
