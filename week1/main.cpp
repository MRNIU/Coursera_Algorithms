//
//  main.cpp
//  coursera Algorithm
//
//  Created by 牛志宏 on 2018/3/12.
//  Copyright © 2018年 牛志宏. All rights reserved.
//

#include "Header.h"


using namespace std;

int main(int argc, const char * argv[]) {
    
    int num_test;

    int row,col;
    ifstream file;
    int data[NUM]={0};
    int i=0;

    file.open("/Users/nzh/Documents/Program/C:C++/Coursera_Algorithms/Coursera_Algorithms/input10-no.txt");
    if(file.fail()) return 0;
    while (!file.eof()) {
        file>>data[i];
        i++;
    }
    file.close();
    
    int count_test=i-1;   // 记录 open 的数量,减 1 是 排除 data[0].
    
//    for(int j=1;j<count_test;j++){
//        cout<<data[j]<<" ";
//        if(j%2==0)    cout<<"\n"<<endl;
//    }
    num_test=data[0];

    Percolation test_Per(num_test); // 初始化,生成 num_test*num_test+2 个单元
    
    for(int i=1;i<count_test;i+=2){
        row=data[i];
        col=data[i+1];
        test_Per.open(row,col);
    }
    
    test_Per.qwqw();
    
    
//    for(int j=1;j<count_test*count_test;j++){
//        cout<<data[j]<<" ";
//        if(j%count_test==0)    cout<<"\n"<<endl;
//    }
    
    
    //test_Per.qwqw();
    
    if(test_Per.isPercolates())
            cout<<"Per!!!\n"<<endl;
    // iff site is open and root(p)==0,
    // last row's root==0

    cout << "Hello, World!\n"<<endl;
    return 0;
}
