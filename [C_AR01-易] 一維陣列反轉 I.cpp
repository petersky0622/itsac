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
  
    cout << a[alen - 1];  
    for (int i = alen - 2; i >= 0; i--){  
        cout << ' ' << a[i] ;  
    }  
  
    cout << '\n';  
    return 0;  
}
