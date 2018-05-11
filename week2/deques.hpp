//
//  deque.hpp
//  week2
//
//  Created by 牛志宏 on 2018/4/20.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#ifndef deques_hpp
#define deques_hpp

#include "iostream"

class Deques{
private:
    struct Node{
        Node *pre=NULL;
        Node *next=NULL;
        int data=0;
    };
    Node *head=NULL;
    Node *tail=NULL;
    int count=0;
    
public:
    Deques();
    bool Empty();
    void addHead(int data);
    void addTail(int data);
    int removeHead();
    int removeTail();
    int size();
    //~Deque();
};

#endif /* deque_hpp */
