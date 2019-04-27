#include "my_vector.h"

my_vector::my_vector()
{

}
void my_vector::run(){
    vector<int> myVector;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);

    while(myVector.size() != 0){
        cout << myVector.back()<<endl;
        myVector.pop_back();
    }

    // push
    // pop
    // size
    // back
    // front
    // at
    // clear
    // ...


}
