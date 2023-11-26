class MyHashMap {
public:

    vector<int> ans;
    MyHashMap() {
       ans = vector<int>(1e6 + 1, -1);
    }
    
    void put(int key, int value) {
        ans[key] = value;
    }
    
    int get(int key) {
        return ans[key];
    }
    
    void remove(int key) {
        ans[key] = -1;
    }
};

