
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

class _Deb {
    public:
        void Log(string message) {
            std::cout << message + "\n";
        }
};