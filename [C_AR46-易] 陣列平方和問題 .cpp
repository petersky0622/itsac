#include<iostream>  
#include<cstring>
#include<iomanip>
using namespace std;  
  
  
  
int main(void){      
      
    double a[105];      
    char b;      
    int alen = 0;      
    while(cin >> a[alen]){      
        alen++;
        if (cin.get() == '\n'){
            break;
        }      
    }      
    double ans = 0;      
    for (int i = 0; i < 6; i++){      
        ans += a[i] * a[i];      
    }      
    cout << fixed << setprecision(6)<< ans << '\n';      
    return 0;      
}
