//
//  Union_Find.h
//  Coursera_Algorithms
//
//  Created by 牛志宏 on 2018/3/17.
//  Copyright © 2018年 牛志宏. All rights reserved.
//

#ifndef Union_Find_h
#define Union_Find_h


#include "iostream"

#define NUM 1000


class QF{
private:
    int id[NUM];
    int num;
    int count;
public:
    QF(int N);
    ~QF();
    void Union(int p,int q);
    bool isConnect(int p,int q);
    void test();
    int root(int i);
    int Count();
};

QF::QF(int N){
    for(int i=0;i<N;i++)    id[i]=i;
    num=N;
    count=N;
}

void QF::Union(int p, int q){
    int pid=root(p);
    int qid=root(q);
    if(pid==qid) return;
    for(int i=0;i<num;i++){
        if(id[i]==pid)
            id[i]=qid;
    }
    count--;
}

bool QF::isConnect(int p, int q){
    if(root(p)==root(q)) std::cout<<p<<" and "<<q<<" connnected! QF"<<std::endl;
    else    std::cout<<p<<" and "<<q<<" not connnected! QF"<<std::endl;
    return (root(p)==root(q));
}

void QF::test(){
    for (int i=0; i<num; i++)
        std::cout<<"QF id"<<i<<"="<<id[i]<<std::endl;
    std::cout<<"\n"<<std::endl;
}

int QF::root(int i){
    return id[i];
}

int QF::Count(){
    std::cout<<"QF count = "<<count<<std::endl;
    return count;
}

QF::~QF(){
    
}


class QU{
private:
    int num;
    int count;
    int id[NUM];
public:
    QU(int N);
    ~QU();
    int Count();
    bool isConnect(int p,int q);
    void test();
    int root(int i);
    void Union(int p,int q);
};

QU::QU(int N){
    for(int i=0;i<N;i++)    id[i]=i;
    num=N;
    count=N;
}

QU::~QU(){
    
}

void QU::Union(int p, int q){
    int pid=root(p);
    int qid=root(q);
    if(pid==qid) return;
    id[pid]=qid;
    count--;
}

int QU::Count(){
    std::cout<<"QU count = "<<count<<std::endl;
    return count;
}

bool QU::isConnect(int p, int q){
    if(root(p)==root(q)) std::cout<<p<<" and "<<q<<" connnected! QU"<<std::endl;
    else    std::cout<<p<<" and "<<q<<" not connnected! QU"<<std::endl;
    return (root(p)==root(q));
}

int QU::root(int i){
    while(i!=id[i]){i=id[i];}
    return i;
}

void QU::test(){
    for (int i=0; i<num; i++)
        std::cout<<"QU id"<<i<<"="<<id[i]<<std::endl;
    std::cout<<"\n"<<std::endl;
}


class WQU{
private:
    int num;
    int id[NUM];
    int wight[NUM];
    int count;
public:
    WQU(int N);
    void Union(int p,int q);
    int root(int i);
    bool isConnect(int p,int q);
    void test();
    int Count();
};

WQU::WQU(int N){
    for(int i=0;i<N;i++){id[i]=i;wight[i]=1;}
    num=N;
    count=N;
}

int WQU::root(int i){
    while(i!=id[i]){i=id[i];}
    return i;
}

void WQU::Union(int p, int q){
    int pid=root(p);
    int qid=root(q);
    if(pid==qid)return;
    if(wight[pid]<wight[qid]){id[pid]=qid;wight[qid]+=wight[pid];}
    else{id[qid]=pid;wight[pid]+=wight[qid];}
    count--;
}

bool WQU::isConnect(int p, int q){
    if(root(p)==root(q)) std::cout<<p<<" and "<<q<<" connnected! WQU"<<std::endl;
    else    std::cout<<p<<" and "<<q<<" not connnected! WQU"<<std::endl;
    return (root(p)==root(q));
}

void WQU::test(){
    for (int i=0; i<num; i++){
        std::cout<<"WQU id"<<i<<"="<<id[i]<<", wight ="<<wight[i]<<std::endl;
        
    }
    std::cout<<"\n"<<std::endl;
}

int WQU::Count(){
    std::cout<<"WQU count = "<<count<<std::endl;
    return count;
}

class PWQU{
private:
    int num;
    int id[NUM];
    int wight[NUM];
    int count;
public:
    PWQU(int N);
    void Union(int p,int q);
    int root(int i);
    bool isConnect(int p,int q);
    void test();
    int Count();
};

PWQU::PWQU(int N){
    for(int i=0;i<N;i++){id[i]=i;wight[i]=1;}
    num=N;
    count=N;
}

int PWQU::root(int i){
    while(i!=id[i]){id[i]=id[id[i]];i=id[i];}
    return i;
}

void PWQU::Union(int p, int q){
    int pid=root(p);
    int qid=root(q);
    if(pid==qid)return;
    if(wight[pid]<wight[qid]){id[pid]=qid;wight[qid]+=wight[pid];}
    else{id[qid]=pid;wight[pid]+=wight[qid];}
    count--;
}

bool PWQU::isConnect(int p, int q){
    if(root(p)==root(q)) std::cout<<p<<" and "<<q<<" connnected! PWQU"<<std::endl;
    else    std::cout<<p<<" and "<<q<<" not connnected! PWQU"<<std::endl;
    return (root(p)==root(q));
}

void PWQU::test(){
    for (int i=0; i<num; i++){
        std::cout<<"PWQU id"<<i<<"="<<id[i]<<", wight ="<<wight[i]<<std::endl;
        
    }
    std::cout<<"\n"<<std::endl;
}

int PWQU::Count(){
    std::cout<<"PWQU count = "<<count<<std::endl;
    return count;
}





#endif /* Union_Find_h */
