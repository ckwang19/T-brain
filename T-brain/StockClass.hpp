//
//  StockClass.hpp
//  T-brain
//
//  Created by TsaiWiz on 2018/5/2.
//  Copyright © 2018年 TsaiWiz. All rights reserved.
//

#ifndef StockClass_hpp
#define StockClass_hpp

#include <stdio.h>
#include <string>
#include <vector>

#endif /* StockClass_hpp */

using namespace std;

class Stock{
private:
    string sStockNumber;
    string sTradeDate;
    int nNumber;
    double nMaxValue;
    double nMinValue;
    double nBeginValue;
    double nEndValue;
    int nVolume;
public:
    void SetStockNumber(string value);
    void SetTradeDate(string value);
    void SetNumber(int value);
    void SetMaxValue(double value);
    void SetMinValue(double value);
    void SetBeginValue(double value);
    void SetEndValue(double value);
    void SetVolume(int value);
};

class StockList{
private:
    vector<Stock> vStockList;
public:
    void AddStock(string line);
};
