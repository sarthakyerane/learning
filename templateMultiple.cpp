#include<iostream>
using namespace std;
//multiple class templates can be used one two three or more
template<class T1, class T2>
class myclass{
    public:
      T1 data1;
      T2 data2;
    myclass(T1 a ,T2 b){
        data1=a;
        data2=b;}

        void display(){
        cout<<this->data1<<endl<<this->data2;}
    

};
int main(){ 
    myclass<int,char> obj(25,'c');
    obj.display();
    return 0;
}
//see we can change the data type thats the best part `
//int main() {
  /*myClass<char, float> obj;
  /  obj.data1 = 'C';   // Assign directly
    obj.data2 = 1.8;
    obj.display();
    return 0;