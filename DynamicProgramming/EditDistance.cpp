int Solution::minDistance(string A, string B) {
    int a=A.length(), b=B.length();
    int min_steps[a+1][b+1];
    for(int i=0; i<= a; i++)
    {
        for(int j=0; j<=b; j++)
        {
            if(i==0)min_steps[i][j]=j;//all insert operations
            else if(j==0)min_steps[i][j]=i;//all delete operations
            else if(A[i-1]==B[j-1]) min_steps[i][j]=min_steps[i-1][j-1];
            else 
            {
                min_steps[i][j] = 1 + min(min_steps[i-1][j-1], min(min_steps[i-1][j], min_steps[i][j-1])) ;              
            }
        }
    }    
    return min_steps[a][b];
}
