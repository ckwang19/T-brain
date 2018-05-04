//
//  StockClass.cpp
//  T-brain
//
//  Created by TsaiWiz on 2018/5/2.
//  Copyright © 2018年 TsaiWiz. All rights reserved.
//

#include "StockClass.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

void Stock::SetStockNumber(string value){
    this->sStockNumber = value;
}
void Stock::SetTradeDate(string value){
    this->sTradeDate = value;
}
void Stock::SetNumber(int value){
    this->nNumber = value;
}
void Stock::SetMaxValue(double value){
    this->nMaxValue = value;
}
void Stock::SetMinValue(double value){
    this->nMinValue = value;
}
void Stock::SetBeginValue(double value){
    this->nBeginValue = value;
}
void Stock::SetEndValue(double value){
    this->nEndValue = value;
}
void Stock::SetVolume(int value){
    this->nVolume = value;
}

void deleteAllMark(string &s, const string &mark)
{
    size_t nSize = mark.size();
    while(1)
    {
        size_t pos = s.find(mark);    //  尤其是这里
        if(pos == string::npos)
        {
            return;
        }
        
        s.erase(pos, nSize);
    }
}

void StockList::AddStock(string line){
    string data;
    int item_number = 0;
    Stock stock;
    vector<string> strVec;
    vector<string>::iterator it_i;
    string temp_string;
    split(strVec, line, is_any_of(","));
    for(it_i=strVec.begin(); it_i!=strVec.end(); ++it_i){
        temp_string = *it_i;
        deleteAllMark(temp_string, " ");
        cout << temp_string << endl;
        getchar();
        int nvolume_temp;
        switch(item_number)
        {
            case 0 :
                stock.SetStockNumber(temp_string);
                break;
            case 1 :
                stock.SetTradeDate(temp_string);
                break;
            case 2 :
                stock.SetBeginValue(atof(temp_string.c_str()));
                break;
            case 3:
                stock.SetMaxValue(atof(temp_string.c_str()));
                break;
            case 4 :
                stock.SetMinValue(atof(temp_string.c_str()));
                break;
            case 5 :
                stock.SetEndValue(atof(temp_string.c_str()));
                break;
            case 6 :
                nvolume_temp = atoi(temp_string.c_str()) * 1000;
                break;
            case 7 :
                stock.SetVolume(nvolume_temp + atoi(temp_string.c_str()));
                item_number = 0;
                break;
            default :
                cout << "无效的成绩" << endl;
        }
        item_number++;
    }
    this->vStockList.push_back(stock);
}
