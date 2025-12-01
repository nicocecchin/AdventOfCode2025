#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("day01/input.txt");
    ofstream outputFile("day01/output.txt");
    int result = 0;
    string rotation;
    int zeroCounter = 0;
    int currentPos = 50;
    char direction;
    int delta;

    while (getline(inputFile, rotation)) {
        direction = rotation[0];
        delta = stoi(rotation.erase(0,1));
        
        if(direction == 'R'){
            currentPos = (currentPos+delta)%100;
        }else{
            currentPos = (currentPos-delta)%100;
        }

        if(currentPos==0){
            zeroCounter++;
        }
    }

    result = zeroCounter;
    outputFile << result << endl;
    outputFile.close();
    return 0;
}