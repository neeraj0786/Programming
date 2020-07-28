#include<list>
list<int> dq;
unordered_map<int,pair<int,list<int>::iterator>> mp;
int maxs;
LRUCache::LRUCache(int capacity) {
    maxs=capacity;
    mp.clear();
    dq.clear();
}

int LRUCache::get(int key) {
    
    if(mp.find(key)!=mp.end())
    {
        dq.erase(mp[key].second);
        dq.push_front(key);
        mp[key].second=dq.begin();
        return mp[key].first;
    }
    else return -1;
}

void LRUCache::set(int key, int value) {
    if(mp.find(key)==mp.end())
    {
        if(dq.size()==maxs)
        {
            int last = dq.back();
            dq.pop_back();
            mp.erase(last);
        }
    }
    else
    dq.erase(mp[key].second);
    //Common
    dq.push_front(key);
    mp[key].second=dq.begin();
    mp[key].first=value;
}

