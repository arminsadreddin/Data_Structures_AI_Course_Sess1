#include "my_queue.h"
my_queue::my_queue()
{

}
void my_queue::run(){
     queue<int> myqueue;
     myqueue.push(1);
     myqueue.push(2);
     myqueue.push(3);

     while(myqueue.size() != 0){
         cout << myqueue.front()<<endl;
         myqueue.pop();
     }
}
