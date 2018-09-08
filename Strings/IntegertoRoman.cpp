//https://www.interviewbit.com/problems/integer-to-roman/
string inttoroman(int x){
    switch(x){
    case 1:   return "I";
    case 5:   return "V";
    case 10:   return "X";
    case 50:   return "L";
    case 100:   return "C";
    case 500:   return "D";
    case 1000:   return "M";
    default:    return "";  
    }
}
string Solution::intToRoman(int A) {
    int last, start=0, p ;
    string str={};
    // nd=log10(A)+1;
    while(A!=0){
        last=A%10;
        p=pow(10, start);
        if(last<=3){
            for(int j=0;j<last;j++){
                str=inttoroman(p)+str;
            }
        }
        else if(last==4||last==9){
            str=inttoroman(p)+inttoroman((last+1)*p)+str;
        }
        else if(last<=8){
            
            for(int j=0;j<last-5;j++)
                str=inttoroman(1*p)+str;
            str=inttoroman(5*p)+str;
        }
        
        A=A/10;
        start++;
    }
    return str;
}
