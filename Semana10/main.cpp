#include <iostream>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"
using namespace std;
int main() {
    for(auto i: ArithmeticProgression(1,20,1))
        cout << i << " ";

    cout << endl;
    for(auto j: GeometricProgression(1,20,2))
        cout << j << " ";


}