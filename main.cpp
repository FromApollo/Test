#include <iostream>
#include <string>
using namespace std;

class Human{
public:
    int age;
    string name;
};

int main(){
    Human firstHuman;
    firstHuman.name = "Palina";
    firstHuman.age = 18;
    firstHuman.print();



    return 0;
}