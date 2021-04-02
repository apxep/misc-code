// acgt.cpp : quick and clumsy program to generate data that sort of looks like DNA.
// maybe loop with Powershell:  Set-Content  -Value (./acgt.exe) -Path Z:\SEQ\FILE.OUT
// Visual Studio C++

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

std::string makestring(std::string group[], int modulo, int count) {
    int i;
    std::string mystring;
    mystring.clear();
    for (i = 0; i < count; i++) {
        int num = (rand() % modulo);
        mystring.append(group[num]);
    }
    return mystring;
}

int main()
{
    int modulo = 4, count = 2097152;
    std::string d_nucs[4] = { "AT","TA","CG","GC" };
    srand(time(0));
    std::string outstring = makestring(d_nucs, modulo, count);
    std::cout << outstring;

}
