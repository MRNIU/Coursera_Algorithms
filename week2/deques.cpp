//
//  deque.cpp
//  week2
//
//  Created by 牛志宏 on 2018/4/20.
//  Copyright © 2018年 MRNIU. All rights reserved.
//  双端队列

#include "deques.hpp"

Deques::Deques(void){
    return;
}

void Deques::addHead(int data){
    Node *n_node=new Node;
    n_node->data=data;
    n_node->next=NULL;
    if(Empty()){
        head=n_node;
        tail=n_node;
        n_node->pre=NULL;
        count+=1;
        return;
    }
    else {
        head->next=n_node;
        n_node->pre=head;
        head=n_node;
        count+=1;
        return;
    }
}

int Deques::removeHead(){
    int data=0;
    if(Empty()){
        std::cout<<"removeHead Error: the queue is empty."<<std::endl;
        return -1;
    }
    else if(head==tail){
        data=head->data;
        head=NULL;
        tail=NULL;
        count-=1;
        return data;
    }
    else {
        data=head->data;
        head->data=0;
        head->pre->next=NULL;
        head=head->pre;
        count-=1;
        return data;
    }
}

void Deques::addTail(int data){
    Node *n_node=new Node;
    n_node->data=data;
    n_node->pre=NULL;
    if(Empty()){
        head=n_node;
        tail=n_node;
        n_node->next=NULL;
        count+=1;
        return;
    }
    else {
        tail->pre=n_node;
        n_node->next=tail;
        tail=n_node;
        count+=1;
        return;
    }
}

int Deques::removeTail(){
    int data=0;
    if(Empty()) {
        std::cout<<"removeTail Error: the queue is empty."<<std::endl;
        return -1;
    }
    else if(head==tail){
        data=tail->data;
        head=NULL;
        tail=NULL;
        count-=1;
        return data;
    }
    else {
        data=tail->data;
        tail->next->pre=NULL;
        tail->data=0;
        tail=tail->next;
        count-=1;
        return data;
    }
}

bool Deques::Empty(){
    return (tail==NULL);
}

int Deques::size(){
    return count;
}
