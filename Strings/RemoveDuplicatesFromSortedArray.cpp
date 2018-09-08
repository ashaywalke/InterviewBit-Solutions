//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
void print(vector<int> A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int Solution::removeDuplicates(vector<int> &A) {
    int size=A.size();
    int j=1;
    for(int i=0;i<size-1;i++){
        if(A[i+1]>A[i])j++;
        else if (A[i+1]==A[i]){
            while(i<size-1&&A[i+1]==A[i])i++;
            A[j]=A[i+1];if(i!=size-1)j++;
        }
        cout<<"i:"<<i<<" j:"<<j<<endl;
        print(A);
    }
    A.resize(j);
    return j;
}

//Solution 2 Better One
/*int Solution::removeDuplicates(vector<int> &A) {
    int size=A.size();
    int j=0;
    for(int i=0;i<size;i++){
        if(i<size-1 &&A[i+1]==A[i]) continue;
        else{
            A[j]=A[i];j++;
            // cout<<"C1"<<endl;
        }
    }
    return j;
    
}*/
