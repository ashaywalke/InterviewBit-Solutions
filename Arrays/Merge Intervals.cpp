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
   return A.start<B.start;//Since the intervals are non-overlapping 
} 
vector<Interval> Solution::insert(vector<Interval> &A, Interval newInterval) {
    // Interval ()
    A.push_back(newInterval);
    sort(A.begin(), A.end(), myCompare);
    vector<Interval> v;
    v.push_back(A[0]);
    int n=A.size();
    for(int i=1;i<n;i++){
        if(v[v.size()-1].end < A[i].start)v.push_back(A[i]);
        else if (v[v.size()-1].end>=A[i].start && v[v.size()-1].end<A[i].end){
            v[v.size()-1] = Interval(v[v.size()-1].start, A[i].end);
        }
        else if (v[v.size()-1].end>A[i].end);
        
    }
    return v;
}
