/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool myCompare(Interval A, Interval B){
    return A.start<B.start;
} 
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> v;
    sort(A.begin(), A.end(), myCompare);
    v.push_back(A[0]);
    Interval lastInterval;
    for(int i=1;i<A.size();i++){
        lastInterval = v[v.size()-1];
        if(lastInterval.end < A[i].start) v.push_back(A[i]);
        else if (lastInterval.end >=A[i].start && lastInterval.end<=A[i].end){
            v[v.size()-1] = Interval(lastInterval.start, A[i].end);
        }
        
    }
    return v;
    
    
}
