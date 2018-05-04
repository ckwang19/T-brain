//
//  create_date_number_link.cpp
//  T-brain
//
//  Created by TsaiWiz on 2018/5/1.
//  Copyright © 2018年 TsaiWiz. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "create_date_number_link.hpp"

using namespace std;


fstream openfile(char filename[])
{
    fstream fp;
    fp.open(filename, ios::out);//開啟檔案
    if(!fp){//如果開啟檔案失敗，fp為0；成功，fp為非0
        cout<<"Fail to open file: "<<filename<<endl;
    }
    return fp;
}

void write_data_number_link(char *filename)
{
    fstream fp_w;
    fp_w = openfile(filename);
    fstream file;
    file.open("/Users/Wiz/Documents/project/T-brain-2018/T-brain/T-brain/TBrain_Round2_DataSet_20180331/tetfp.csv");
    string line;
    int date_number = 0;
    while (getline( file, line,'\n'))  //讀檔讀到跳行字元
    {
        int item_number = 1;
        istringstream templine(line); // string 轉換成 stream
        string data;
        while (getline( templine, data,',')) //讀檔讀到逗號
        {
            if(item_number == 2){
                fp_w << date_number << " " << data <<endl;
            }
            item_number++;
        }
        date_number ++;
    }
    file.close();
}


