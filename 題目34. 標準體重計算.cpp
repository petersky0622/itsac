#include <iostream>  
#include <iomanip>  
  
int max(int a) {  
    // Add your logic for finding the maximum value  
}  
  
int main() {  
    int height = 0, test = 0;  
    while (std::cin >> height >> test) {  
        float weight = 0;  
        if (test == 1) {  
            weight = (height - 80) * 0.7;  
        } else {  
            weight = (height - 70) * 0.6;  
        }  
  
        std::cout << std::fixed << std::setprecision(1) << weight << std::endl;  
    }  
  
    return 0;  
}
