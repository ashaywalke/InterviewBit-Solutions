//https://www.interviewbit.com/problems/generate-all-parentheses-ii/
void sol(int n1, int n2, int N, string str, vector<string> &S)
{
    if(n1 + n2 == 2*N )
    {
        S.push_back(str);
    }
    else
    {
        if(n1>=n2 )
        {
            if(n1<N){
                str.push_back('(');
                sol(n1+1, n2, N,  str, S);
            }
            if(n1!=n2)
            {
                if(n1==N)str.push_back(')');
                else str[str.length()-1] = ')';
                sol(n1, n2+1, N, str, S);
            }
        }
        else return;
    }
}
vector<string> Solution::generateParenthesis(int N) 
{
    
    
    string str;
    vector<string> S;
    sol(0, 0, N, str, S);
    sort(S.begin(), S.end());
    return S;
}
