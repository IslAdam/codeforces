#include <iostream>
#include <cmath>


int main(){
	int m = 0;
	int x = 0;
    for(int i=0;i<5;i+=1){
        for(int j=0;j<5;j+=1){
            std:: cin >> m;
            if (m==1){
                x = abs(i+1-3)+abs(j+1-3);
            }
        }
    }

    std:: cout << x;

}
