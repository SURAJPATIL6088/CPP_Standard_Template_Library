# Unordered Set

## Unordered Set

```
#include<unordered_set>
```
### Properties : 

1. An unordered_set is implemented using hash table.
2. Where keys are hashed into indices of the hash table so that the insertion is always randomised.
3. Time Complexity <br>
   a. Constant time O(1) on an average.<br>
   b. which can go up to the linear time O(n) in worst case.
4. set -> key are stored in ordered fashion.
5. unordered_set -> key are stored in unordered fashion.
6. set is internally implemented as *RED BLACK* Tree.
7. unordered_set is internally implemented *HASHING*.
8. set operation -> time complexity - *O(logn)*.
9. unordered_set operation -> time complexity - *O(1)*.

### Library Function : 
1. insert() : it should be in the unordered fashion.

```
unordered_set<int>ust;

// O(1)
ust.insert(10);
ust.insert(5);
ust.insert(15);
ust.insert(20);

// print
for(auto it=ust.begin(); it != ust.end(); it++)
{
  cout<<*it<<" ";
}

// Output : 20 15 5 10
```

2. size()  : it give the size of the set. duplicates are not allowed.

```
unordered_set<int>ust;

// O(1)
ust.insert(10);
ust.insert(5);
ust.insert(15);
ust.insert(20);
ust.insert(20);

// O(1)
cout<<"Number of Element : "<<ust.size()<<" ";

// Output : Number of Element : 4
```

3. clear() : Erase the Set

```
unordered_set<int>ust;
ust.insert(10);
ust.insert(5);
ust.insert(15);
ust.insert(20);

// clear the set
ust.clear();

// O(1)
cout<<"Number of Element : "<<ust.size()<<" ";

// Output : Number of Element : 0
```

4. begin() : it Provides the Starting element.
5. end() : it Provides the Ending element.


6. find() : 

```
unordered_set<int>ust;
ust.insert(10);
ust.insert(5);
ust.insert(15);
ust.insert(20);

// to check particular element is present or not
// it start from the starting it goes upto the last element if not then return

int key = 20;
if(ust.find(key) == ust.end())
{
  cout<<"Key Not Found"<<endl;
}
else
{
  cout<<"Key Found"<<endl;
}

// Output : Key Found
```

7. erase() : Delete Particular element.

```
unordered_set<int>ust;
ust.insert(10);
ust.insert(5);
ust.insert(15);
ust.insert(20);

// direct method
int delete_key = 20;
ust.erase(delete_key);

// another Method
if(ust.find(delete_key) == ust.end())
{
  cout<<"Key Not Found"<<endl;
}
else
{
  auto temp = ust.find(delete_key);
  ust.erase(temp);
}

// O(1)
cout<<"Number of Element : "<<ust.size()<<" ";

// Output : Number of Element : 3
```
