class MyHashSet {
    set<int> arr;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        arr.insert(key);
        
    }
    
    void remove(int key) {
        if(arr.count(key) >0)
            arr.erase(key);
        
    }
    
    bool contains(int key) {
        if(arr.count(key) >= 1)
            return true;
        else return false;
        
    }
};
