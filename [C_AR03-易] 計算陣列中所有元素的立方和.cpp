#include<iostream>
using namespace std;  

  
int main(void){  
  
    int a[105];  
    char b;  
    int alen = 0;  
    while(cin >> a[alen]){  
        alen++;
        if (cin.get() == '\n'){
            break;
        } 
    }  
    int ans = 0;  
    for (int i = 0; i < 6; i++){  
        ans += a[i] * a[i] * a[i];  
    }  
    cout << ans << '\n';  
    return 0;  
}
