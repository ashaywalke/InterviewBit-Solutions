string Solution::longestCommonPrefix(vector<string> &v) {
    int n=v.size();
    int i,j,l,m=v[0].length(),tp;
    string k="";
    // cout<<v[0].length()<<endl;
    // co
    for(i=0;i<n;i++)
        if(m>v[i].length())
            m=v[i].length();
        // m=min(v[i].length(),m)
    // cout<<v[0][0]<<endl;
    // cout<<m<<n<<endl;
        
    for(i=0;i<m;i++){
        for(j=1;j<n;j++){
            // cout<<v[j][i]<<endl;
            if(v[j][i]!=v[0][i])
                return k;
        }
        // cout<<v[0][i]<<endl;
        k+=v[0][i];
    }
    // cout<<k<<endl;
    return k;
}
