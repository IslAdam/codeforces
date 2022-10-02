#include<iostream>
#include<vector>


int main(){
	int n = 0;
	int v = 0;
	int n1 = 0;
	std::cin>>n;
	std::vector<int>a;
	std::vector<int>a1;
	std::vector<int>a2;
	for (int i = 0; i < n; i += 1) {
		std::cin >> v;
		a.push_back(v);
	}
	/*n1 = a.size();
	for (int i=0;i<n1;i+=1){
		std::cout<<a[i]<<" ";
	}*/
	for (int i = 0; i < n; i += 1) {
		a1.push_back(0);
	}

	/*for (int i = 0; i<n; i += 1) {
		std::cout<<a1[i]<<" ";
	}*/
	int b = 0;
	for (int i = n - 1; i>=0; i -= 1) {
		int k = 0;
		for (int j=0;j<n;j+=1){
			//std::cout << a[i] << " " << a1[j] << "\n";
			if (a[i] == a1[j]) {
				k += 1;
			}
		}
		if (k == 0) {
			a1[b] = a[i];
			b += 1;
		}
	}
	//n1 = a1.size();
	for (int i = n-1;i>=0;i-=1){
		if (a1[i] != 0) {
			v = a1[i];
			a2.push_back(v);
		}
	}
	n1 = a2.size();
	std::cout << n1 << "\n";
	for (int i = 0; i < n1; i += 1) {
		std::cout << a2[i] << " ";
	}
}
