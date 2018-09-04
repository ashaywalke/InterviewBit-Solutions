#define db cout<<"l:"<<l<<" "<<"r: "<<r<<endl
#define db1 cout<<"A[l]:"<<A[l]<<" "<<"A[r]:"<<A[r]<<endl
/*vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> v;
    int i=0, j=0, n=A.size(),minm=INT_MAX, maxm = -1;
    int maxj=0, mini=0;
    int fl = 0;
    while(i<=j&&j!=n-1){
        
        cout<<i<<":"<<j<<endl;
        if (A[i+1] > A[i] &&i == j) mini=i, i++;
        if(A[j]<=maxm) maxj=j,j++;
        else if(A[j+1]>A[j]&&j!=n-1) j++;
        
        minm=min(minm, A[i]);
        maxm = max(maxm, A[j]);
        // if(A[i]<minm) i++,mini++,fl =1;
        
    }    
    
     cout<<i<<":"<<j<<endl;
    if(i==j)v.push_back(-1);
    else v.insert(v.end(), {mini, maxj});
    return v;
}*/
vector<int> Solution::subUnsort(vector<int> &A){
    vector<int> v;
    int n = A.size();
    /*int i=0, j=n-1,s = 0, e=n-1;
    while(A[i+1]>=A[i] && i!=n-1)i++;
    s = i;
    if(s==n-1){v.push_back(-1); return v;}
    while(A[j-1]<=A[j] && j!=0)j--;
    e = j;
    cout<<s<<" "<<e<<endl;
    i=0, j=e;
    while(A[i]<=A[e]&& i!=n-1)i++;
    while(A[j]<=A[s] && j!=n-1)j++;
    s=i, e= j-1;
    v.insert(v.end(), {s,e});
    return v;*/
    int l=0,r=n-1;
    int minm = INT_MAX, maxm=INT_MIN;
    if(n==1){v.push_back(-1);return v;}
    while(l<r){
        if(A[l+1]<A[l])break; 
        
        l++;
        
    }
    // db;db1;
    if(l==n-1){v.push_back(-1);return v;}
    while(l<r){
        
        if(A[r]<A[r-1])break;
        r--;
        
    }
    // db;db1;
    
    // printf("Here");
    // minm = min(A[r],minm);
    // if(A[k])
    // if(A[l]>minm)
    for(int j=l;j<=r;j++){    
        minm=min(A[j],minm);
        maxm=max(A[j],maxm);
    }
    // cout<<minm<<" "<<maxm<<endl;
    while(l>0&&A[l-1]>minm){
        l--;
        // db;db1;
    }
    while(r<n-1&&A[r+1]<maxm ){
        r++;
        // db1;
    }
    v.push_back(l);v.push_back(r);
    return v;

}
