//
//  main.cpp
//  Project Testing
//
//  Created by Ethan Hunt on 16/01/2023.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    ifstream input;
    input.open("projectFile.txt");
    int x, y, z;
    input >> x >> y >> z;
    cout << x << " " << y << " " << z << endl;
    return 0;
}
