//
//  randomizedqueue.hpp
//  week2
//
//  Created by 牛志宏 on 2018/5/9.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#ifndef randomizedqueue_hpp
#define randomizedqueue_hpp

#include "iostream"

// 随机队列，定义不明确，暂缺
// Random queue, the definition is not clear, missing

class Randque{
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
    Randque();
    bool Empty();
    void enqueue(int data); // add the item
    int dequeue(); // remove and return a random item
    int sample(); // return a random item (but do not remove it)
    int size();
    //~Deque();
};


#endif /* randomizedqueue_hpp */
