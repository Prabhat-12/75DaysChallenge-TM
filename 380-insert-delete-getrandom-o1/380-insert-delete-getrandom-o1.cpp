class RandomizedSet {
     set<int> result;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(result.find(val)!=result.end())
        {
             return false;   
        }
        else
        {
            result.insert(val);
            return true;   
        }
    }
    
    bool remove(int val) {
        if(result.find(val)!=result.end())
        {
             result.erase(val);
            return true; 
        }
        else
        {
             return false;
        }
    }
    
    int getRandom() {
        set<int>::iterator it;
    it=result.begin();
    int r = rand()%result.size();
    // while(r--)  // option 1
    //    ++it;
    std::advance(it,r); // option 2- advance is used to skip every other element
    
    return *it;
        
    }
};


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */