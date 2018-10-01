bool isCol(vector<string> sol, int c)
{
    int N =sol.size();
    for(int i=0;i<N;i++)
    {
        if(sol[i][c]=='Q') return false;
    }
    return true;
}

bool isDiag(vector<string> sol, int r, int c)
{
    int N = sol.size();
    while(r!=0 && c!=0){
        if(sol[r][c]=='Q') return false;
        else r--,c--;
    }
    while(r!=N && c!=N){
        if(sol[r][c]=='Q') return false;
        else r++,c++;
    }
    return true;
}

bool isoffDiag(vector<string> sol, int r, int c)
{
    int N = sol.size();
    
    while(r!=0 && c!=N){
        if(sol[r][c]=='Q') return false;
        else r--,c++;
    }
    while(r!=N && c!=0){
        if(sol[r][c]=='Q') return false;
        else r++,c--;
    }
    return true;
    
}
bool isValid(vector<string> sol, int r, int c)
{
    return isCol(sol, c) && isDiag(sol, r,c) && isoffDiag(sol, r, c);
}

void nqueens(int t, vector<vector<string>> & S, int N, vector<string> sol, int nq)
{
    if(t==N && nq == N){
        S.push_back(sol);
    }    
    else{
        for(int i=0; i<N; i++)
        {
            if(!isValid(sol, t, i)) continue;
            
            sol[t][i] = 'Q';
            nq++;
            nqueens(t+1, S, N, sol , nq);
            nq--;
            sol[t][i] = '.';
            
        }
    }
}
vector<vector<string> > Solution::solveNQueens(int N)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // int N = A.size();
    
    vector<string> sol(N, string(N, '.'));
    vector<vector<string>> S;
    if(N==0||N ==2 || N ==3) return S;
    nqueens(0, S, N, sol, 0);
    return S;
}

/*[..Q. Q... ...Q .Q.. ] [.Q.. ...Q Q... ..Q. ]*/
