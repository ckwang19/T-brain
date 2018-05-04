//
//  main.cpp
//  T-brain
//
//  Created by TsaiWiz on 2018/5/1.
//  Copyright © 2018年 TsaiWiz. All rights reserved.
//

class ListNode{
private:
    int data;
    ListNode *next;
    ListNode *pre;
public:
    ListNode():data(0),next(0),pre(0){};	//簡潔的建構子
    ListNode(int a):data(a),next(0),pre(0){};
    
    friend class LinkedList;   //成爲朋友類就可以用它的私密成員
};

#include <iostream>
#include "create_date_number_link.hpp"
int main(int argc, const char * argv[]) {
    char write_path[] ="/Users/Wiz/Documents/project/T-brain-2018/T-brain/T-brain/link.txt";
    //write_data_number_link(write_path);
    
    return 0;
}
