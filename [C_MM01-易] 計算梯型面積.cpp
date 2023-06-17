#include<iostream> 
#include<iomanip> 
using namespace std; 
  
  
  
int main(void){      
      
    float a, b, c;  
    cin >> a >> b >> c;  
    float ans = 0;  
    ans = (a + b) / 2 * c;  
    cout << "Trapezoid area:" << fixed << setprecision(1) << ans << '\n';  
    return 0;      
}
