#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("data.txt",ios::out);
    file<<"hello...\nMy name is Utsav.\nI am 21 yrs old.\nI am a graphic era student.";
    file.close();
    file.open("data.txt",ios::in);
    int count=0;
    string word;
    while(file>>word)
    {
        count++;
    }

    cout<<"Total words: "<<count;

    file.close();

    return 0;
}
