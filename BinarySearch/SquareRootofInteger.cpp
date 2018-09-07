//https://www.interviewbit.com/problems/square-root-of-integer/
int Solution::sqrt(int A) {

    if(A<=1) return A;
    else if(A>1&&A<4) return 1;
    if(A==4) return 2;
    int high=(A/2);
    int low=1,res=0,mid;
    // long int mid; 
    while(low<=high){
        mid = (high+low)/2;
        if(mid<=A/mid) {//return mid;
        // else if(mid*mid<A){ 
            res=mid;
            low=mid+1;}
       // if(mid*mid<A) low=mid+1;
        else high=mid-1;
        // cout<<res<<endl;
    }
    return res;
    
    
}
