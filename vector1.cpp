#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){    
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
    
int main(){
    int element;
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    vector <int> vec1;  //this is the syntax for VECTOR
    for(int i=0;i<size;i++){
        cout<<"enter the elements in the vector"<<endl;
    cin>>element;
    vec1.push_back(element);


    }
    //vec1.pop_back(); //pops back the last element 
    display(vec1);
    // Insert 566 at the beginning
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    display(vec1);

    // Insert 200 at the 2nd place (index 2)
    iter = vec1.begin();
    if (vec1.size() >= 2) {
        vec1.insert(iter + 2, 200);
    } else {
        vec1.push_back(200); // fallback if not enough elements
    }
    display(vec1);

    // Insert four 100s at index 1
    iter = vec1.begin();
    if (vec1.size() >= 1) {
        vec1.insert(iter + 1, 4, 100);
    } else {
        vec1.insert(vec1.begin(), 4, 100);
    }
    display(vec1);
    return 0;
}