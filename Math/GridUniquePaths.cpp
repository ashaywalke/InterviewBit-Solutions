int Solution::uniquePaths(int m, int n) {

   /* //Solution1
    int N = m+n-2, R = n-1;
    
    if(m>n)R=N-R;
    //When we have only one element ie R=0 or N-r=0
    if(R==0||N==R)return 1;
    long res=1;
    for(int i=1;i<=R;i++){
        res*=(N-i+1);//Access it like this
        res/=i;
    }
    return res;*/
    //Solution 2
    
    vector<vector<int>> grid(m,vector<int>(n,0));
    grid[0][0]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>=1)grid[i][j]+=grid[i-1][j];
            if(j>=1)grid[i][j]+=grid[i][j-1];
        }
    }
    return grid[m-1][n-1];
}
