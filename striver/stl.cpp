#include <iostream>
#include <vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
using namespace std;

// Pair
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {make_pair(1, 2), make_pair(2, 6), make_pair(6, 2)};
    cout << arr[1].second;
}

// Vector
void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // Does simmilar work as push_back but it is fastest
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
    }

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 5);
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i].first << " ";
        cout << vec[i].second << " ";
    }

    vector<int> v1(5);     //{0, 0, 0, 0, 0}
    vector<int> v2(5,20);   //{20, 20, 20, 20, 20}
    vector<int> v3(v2);     // v3 = copy(v2)

    // iterator 
    vector<int>::iterator it = v.begin();   //It will point to 0th position
    cout<<*(it)<<" ";       //By taking a for loop and it++ we can get all the elements
    // vector<int>::iterator it = v.end();   //It will point to (n+1)th position on it-- it will point to last element
    // vector<int>::iterator it = v.rend();  //It will point to (-1)th position
    // vector<int>::iterator it = v.rbegin();  //It will point to nth position on it++ it will point to (n-1)th element
    cout<<v.back();    //It will return the last element

    // To print the vector 
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        cout<< *(it);
    }
    // We can use auto it can automatically identify the datatype
    for(auto it = v.begin(); it!= v.end(); it++){
        cout<< *(it);
    }
    for(auto it : v){
        cout<< it;
    }

    // To delete element 
    v.erase(v.begin()+1);  //.erase(position)
    v.erase(v.begin()+1, v.begin()+4);  //.erase([start,end))

    // To insert element 
    v.insert(v.begin()+1, 300);  //.begin(position, element)
    v.insert(v.begin()+1, 2, 300) ; //.begin(position, no.of times, element)
    // To insert a vector 
    vector<int>vect(2,40);
    v.insert(v.begin(), vect.begin(), vect.end());

    // To find size 
    cout<< v.size();

    v.pop_back();  //pop the first element
    
    // To swap two vectors 
    v1.swap(v2);
    v.clear(); //Erase the entire vector
    cout<< v.empty();  //Returns true or false
}

// List 
void explainList(){
    list <int> li;
    li.push_back(2);  //{2}
    li.emplace_back(4);  //{2,4}
    li.push_front(3);  //{3,2,4}
    li.emplace_front(1);  //{1,3,2,4}

    //All the other operations same as vector
}

// Deque 
void explainDeque(){
    deque<int>dq;
    // all methods simillar to list and vector 
}

// Stack 
void explainStack(){
    stack<int> st;
    st.push(1);  //{1}
    st.push(2);  //{2,1}
    st.emplace(5);  //{5,2,1}

    cout<<st.top();  //Return 5
    st.pop();  //Pop the top element
    cout<<st.size();  //Return the size of the stack
    cout<< st.empty();  //return true or false

    // To swap two staccks
    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue
void explainQueue(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.emplace(5);  //{1,2,5}

    q.back() += 5;
    cout<<q.back();  //Return 10

    cout<<q.front();  //Return 1
    q.pop(); //{2,10}
    cout<< q.front();  //return 2
}

// Priority queue 
void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(5);  //{5}
    pq.push(2);  //{5, 2}
    pq.emplace(10);  //{10, 5, 2}

    cout<<pq.top();  //Return 10

    pq.pop(); //{5, 2}
    cout<<pq.top();  //Return 5

    // Minimum heap (minimum priority queue)
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);  //{5}
    pq.push(2);  //{2, 5}
    pq.emplace(10);  //{2, 5, 10}
    cout<< pq.top(); // Return 2
}

// Set - It stores unique element in sorted order
void explainSet(){
    set<int> st;
    st.insert(1);  // 1
    st.emplace(4);  // 1, 4
    st.insert(2);  // 1, 2, 4
    st.insert(3);  // 1, 2, 3, 4

    auto it = st.find(3);  // It points to the index of 3
    auto it = st.find(6);  //If the element is not present it will point to st.end()

    st.erase(4);  //1, 2, 3  // It takes logarithmic time
    auto it = st.find(3);
    st.erase(it);  //1, 2   // It takes constant time

    int cnt = st.count(1);  // Returns the no. of times 1 occur in set
}

// Multiset - It stores elements in sorted order but not unique
void explainMultiset(){
    multiset<int> ms;
    ms.insert(1);  // 1
    ms.emplace(4);  // 1, 4
    ms.insert(1);  // 1, 1, 4
    ms.insert(3);  // 1, 1, 3, 4

    int cnt = ms.count(1);  // Returns the no. of times 1 occur in set

    ms.erase(1);  // Erase all 1
    ms.erase(ms.find(1));  // Erase only one 1
}

// Unordered Set - It stores unique element but not in sorted order
void explainUSet(){
    unordered_set <int> st;
}

// Map - It stores unique keys in sorted order 
void explainMap(){
    map <int, int> mpp;
}
int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQuque();
    // explainPriorityQueue();
    // explainSet
    // explainMultiset
    // explainUSet
    // explainMap
    return 0;
}