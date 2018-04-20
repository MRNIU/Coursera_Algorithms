//
//  queues.hpp
//  week2
//
//  Created by 牛志宏 on 2018/4/18.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#ifndef queues_hpp
#define queues_hpp
#include "iostream"


class Queues {
private:
    struct Node{
        Node *pre=NULL;
        Node *next=NULL;
        int data=0;
    };
    int count=0;
    Node *head=NULL;
    Node *tail=NULL;
    
public:
    Queues(void);
    void push(int data);
    int pop();
    bool Empty();
    //~Queues();
};



#endif /* queues_hpp */
