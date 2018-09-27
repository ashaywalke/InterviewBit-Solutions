vector<int> Solution::solve(int R, vector<int> &S) {
    int N= S.size(), minm= INT_MAX, min_i=0;
    for(int i=0;i<N;i++){
        if(S[i]<minm){
            minm=S[i]; min_i=i;
        }
    }
    // if(minm>R) return
    int maxkicks= R/minm, sum=minm*maxkicks, j=0;
    vector<int> v(maxkicks,min_i);
    if(minm>R) return v;
    for(int i=0; i<= min_i; i++){
        
        while(sum-minm+S[i]<=R){
            v[j]=i; sum = sum-minm+S[i]; j++;
            if(j==maxkicks) return v;
        }
        if(j==maxkicks) return v;
    }    
    return v;
}
//Tushar's Birthday Bombs
