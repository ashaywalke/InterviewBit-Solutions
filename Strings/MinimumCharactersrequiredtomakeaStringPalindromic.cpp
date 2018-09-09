int isPalindromic(string s){
    int i=0, j=s.length()-1;
     while(i<j){
         while(i<j&&!isalnum(s[i]))i++;
         while(i<j&&!isalnum(s[i]))j--;
         if(tolower(s[i])!=tolower(s[j])){
             return 0;
         }
         i++;j--;
     }
     return 1;
 
}
int Solution::solve(string A) {
    string str={};
    string B=A;
    int n=A.length();
    int i=1;
    // reverse(B.begin(), B.end());
    while(i<=n){
        // A=str+A;
        if(!isPalindromic(str+A)){
            str+=A[n-i];
        }
        else if(isPalindromic(str+A)) return str.length();
        // cout<<"str: "<<str<<endl;
        i++;
        // B=A;
        // reverse(B.begin(), B.end());
        
    }
}
