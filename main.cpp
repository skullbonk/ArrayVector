//
//  main.cpp
//  ArrayVector
//
//  Created by reagan on 6/3/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> vInt = {1, 6, 9, 8, 7, 5, 3, 2, 0, 4};
    vector<string> vString = {"ding", "dong", "bing", "bong", "king", "kong", "ding again", "dong again", "bingo", "bum"};
    string words[vString.size()];
    
    cout << "----- NUMBERS -----" << "\n";
    for(int index = 0; index < vInt.size(); index ++)
    {
        cout << vInt.at(index) << "\n";
    }
    
    cout << "----- WORDS -----" << "\n";
    for(int index = 0; index < vString.size(); index ++)
    {
        words[index] = vString.at(index);
        cout << words[index] << "\n";
    }
    
    return 0;
}
