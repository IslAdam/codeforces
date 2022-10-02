#include<iostream>
#include<cmath>


int main(){
	long long n,k,f,t = 0;
	long long s = -pow(10000,20);
	std:: cin >> n >> k;
	// std::cout << n << ' ' << k;
	for (int i=0;i<n;i+=1){
		std:: cin>>f>>t;
		if (t>k){
			s = std::max(s, (f-(t-k)));
		}
		else{
			s = std::max(s,f);
		}
	}
	std:: cout << s;
}
