//
//  Union_Find.h
//  Coursera_Algorithms
//
//  Created by 牛志宏 on 1018/3/17.
//  Copyright © 1018年 牛志宏. All rights reserved.
//

#ifndef Union_Find_h
#define Union_Find_h


#include "iostream"

#define NUM 100000


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
    return (root(p)==root(q));
}

int QF::root(int i){
    return id[i];
}

int QF::Count(){
    return count;
}

QF::~QF(){
    
}


class QU{
private:
    int count;
    int id[NUM];
public:
    QU(int N);
    ~QU();
    int Count();
    bool isConnect(int p,int q);
    int root(int i);
    void Union(int p,int q);
};

QU::QU(int N){
    for(int i=0;i<N;i++)    id[i]=i;
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
    return count;
}

bool QU::isConnect(int p, int q){
    return (root(p)==root(q));
}

int QU::root(int i){
    while(i!=id[i]){i=id[i];}
    return i;
}

class WQU{
private:
    int id[NUM];
    int wight[NUM];
    int count;
public:
    WQU(int N);
    void Union(int p,int q);
    int root(int i);
    bool isConnect(int p,int q);
    int Count();
};

WQU::WQU(int N){
    for(int i=0;i<N;i++){id[i]=i;wight[i]=1;}
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
    return (root(p)==root(q));
}

int WQU::Count(){
    return count;
}

class PWQU{
private:
    int id[NUM]={0};
    int wight[NUM]={0};
    int count;
    int n;
public:
    PWQU(int N);
    void Union(int p,int q);
    int root(int i);
    bool isConnect(int p,int q);
    int Count();
    void test();
};

PWQU::PWQU(int N){
    for(int i=0;i<N;i++){id[i]=i;wight[i]=1;}
    count=N;
    n=N;
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
    return (root(p)==root(q));
}

int PWQU::Count(){
    return count;
}

void PWQU::test(){
    std::cout<<"n="<<n<<std::endl;
    for(int i=0;i<10+1;i++)
        std::cout<<"第一行节点 id"<<i<<"="<<id[i]<<std::endl;
    for(int i=10*(10-1)+1;i<(10*10)+1;i++)
        std::cout<<"最后一行节点 id"<<i<<"="<<id[i]<<std::endl;
    for(int i=0;i<(10*10)+1;i++)
        std::cout<<"id"<<i<<"="<<id[i]<<std::endl;

}

#endif /* Union_Find_h */
