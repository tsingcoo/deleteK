//
//  main.cpp
//  deleteK
//
//  Created by 王青龙 on 6/7/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void deleteK(string& str, int k){
    int len;
    while (k) {
        len=(int)str.length();
        for (int i=0; i<len-1; ++i) {
            if (str[i]<str[i+1]) {
                str.erase(i,1);
                --k;
                break;
            }
        }
    }
}


int main(int argc, const char * argv[]) {

    string s="8574739";

    deleteK(s, 2);
    cout<<s<<endl;

    return 0;
}
