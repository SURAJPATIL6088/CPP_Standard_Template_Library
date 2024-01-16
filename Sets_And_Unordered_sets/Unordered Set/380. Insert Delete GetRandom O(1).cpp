/*
Implement the RandomizedSet class:

1. RandomizedSet() Initializes the RandomizedSet object.
2. bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
3. bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
4. int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.

Note : You must implement the functions of the class such that each function works in average O(1) time complexity.
*/

// https://leetcode.com/problems/insert-delete-getrandom-o1/

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
