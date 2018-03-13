//
//  Cordinate.hpp
//  dm_10
//
//  Created by yuchen_Mac on 2018/2/9.
//  Copyright © 2018年 yuchen_Mac. All rights reserved.
//

#ifndef Cordinate_hpp
#define Cordinate_hpp

#include <stdio.h>
class Cordinate{
public:
    Cordinate(int x=0,int y=0);
    void printCordinate();
private:
    int m_x;
    int m_y;
};
#endif /* Cordinate_hpp */
