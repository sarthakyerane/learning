#include<iostream>
#include<list>
using namespace std;

void display(list<int> &listt) {  //we r pointing towards a referecne in the list which is listt
    list<int>:: iterator it;

    for (it=listt.begin();it!=listt.end();it++) { // we start the iteration from the starting of the list till the end 
    cout<<*it<<" ";  //we showing what the pointer is pointing to 
    }
  cout<<endl;

}
int main(){
    list<int> list1; //syntax, list with 7 elements size 
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(2);

    display(list1);
    list1.pop_back();// pop from back 
    display(list1);
    //list1.pop_front();  //pop from front
    //list1.remove(1); //removes 1 , all occurances 
    //list1.sort(); // sorts the list

    display(list1);



    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter =45;
    iter++;
     *iter =6;
    iter++;
     *iter =9;
    iter++;
    display(list2);
    cout<< endl;
    
    list1.merge(list2);  //merging the lists
    cout<< "the merged list is :";
    display(list1);
    list1.sort();
    cout<<"the sorted list is:";
    display(list1);

    list1.reverse();  //reversing the list
    display(list1);

    return 0 ;


}   
