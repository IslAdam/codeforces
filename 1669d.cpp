#include<iostream>

int main() {
    int t = 0;
    std::cin >> t; 
    while(t--){
        int n, allW = 0;
        char c = ' ';
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int f = 0;
        for (int i = 0; i < n; i += 1) {
            if (n < 2) {
                std::cout << "No" << std::endl;
                f = 1;
                break;
            }
            if ((n == 2 && (s[0] != 'W' || s[1]!='W')) && (s[0] == 'W' || s[1] == 'W')) {
                std::cout << "No" << std::endl;
                f = 1;
                break;

            }
            for (int i = 0; i < n; i += 1) {
                if (s[i] != 'W') {
                    allW = 1;
                }
            }
            if (allW != 1) {
                std::cout << "Yes" << std::endl;
                f = 1;
                break;
            }
            if (s[i] == 'W') {
                if (f == 1) {
                    break;
                }
                for (int j = i+1; j < n; j += 1) {
                    c = s[j];
                    if (s[j + 1] != c && s[j + 1] != 'W') {
                        break;
                    }
                    else if (s[j + 1] == 'W') {
                        std::cout << "No" << std::endl;
                        f = 1;
                        break;
                    }
                }
            }
        
        }
        if (f == 0) {
            std::cout << "Yes" << std::endl;;
        }
    }
    
    
}