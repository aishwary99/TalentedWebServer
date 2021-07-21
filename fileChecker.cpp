#include<iostream>
#include<sys/stat.h>
using namespace std;
int main()
{
        struct stat s;
        //stat returns 0 if the path exists
        //stat return -1 if the path doesn't exists
        int x=stat("/broServer",&s); 
        cout<<x<<endl;
        //if returns +ve then its a folder else its a file
        cout<<s.st_mode & s_IFDIR<<endl;        
        return 0;
}