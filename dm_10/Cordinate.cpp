//
//  Cordinate.cpp
//  dm_10
//
//  Created by yuchen_Mac on 2018/2/9.
//  Copyright © 2018年 yuchen_Mac. All rights reserved.
//

#include "Cordinate.hpp"
#include <iostream>
using namespace std;
Cordinate::Cordinate(int x,int y){
    m_x = x;
    m_y = y;
}
void Cordinate::printCordinate(){
    cout<<"("<<m_x<<","<<m_y<<endl;
}
