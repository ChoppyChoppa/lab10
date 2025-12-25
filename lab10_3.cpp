#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int N = 0;
    double sum = 0;
    double sum_sqrt = 0;
    string textline;
    ifstream source("score.txt");


    while (getline(source,textline)){
        sum += atof(textline.c_str());
        sum_sqrt += pow(atof(textline.c_str()),2);
        N++;
    }
    
    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    double Mean = sum/N;
    cout << "Mean = " << Mean << "\n";
    double Deviation = sqrt((sum_sqrt/N) - pow(Mean,2));
    cout << "Standard deviation = " << Deviation;
    
    return 0;
}
