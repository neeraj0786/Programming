int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps=0;
    for(int i=0;i<A.size()-1;i++) steps+=max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));
    return steps;
}


