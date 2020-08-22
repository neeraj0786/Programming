/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp(Interval i1, Interval i2)
 {
     if(i1.start<i2.start)
     return 1;
     else
     return 0;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),cmp);
    vector<Interval> res;
    int n =A.size();
    int i=0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i].end>=A[i+1].start){
        A[i+1].start = A[i].start;
        if(A[i].end>A[i+1].end)
        A[i+1].end=A[i].end;
        A[i].start=-1;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(A[i].start!=-1){
        res.push_back(A[i]);
        }
        
    }
    return res;
    
}

