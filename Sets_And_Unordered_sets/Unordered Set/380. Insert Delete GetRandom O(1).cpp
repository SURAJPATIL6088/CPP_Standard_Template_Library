class RandomizedSet {
public:
    unordered_set<int>ust;

    RandomizedSet() {
        
    }
    
    bool insert(int val) 
    {
        // means element is present
        if(ust.find(val) != ust.end())
        {
            return false;
        }
        else
        {
            ust.insert(val);
            return true;
        }
    }
    
    bool remove(int val) 
    {
        // means element is not present
        if(ust.find(val) == ust.end())
        {
            return false;
        }
        else
        {
            // that means here element is present so erase it
            ust.erase(val);
            return true;
        }        
    }
    
    int getRandom() 
    {        
        // doing mod to get in range [0, s.size()-1]
        int position = rand()%ust.size();

        // std::next returns an iterator pointing to the element after being advanced by certain no. of positions.
        return *next(ust.begin(), position);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
