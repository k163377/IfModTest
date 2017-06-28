#include <iostream>
#include <chrono>

using namespace std;

constexpr int MAX = 1000000000;

inline int If2(){
    int i = 0;
    int j = 0;

    chrono::system_clock::time_point start, end;
    start = chrono::system_clock::now();
    while(i < MAX) {
        if(!(100 - (j+=1))) j = 0;
        i++;
    }
    end = chrono::system_clock::now();

    cout << "if2 time\t:" << chrono::duration_cast<chrono::milliseconds>(end-start).count() <<endl;

    return i + j;
}

inline int If(){
    int i = 0;
    int j = 0;

    chrono::system_clock::time_point start, end;
    start = chrono::system_clock::now();
    while(i < MAX) {
        if((j+=1) == 100) j = 0;
        i++;
    }
    end = chrono::system_clock::now();

    cout << "if time\t\t:" << chrono::duration_cast<chrono::milliseconds>(end-start).count() <<endl;

    return i + j;
}

inline int Mod(){
    int i = 0;
    int j = 0;

    chrono::system_clock::time_point start, end;
    start = chrono::system_clock::now();
    while(i < MAX){
        j = (j+1)%100;
        i++;
    }
    end = chrono::system_clock::now();

    cout << "mod time\t:" << chrono::duration_cast<chrono::milliseconds>(end-start).count() <<endl;

    return i + j;
}

int main() {
    int Ifres, Ifres2, Modres;

    Ifres = If();
    Ifres2 = If2();
    Modres = Mod();

    cout << "if result\t:" << Ifres << '\n' << "if2 result\t:" << Ifres2 << '\n' << "mod result\t:" << Modres << endl;
    return 0;
}