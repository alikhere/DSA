class TimeMap {
public:
    map<string, map<int, string , greater<int>>> mp;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
        
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end())
            return "";

        auto it = mp[key].lower_bound(timestamp);
        
        if (it == mp[key].end())
            return "";
        return it->second;
    }
};
