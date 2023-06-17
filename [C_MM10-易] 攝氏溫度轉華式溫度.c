#include <iostream>  
#include <iomanip>  
  
int main() {  
    float a;  
    std::cin >> a;  
  
    float b = (a * 9 / 5) + 32;  
    std::cout << std::fixed << std::setprecision(1) << b << std::endl;  
  
    return 0;  
} 
