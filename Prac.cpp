#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeFile(const string& filename){
    fstream myFile(filename, ios::in |ios::out);

    if(myFile.fail())
    {
        cerr<<"Error creating file"<<endl;
    }

    myFile<<"first"<<endl;
    myFile<<"second"<<endl;

    myFile.seekg(0);
    string line;
    while (getline(myFile,line)){
        cout<<line<<endl;
    }

    myFile.close();
}

int main()
{
    ofstream newfile("Test.txt");

    if (newfile.fail()){
        cerr<<"Error creating file!!"<<endl;
        return 1;
    }
    writeFile("Test.txt");
    return 0;
}