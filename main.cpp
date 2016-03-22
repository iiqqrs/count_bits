#include <iostream>
#include <cassert>
using namespace std;

int count_bits(unsigned int x){
    int i;
    int counter=0;
    for(i=0; i < 32; i++){
        if((x >> i) & 1 == 1){
            counter++;
        }
    }
    return counter;
}

int main(){
    
    assert(count_bits(0b110011) == 4);
    assert(count_bits(0b110010101011110011) == 11);
    cout << "All tests pass" <<endl;
}