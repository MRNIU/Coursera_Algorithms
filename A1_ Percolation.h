//
//  A1_ Percolation.h
//  Coursera_Algorithms
//
//  Created by 牛志宏 on 2018/3/17.
//  Copyright © 2018年 牛志宏. All rights reserved.
//

#ifndef A1__Percolation_h
#define A1__Percolation_h

#include "Union_Find.h"


class Percolation{
private:
    int num;
    int Per[NUM];
    int wight[NUM];
    PWQU test;
public:
    Percolation(int N); // create n-by-n grid, with all sites blocked
    void open(int row, int col); // open site (row, col) if it is not open already
    bool isFull(int row, int col); // is site (row, col) full?
    int numberOfOpenSites();    // number of open sites
    bool percolates();  // does the system percolate?
};

Percolation::Percolation(int N){
    for(int i=0;i<N;i++){Per[i]=0;wight[i]=1;}
    num=N;
}

void Percolation::open(int row, int col){

    
}






#endif /* A1__Percolation_h */
