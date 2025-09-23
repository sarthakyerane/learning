#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksMap;   // syntax for a map named marksMap
    marksMap["Sarthak"]= 99;
    marksMap["Rohan"]= 90;
    marksMap["Rahul"]= 50;  //we have added key value pairs 

    //map is like key value pairs 

    //we make iterator to get the values \
    
    marksMap.insert({{"Raman",170},{"akash",160}});
    map<string, int> ::iterator iter;
    for(iter=marksMap.begin();iter!= marksMap.end();iter++){
        cout<< (*iter).first << " "<< (*iter).second <<"\n";} //using *iter we are pointing to the pairs
        cout<<"the size is:"<<marksMap.size()<<endl;
        cout<<"the max size is :"<<marksMap.max_size()<<endl;
        cout<<"the emptys return value is:"<<marksMap.empty()<<endl;
        return 0;


    }

