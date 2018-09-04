vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> v;
    long long int sum1=0, sum2=0, sum3=0;
    int n =A.size();
    long long int temp;//here A is a constant vector so it can not be long long int which is being added? Please research this line andtell me if possible
    for(int i=0;i<n;i++){
        temp=A[i];
        sum1+=temp-1LL*(i+1);
        sum2+=temp*temp - 1LL*(i+1)*1LL*(i+1);
        // sum3+=A[i]+i+1;
    }
    sum3 = sum2/sum1;
    // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    v.push_back(int((sum3+sum1)/2));
    v.push_back(int((sum3-sum1)/2));
    return v;
}
