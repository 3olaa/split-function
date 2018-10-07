// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I
// program Name: split.cpp
// last Modification Date: 1/10/2018
// Author 1 and Id and Group: Ola Sameh - 20170165 - G8
// Teaching Assistant:
// purpose: split a vector of string

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector <string> split(string target,string delimiter);

int main()
{
    vector <string> text = split("do re me fa so la si do"," ");

    for(int i = 0; i <text.size()-1; i++)  //size-1 to insert "and" at the end
       {
          cout <<"\""<< text[i]<<"\"" << ", ";
       }
       cout<<"and"<<" ";
       cout<<"\""<<text.back()<<"\"";  //text.back means the last word

    return 0;
}
vector <string> split(string target,string delimiter){
    vector <string> vec;
    stringstream check(target);  //stringstream used for input and output to a string
    while(getline(check, delimiter,' '))
    {
        vec.push_back(delimiter);
    }

    return vec;
}
