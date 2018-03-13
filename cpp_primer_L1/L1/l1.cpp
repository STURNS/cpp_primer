#include "stdio.h"

#include <iostream>
#include <string>
#include <vector>

#include "l1.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void L1()
{
    //p76
    string s1;
    string s2 = s1;
    string s3 = "this is string";
    string s4("hiya");
    string s5(5,'A');
    string s6 = string(2,'B');
/*
    //p77
    cin >> s1 >> s2;

    cout<< s1 + "\n"
        << s2 + "\n"
        << s3 + "\n"
        << s4 + "\n"
        << s5 + "\n"
        << s6 + "\n"
        << endl;

    //p78
    int icount=0;
    while(icount < 3)
    {
        cin >> s1;
        icount ++;
    }
    cout << s1  + "\n" << endl;


    //getline()
    icount = 0;
    string line;
    while(icount < 3)
    {
        getline(cin, line);
        icount ++;
    }
    cout << line + "\n" << endl;
    int length = line.size();
    cout << "s1 length = " << length << endl;
*/
    //p83
    /*
    for(char c : s3)
    {
        cout << c << endl;
    }
    */

    /*
    //p86
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v1;
    vector<int> v4(5,5);
    vector<int> v5(3);
    //vector<int> v6{1,2,3}; //c++11
   // vector<int> v7={1,2,3};

    for(int index=0;index<3;index++)
    {
        v1.push_back(index);
        cout << v1[index] <<endl;
    }

    for(vector<int>::iterator it=v4.begin(); it != v4.end();++it)
        cout << *it <<endl;
*/
    /*
    //p90
    string word;
    vector<string> text;
    while(cin >> word){

        text.push_back(word);
        cout << word << endl;
    }
    */

    //p100
    vector<int> int_num;
    for(int i=0;i<10;i++)
        int_num.push_back(i);
    vector<int>::iterator mid = int_num.begin() + int_num.size()/2;
    cout<< *mid <<endl;




}
