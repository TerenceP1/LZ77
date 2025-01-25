// Implements LZ77

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
  string file;
  cout << "Enter name of file to compress:";
  cin >> file;
  HANDLE hFile = CreateFileA(file.c_str(),
    GENERIC_READ,
    FILE_SHARE_READ,
    NULL,
    OPEN_ALWAYS,
    NULL, NULL);
}
