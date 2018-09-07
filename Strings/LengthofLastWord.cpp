int Solution::lengthOfLastWord(const string A) {
    // cout<<s[-1]<<endl;
    int len = A.length(), length=0;
    while(len>=1&&isspace(A[len-1])) len--;
    while(len>=1&&!isspace(A[len-1])){
        // cout<<"C1"<<endl;
        length+=1;len--;
    }
    return length;
    
        
    
}
