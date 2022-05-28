#include <iostream>
#include <string>
using namespace std;

int main() {
    string binarna="101";
    
    int suma=0;
    int dlugosc=binarna.size();
    
    for (int i=dlugosc-1; i>=0; i--)
    {
        suma= suma + ((binarna[i]-(int)'0')*pow(2, (dlugosc-x-1)));
        
        
    }
    
    cout << suma << endl;
    
    
    return 0;
}
