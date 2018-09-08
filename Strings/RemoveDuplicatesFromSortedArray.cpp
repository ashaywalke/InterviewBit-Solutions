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
