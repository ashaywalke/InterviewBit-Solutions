bool myCompare(string x, string y){
    string xy, yx;
    xy = x+y;
    yx = y+x;
    if(xy>yx) return false;
    else return true;
}
string Solution::largestNumber(const vector<int> &A) {

    vector<string> v;
    string str={};
    for(int i=0;i<A.size();i++) v.push_back(to_string(A[i]));
    sort(v.begin(), v.end(),myCompare);
    for(int i=v.size()-1;i>=0;i--) str.append(v[i]);
    if(str[0]=='0') return "0";
    else return str;
}
