// file handling in c++ :

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;                          // creating object of 'ofstream' class to create output-stream
    fout.open("myFile.dat");                // open() function of 'ofstream' class to open an existing file  or creating a new file
    fout<<"Data File Handling :"<<endl;     // 'fout<<' is used to write data into file
    fout<<"This is a new File"<<endl;       
    fout.close();                           // 'close()' is used to close the file

    return 0;
}