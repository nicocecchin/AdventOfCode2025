#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("day01/part2/input.txt");
    ofstream outputFile("day01/part2/output.txt");
    int result = 0;
    string rotation;
    int zeroCounter = 0;
    int currentPos = 50;
    char direction;
    int delta;

    while (getline(inputFile, rotation)) {
        direction = rotation[0];
        delta = stoi(rotation.erase(0,1));
        
        for(int i=0;i<delta;i++){
            if(direction == 'R'){
                currentPos = (currentPos + 1)%100; 
            }else{
                currentPos = (currentPos - 1)%100; 
            }

            if(currentPos==0){
                zeroCounter++;
            }
        } 
    }

    result = zeroCounter;
    outputFile << result << endl;
    outputFile.close();
    return 0;
}