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

        for(long i=first; i<=last; i++){
            // cout << i <<endl;
            string s = to_string(i);
            string first_half = s.substr(0, s.length()/2);
            string second_half = s.substr(s.length()/2);

            // if ((i-first)%50000 == 0) cout << i <<endl;

            if (first_half == second_half){
                result += i;
            }
        }

    }
    outputFile << result;

}