int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    unordered_map<double,int> slopeMap;
    int curr_max=0,vertical_points=0,overlap=0,maxp=0;
    for(int i=0;i<A.size();i++)
    {
        curr_max=vertical_points=overlap=0;
        pair<int,int> p1=make_pair(A[i],B[i]);
        for(int j=i+1;j<A.size();j++)
        {
            pair<int,int> p2=make_pair(A[j],B[j]);
            if(p1==p2) overlap++;
            else if(p1.second==p2.second) vertical_points++;
            else
            {
                int dy = p1.first-p2.first;
                int dx = p1.second-p2.second;
                double slope = ((dy+0.0)*1.0)/((dx+0.0)*1.0);
                slopeMap[slope]++;
                curr_max=max(curr_max,slopeMap[slope]);
            }
            curr_max=max(curr_max,vertical_points);
        }
        maxp=max(maxp,curr_max+overlap+1);
        slopeMap.clear();
    }
    return maxp;
}

