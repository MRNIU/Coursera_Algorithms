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
    // insert code here...
    cout<<"enter integers for init"<<endl;
    int num_test;
    cin>>num_test;
    cout<<"the number is "<<num_test<<"\n"<<endl;
    
    
    QF test_QF(num_test);
    WQU test_WQU(num_test);
    QU test_QU(num_test);
    PWQU test_PWQU(num_test);
    
    test_QF.Union(2, 3);
    test_QF.Count();
    test_QF.Union(2, 4);
    test_QF.Count();
    test_QF.Union(2, 8);
    test_QF.Count();
    test_QF.Union(1, 8);
    test_QF.Count();
    test_QF.test();
    test_QF.isConnect(1, 8);
    test_QF.isConnect(1, 2);
    test_QF.isConnect(4, 8);
    test_QF.Count();

    test_QU.Union(2, 3);
    test_QU.Union(2, 4);
    test_QU.Union(2, 8);
    test_QU.Union(1, 8);
    test_QU.isConnect(1, 8);
    test_QU.isConnect(1, 2);
    test_QU.isConnect(4, 8);
    test_QU.test();

    
    
    test_WQU.Union(2, 4);
    test_WQU.Union(5, 4);
    test_WQU.Union(1, 3);
    test_WQU.Union(3, 2);
    test_WQU.isConnect(1, 8);
    test_WQU.isConnect(1, 2);
    test_WQU.isConnect(4, 8);
    test_WQU.test();
    
    
    test_PWQU.Union(0, 1);
    test_PWQU.Count();
    test_PWQU.Union(2, 3);
    test_PWQU.Count();
    test_PWQU.Union(4, 5);
    test_PWQU.Count();
    test_PWQU.Union(6, 7);
    test_PWQU.Union(0, 2);
    test_PWQU.Count();
    test_PWQU.Union(4, 6);
    test_PWQU.Count();
    test_PWQU.Union(0, 4);
    test_PWQU.Count();
    test_PWQU.isConnect(1, 8);
    test_PWQU.isConnect(1, 2);
    test_PWQU.isConnect(4, 8);
    test_PWQU.test();
    test_PWQU.Count();
    

    cout << "Hello, World!\n"<<endl;
    return 0;
}
