#include "my_stack.h"

my_stack::my_stack()
{

}
void my_stack::run(){
    stack <int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while (myStack.size() != 0) {
        cout << myStack.top() << endl;
        myStack.pop();
    }

}
