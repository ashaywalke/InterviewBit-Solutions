int Solution::threeSumClosest(vector<int> &A, int target) {

    int i=0,j=1,k=A.size()-1;
    int mindiff=A[i]+A[j]+A[k]-target, minsum=A[i]+A[j]+A[k];
    int sum, diff;
    int start, end;
    // sum=A[i]+A[j]+A[k];
    // diff=abs(target-sum);
    sort(A.begin(), A.end());
    for(int i=0;i<A.size()-2;i++){
        start=i+1, end=A.size()-1;
        while(start<end){
            sum=A[i]+A[start]+A[end];
            diff=sum-target;
            /*if(mindiff>diff){
                mindiff=diff;
                minsum=3sum;
            }*/
            
            if(sum==target){
                return sum;
            }
            else if(sum<target){
                start++;    
            }
            else{
                end--;
            }
            
        }
       /* if(sum==-1){
            cout<<"i: "<<i<<" start: "<<start<<" end: "<<end<<endl;
            cout<<"A[i]: "<<A[i]<<" A[start]: "<<A[start]<<" A[end]: "<<A[end]<<endl;
            }
            cout<<"diff:"<<diff<<" sum:"<<sum<<endl;*/
        if(abs(mindiff)>abs(diff)){
            mindiff=diff;
            minsum=sum;
        }
    }
    return minsum;
}
