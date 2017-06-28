#include <iostream>
#include <chrono>

using namespace std;

constexpr int MAX = 1000000000;

int If(){
    int i = 0;
    int j = 0;

    chrono::system_clock::time_point start, end;

    start = std::chrono::system_clock::now();
    while(i < MAX) {
        if((j+=1) == 100) j = 0;
        i++;
    }
    end = std::chrono::system_clock::now();

    cout << chrono::duration_cast<std::chrono::milliseconds>(end-start).count() <<endl;

    return i + j;
}

int Mod(){
    int i = 0;
    int j = 0;

    chrono::system_clock::time_point start, end;

    start = std::chrono::system_clock::now();
    while(i < MAX){
        j = (j+1)%100;
        i++;
    }
    end = std::chrono::system_clock::now();

    cout << chrono::duration_cast<std::chrono::milliseconds>(end-start).count() <<endl;

    return i + j;
}

int main() {
    cout << "if:\t" << If() << '\n' << "Mod:\t" << Mod() << endl;

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}