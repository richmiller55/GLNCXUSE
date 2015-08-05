// reading a text file
#include <iostream>
#include <fstream>
#include <string>
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
                    cout << line << '\n';
                }
            myfile.close();
        }

    else cout << "Unable to open file";

    return 0;
}
