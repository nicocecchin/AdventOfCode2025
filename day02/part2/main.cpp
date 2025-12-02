#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream inputFile("day02/part1/input.txt");
    ofstream outputFile("day02/part1/output.txt");
    long result = 0;
    string range;

    while(getline(inputFile, range, ',')){
        cout << range <<endl;
        long first, last = 0;
        string parsed;

        stringstream ss(range);
        getline(ss, parsed, '-');
        first = stol(parsed);
        getline(ss, parsed);
        last = stol(parsed);
        cout << first <<" - " <<last <<endl;

        for(long l=first; l<=last; l++){
            // cout << i <<endl;
            string s = to_string(l);
            // TODO

            if (false){
                result += l;
            }
        }

    }
    outputFile << result;

}