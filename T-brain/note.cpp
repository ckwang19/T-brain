//
//  note.cpp
//  T-brain
//
//  Created by TsaiWiz on 2018/5/2.
//  Copyright © 2018年 TsaiWiz. All rights reserved.
//

#include "note.hpp"


//https://cg2010studio.com/2011/05/01/string-and-char-transform/
//string 字串類別 <-> char[] 字元陣列
//只要呼叫string class的成員函式c_str()，即可將string轉為char[]
//char[]轉string有兩種方法，第一種是初始string變數時，即把char[]當作參數來初始化，第二種則是使用string class的成員函式assign(char[])來將char[]指定為string變數。
/*
#include<iostream>
using namespace std;
int main(){
    string test_string="test_string";
    char test_char[]="test_char", result_char[20];
    
    string result_string1(test_char);
    string result_string2;
    result_string2.assign(test_char);
    strcpy(result_char, test_string.c_str());
    
    cout<<"test_string: "<<test_string<<endl;
    cout<<"test_char: "<<test_char<<endl;
    cout<<"result_string1: "<<result_string1<<endl;
    cout<<"result_string2: "<<result_string2<<endl;
    cout<<"result_char: "<<result_char<<endl;
    
    system("pause");
    return EXIT_SUCCESS;
}
*/





