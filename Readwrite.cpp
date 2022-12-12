//create new file; write to it and then read from it
//fstream; ofstream; ifstream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//call by reference
void writeFile(const string& fileName){
    fstream myFile(fileName, ios::in | ios::out);
    if(myFile.fail()){
        cerr << "Error in opening file!!"<<endl;
        
    }
    
    //go to the beginning of the file
    myFile.seekg(0);
    myFile<<"Hello"<<endl;
    myFile<<"World"<<endl;


    //read from the file
    myFile.seekg(0);
    string line;
    while (getline(myFile,line)){
        cout<<line<<endl;
    }

    myFile.close();
}
int main(){
    ofstream outputFile("New.txt");

    if(outputFile.fail()){
        cerr<<"Error creating file!"<<endl;
        return 1;
    }
writeFile("New.txt");
return 0;
}

