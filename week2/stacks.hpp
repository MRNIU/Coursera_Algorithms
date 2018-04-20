//
//  stacks.h
//  week2
//
//  Created by 牛志宏 on 2018/4/18.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#ifndef stacks_h
#define stacks_h
#include "iostream"

class Stacks {
private:
    struct Node{
        Node *next=NULL;
        Node *pre=NULL;
        int data=0;
    };
    Node *top=NULL;
    int count=0;
    
public:
    Stacks();
    // implementation with linked list
    int pop();
    // remove date from stack
    void push(int data);
    // add date to stack
    int size();
    // return size of stack
    bool Empty();
    // is the stack empty?
    //~Stacks();
};




#endif /* stacks_h */
