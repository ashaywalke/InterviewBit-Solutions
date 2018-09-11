int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0, ct=0, temp=A[0];
    for(int i=0;i<A.size();i++){
        if(ct<2&&A[i]==temp)ct++,A[j++]=temp;
        else if(ct==2&&A[i]==temp) continue;
        else if(A[i]!=temp){
            ct=1;temp=A[i];A[j]=temp;
            j++;
        }
        
    }
    return j;
}
