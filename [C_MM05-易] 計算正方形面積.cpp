#include<iostream> 
#include<iomanip> 
using namespace std;
    
    
    
int main(void){        
    int b = 0;  
    double a = 0;    
    while(cin >> a){    
        if (b != 0){  
            cout << "\n";  
        }  
        cout << fixed << setprecision(1) << a * a+0.05 << endl;  
        b++;  
    }    
    return 0;        
}
