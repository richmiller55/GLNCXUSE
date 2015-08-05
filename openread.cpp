// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "split.h"

using namespace std;

int main () {
    string line;
    string _dir  ("/home/co-inet/data/wmgln/");
    string _file  ("08925485US00.as2_califOptical.file.201508022147466A92D40C.in");
    ifstream myfile ( (_dir + _file).c_str());

    if (myfile.is_open())
        {
            while ( getline (myfile,line) )
                {
                    std::vector<std::string> x = split(line, '~');
                    int theSize = x.size();
                    for (int i = 0; theSize > i; ++i) {
                        cout << x[i] << '\n';
                    }

                    // cout << x << '\n';
                }
            myfile.close();
        }

    else cout << "Unable to open file";

    return 0;
}
