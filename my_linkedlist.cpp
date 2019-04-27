#include "my_linkedlist.h"

my_linkedList::my_linkedList()
{

}
void my_linkedList::run(){

    //------------ create list starts------------------
    node first;
    node second;
    node third;

    first.data = 10;
    second.data = 20;
    third.data = 30;

    first.ptr = & second;
    second.ptr = & third;
    third.ptr = NULL;

    node cur_node = first;
    while(cur_node.ptr != NULL){
        cout << cur_node.data << endl;
        cur_node = *cur_node.ptr;
    }
    cout << cur_node.data << endl;


    //------------ create list ends------------------

    cout << "------------------------------------"<<endl;

    //------------ make loop starts--------------------
    third.ptr = &first;
    cur_node = first;
    int count = 0 ;
    while(&cur_node != NULL){
        if(count == 10){
            break;
        }
        cout << cur_node.data << endl;
        cur_node = *cur_node.ptr;
        count ++;
    }
    //------------ make loop ends--------------------

    cout << "------------------------------------"<<endl;

    //-------------delete data starts--------------------
    first.ptr = &third;
    cur_node = first;
    count = 0 ;
    while(&cur_node != NULL){
        if(count == 10){
            break;
        }
        cout << cur_node.data << endl;
        cur_node = *cur_node.ptr;
        count ++;
    }

    //---------------- delete data ends -----------------










}
