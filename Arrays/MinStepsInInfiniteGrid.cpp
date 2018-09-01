

    int minsteps(int a,int b, int c, int d){
        int x_diff = abs(a-c);
        int y_diff = abs(b-d);
        return max(x_diff, y_diff);
    }
    int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
        int n = Y.size();
        int steps = 0;
        int a,b,c,d,i,j;
        for(int i=1;i<n;i++){
            j=i;
            a = X[i], c = X[i-1];
            b = Y[i], d= Y[i-1];
            steps+=minsteps(a,b,c,d);
        }
        return steps;
    }

