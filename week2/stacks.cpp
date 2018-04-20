//
//  Stacks.cpp
//  week2
//
//  Created by 牛志宏 on 2018/4/18.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#include "stacks.hpp"

Stacks::Stacks(void){}

void Stacks::push(int data){
    Node *n_node=new Node;
    n_node->data=data;
    n_node->next=NULL;
    if(Empty()) {
        n_node->pre=NULL;
    }
    else {
        n_node->pre=top;
    }
    if(!Empty()) {
        top->next=n_node;
    }
    top=n_node;
    count++;
    return;
}

int Stacks::pop(){
    if (Empty()){
        std::cout<<"Error: stack is empty!"<<std::endl;
        return 0;
    }
    int data = top->data;
    if(top->pre==NULL){
        top=NULL;
        count--;
        return data;
    }
    else{
        top=top->pre;
        top->next=NULL;
    }
    count--;
    return data;
}

int Stacks::size(){
    return count;
}


bool Stacks::Empty(){
    return (top==NULL);
}

/*
Stacks::~Stacks(){
    while(size()!=0){
        
    }
}
 */
