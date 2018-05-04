//
//  T-brain.cpp
//  T-brain
//
//  Created by TsaiWiz on 2018/5/2.
//  Copyright © 2018年 TsaiWiz. All rights reserved.
//

#include "T-brain.hpp"


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include "create_date_number_link.hpp"
#include "StockClass.hpp"



int main(int argc, const char * argv[]) {
    char write_path[] ="/Users/Wiz/Documents/project/T-brain-2018/T-brain/T-brain/link.txt";
    //write_data_number_link(write_path);

    fstream file;
    file.open("/Users/Wiz/Documents/project/T-brain-2018/T-brain/T-brain/TBrain_Round2_DataSet_20180331/tetfp.csv");
    string line;
    StockList StockList;
    int date_number = 0;
    map<string, vector<Stock>> mDateStock;
    while (getline( file, line,'\n'))  //讀檔讀到跳行字元
    {
        //如果發現date改變了，map的key就換下一個
        StockList.AddStock(line);
    }
    file.close();
    
    
    return 0;
}

