question link-https://leetcode.com/problems/my-calendar-i/
class MyCalendar {
public:

         vector<pair<int,int>>timings;
    
    bool book(int start, int end) {
        if(timings.empty())
        {
            timings.push_back({start,end}); return true;
        }
        else
        {
            for(auto & [x,y]: timings)
            {
                if(!((end<=x)|| (start>=y)))return false;
               
            }
             timings.push_back({start,end});
            return true;
        }
       
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
