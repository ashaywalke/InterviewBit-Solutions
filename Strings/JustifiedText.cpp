
void print_string(vector<string> A){
    int i=0,k=0,j;
    while(1){
        j=0;
        while(j<A[i].length()){
            cout<<"k: "<<k<<": "<<A[i][j]<<endl;
            k++;j++;
        }
        i++;
    }
}
string add_spaces(vector<string> &A, int start, int end, int L){
    int num_words=end-start+1, extra_spaces,pws,remaining;
    int i=start, sum=0, k=start;
    string s;
    for(k=start;k<=end;k++){
        sum+=A[k].length();
    }
    A[end]=A[end].substr(0, A[end].length()-1);
    if(sum<L+1&&num_words!=1){
        extra_spaces = L+1- sum;
        num_words--; 
        pws=extra_spaces/(num_words);//per word spaces
        //Insert these spaces evenly from start to end-1
        for( k=start;k<end;k++){
            A[k]=A[k]+string( pws,' ');
        }
        //Find remaining spaces
        remaining=extra_spaces-pws*(num_words);
        //add remaining spaces after that from L to R
        k=start;
        while(remaining--){
            A[k]+=' ';k++;
        }
        
    }
    // db;
    for(k=start;k<=end;k++){
            s+=A[k];
        }
        //
    if(num_words==1)while(s.length()<L)s+=' ';
    return s;
    
} 
vector<string> Solution::fullJustify(vector<string> &A, int L) {
    vector<string> str_vec;
    int N=A.size();
    int sum=0;
    if(A.size()==0) return str_vec;
    vector<int> cum_len(N,0);
    string s={};
    for(int i=0;i<A.size();i++){
        A[i]=A[i]+' ';
    }
    cum_len[0]=A[0].length();
    for(int i=1;i<N;i++){
        cum_len[i]=cum_len[i-1]+A[i].length();
    }
    int start=0, end=0, str_sum=0;
    for(int i=0;i<N;i++){
        
        sum+=A[i].length();
        if((cum_len[N-1]-cum_len[end-1])<=L+1){
           A[N-1]=A[N-1].substr(0, A[N-1].length()-1);
            for(int k=start;k<=N-1;k++){
                s+=A[k];i++;
            }
            while(s.length()<L)
                s+=' ';
            str_vec.push_back(s);
            /*cout<<"C1:"<<endl;
            cout<<str_vec[str_vec.size()-1]<<endl;*/
        }
        else if((cum_len[N-1]-cum_len[end-1])>L+1&&sum==L+1||sum<L+1 && sum+A[i+1].length()>L+1){
            end=i;
            str_vec.push_back(add_spaces(A,start,end,L));
            /*cout<<"C2:"<<endl;
            cout<<str_vec[str_vec.size()-1]<<endl;*/
            start=end+1;end++;sum=0;
        }
    }
    
}
/* All Edgy Test Cases for me:
7 This is an example of text justification.
16

3 This is Spartan
10

23 am fasgoprn lvqsrjylg rzuslwan xlaui tnzegzuzn kuiwdc fofjkkkm ssqjig tcmejefj uixgzm lyuxeaxsg iqiyip msv uurcazjc earsrvrq qlq lxrtzkjpg jkxymjus mvornwza zty q nsecqphjy
14

5 What must be shall be.
12
*/
