int romantoint(char c){
    switch(c){
    case 'I':   return 1;
    case 'V':   return 5;
    case 'X':   return 10;
    case 'L':   return 50;
    case 'C':   return 100;
    case 'D':   return 500;
    case 'M':   return 1000;
    default:    return 0;  
    }
}

int Solution::romanToInt(string A) {
    int num=0,size=A.size();
    for(int i=0;i<size;i++){
        if(i<size-1&&romantoint(A[i])<romantoint(A[i+1])){
            num-=romantoint(A[i]);
        } 
        else num+=romantoint(A[i]);
    }
    return num;
}

//Solution 2

/*int Solution::romanToInt(string A) {

    map<char,int> dict = {{'I',1},{'X',10},{'L', 50}, {'C', 100},{'D', 500},{'M', 1000}};
    int sum=0, i=0;
    while(A[i]=='M')i++, sum+=1000;
    
    if(A[i]=='C'&&A[i+1]=='M')i+=2,sum+=900;
    if(A[i]=='D'){
        // cout<<"C1"<<endl;
        i++;sum+=500;
        while(A[i]=='C') i++, sum+=100;
    }
    // cout<<"C4"<<endl;
    if(A[i]=='C'&&A[i+1]=='D')i+=2, sum+=400;
    while(A[i]=='C') i++, sum+=100;
    // cout<<"C5"<<endl;
    // cout<<i<<endl;
    if(A[i]=='X'&&A[i+1]=='C')i+=2,sum+=90;
    if(A[i]=='L'){
        // cout<<"CX"<<endl;
        i++;sum+=50;
        while(A[i]=='X') i++, sum+=10;
    }
    if(A[i]=='X'&&A[i+1]=='L')i+=2, sum+=40;
    while(A[i]=='X') i++, sum+=10;
    if(A[i]=='I'&&A[i+1]=='X')i+=2, sum+=9;
    //  if(A[i]=='I'&&A[i+1]=='L')i++,sum+=9;
    if(A[i]=='V'){
        i++;sum+=5;
        while(A[i]=='I') i++, sum+=1;
    }
    if(A[i]=='I'&&A[i+1]=='V')i+=2, sum+=4;
    // cout<<"C6"<<endl;
    while(A[i]=='I') i++, sum+=1;
    
    
    return sum;
}*/
