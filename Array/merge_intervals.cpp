/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {

        int m=0;
        vector<Interval> v;
        if(intervals.size()==0)
        {
            v.push_back(newInterval);
            return v;
        }
        for(int i=0;i<intervals.size();i++)  // finding overalpping of new interval 
        {
            if(m==0)
            {
                if(newInterval.start>intervals[i].start&&newInterval.end<intervals[i].end)
                {
                    m=1;
                    break;
                }
                if(newInterval.start<=intervals[i].start&&newInterval.end>=intervals[i].end)
                {
                    m=1;
                    intervals[i].start=newInterval.start;
                    intervals[i].end=newInterval.end;
                    break;
                }
                if(newInterval.start<=intervals[i].start&&newInterval.end<intervals[i].end&&newInterval.end>=intervals[i].start)
                {
                    intervals[i].start=newInterval.start;
                    m=1;
                    break;
                }
                if(newInterval.start>intervals[i].start&&newInterval.end>=intervals[i].end&&newInterval.start<=intervals[i].end)
                {
                    intervals[i].end=newInterval.end;
                    m=1;
                    break;
                }
                
            }
          
        }
        
         if(m==0)   // if overalpping not found 
        {
            
                int f=0;
              for(int i=0;i<intervals.size();i++)
            {
                if(intervals[i].start>newInterval.end&& !f)
                {
                    v.push_back(newInterval);
                    
                    f=1;
                    
                }
                v.push_back(intervals[i]);
            }
            if(f==0)
            {
                v.push_back(newInterval);
            }
              return v;
            
            
        }
          if(m==1)  // if overalpping found 
        {
            for(int i=0;i<intervals.size()-1;i++)
        {
            if(intervals[i+1].start<=intervals[i].end)
                {
                    intervals[i+1].start = intervals[i].start;
                    if(intervals[i+1].end<intervals[i].end)
                    intervals[i+1].end=intervals[i].end;
                    intervals[i].start=-1;
                }
        }
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i].start!=-1)
            v.push_back(intervals[i]);
        }
         return v;  
        }
        
        
        
}

