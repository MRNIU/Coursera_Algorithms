//
//  main.cpp
//  week2
//
//  Created by 牛志宏 on 2018/4/18.
//  Copyright © 2018年 MRNIU. All rights reserved.
//

#include "Header.h"
//#include "queues.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    Stacks stack;
    Queues queue;
    Deques deque;

    deque.addTail(2333);
    deque.addTail(1234);
    deque.addHead(987654);
    deque.addHead(7646);
    cout<<"deque's size is: "<<deque.size()<<endl;


    while(deque.size()>0){
        cout<<"removeHead: "<<deque.removeHead()<<endl;
        cout<<"deque's size is: "<<deque.size()<<endl;
    }
    

    
    
    std::cout << "Hello, World!\n";
    return 0;
}
