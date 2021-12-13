#include<bits/stdc++.h>

using namespace std;
#define max 1000000

int main()
{
    char str[] = "suraj,bhushan,patil,pappa,mummy";

    char *ptr;
    ptr = strtok(str,",");

    while(ptr != NULL)
    {
        cout<<ptr<<" ";  
        ptr = strtok(NULL,",");
    }
    return 0;
}