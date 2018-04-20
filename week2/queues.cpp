//
//  queues.cpp
//  week2
//
//  Created by 牛志宏 on 2018/4/18.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#include "queues.hpp"


Queues::Queues(void){
    return;
}

 void Queues::push(int data){
     Node *n_node=new Node;
     n_node->data=data;
     n_node->pre=NULL;
     if(Empty()){
         head=n_node;
         tail=n_node;
         n_node->next=NULL;
         return;
     }
     else{
         tail->pre=n_node;
         n_node->next=tail;
         tail=n_node;
         return;
     }
     return;
}

int Queues::pop(){
    if(Empty()){
        return -1;
    }
    else{
        int data=head->data;
        if(head==tail){
            tail=NULL;
            head=NULL;
            return data;
        }
        else{
            head=head->pre;
            head->next=NULL;
            return data;
        }
    }
}

bool Queues::Empty(){
    return (tail==NULL);
}

