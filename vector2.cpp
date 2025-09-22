#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){    
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    cout<< "this is the vector "<<endl;
    cout<<endl;
    }
    
int main(){
    int element;
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    vector <int> vec1;  //zero length integer vector 
    display(vec1);

    vector <char> vec2(4); //character vector of length 4
    vec2.push_back('5');
    display(vec2);

    vector<char> vec3(vec2); ///creating a vector from vec2
    display(vec3);

    vector<int> vec4(6,3);//prints 3 , 6times
    display(vec4);
    cout<<vec4.size();

    // for(int i=0;i<size;i++){
    //     cout<<"enter the elements in the vector"<<endl;
    // //cin>>element;
    // //vec1.push_back(element);


    
   
    return 0;
}