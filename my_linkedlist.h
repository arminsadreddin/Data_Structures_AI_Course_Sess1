#ifndef MY_LINKEDLIST_H
#define MY_LINKEDLIST_H

#include <iostream>

using namespace std;

class my_linkedList
{
public:
    my_linkedList();
    void run();
    struct node{
        int data;
        node * ptr;
    };
};

#endif // MY_LINKEDLIST_H
