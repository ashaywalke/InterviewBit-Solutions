void print(vector<int> A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void Solution::merge(vector<int> &A, vector<int> &B) {
    //Solution1
    int l1=A.size(), l2 = B.size();
    int i=0,j=0;
    while(i<=l1+l2-1 && j<=l2-1){
        if(i==l1){
            for(;j<l2;j++){
                A.push_back(B[j]);    
            }
            break;
            
        }
        
        if(A[i]<B[j])i++;
        else{
            A.insert(A.begin()+i, B[j]);
            // cout<<A[i]<<" "<<B[j]<<endl;
            print(A);
            
            j++;
        }
        
    }
    /*int a=0, b=0;
    vector<int> res;
    while(a<=A.size() && b<=B.size()){
        if(A[a]<B[b]){
            res.push_back(A[a]);a++;
        }
        else if(A[a]>B[b]){
            res.push_back(B[b]);b++;
        }
        else{
            res.push_back(A[a]);a++;
            res.push_back(B[b]);b++;
        }
    }
    while(a<=A.size()){
        res.push_back(A[a]);
    }
    while(b<B.size()){
        res.push_back(B[b]);
    }
    A.clear();
    
    A=res;*/
    // res.clear();
    // A.insert(A.begin(), res);
}
