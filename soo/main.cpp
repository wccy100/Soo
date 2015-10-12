//
//  main.cpp
//  Lmachine
//
//  Created by leviathan on 15/9/21.
//  Copyright (c) 2015年 leviathan. All rights reserved.
//

#include <iostream>
#include "assembler.h"
#include "lmachine.h"
using namespace std;

int main() {    
    Lmachine lvm;
    lvm.init();         //init lmachine
    lvm.readline();     //get code
    Assembler assembler;
    assembler.assemblerrun();
    lvm.lvmrun(assembler);
    cout<<"lvm is over ..."<<endl;
    return 0;
}
