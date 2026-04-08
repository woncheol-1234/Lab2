#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if (cnt == M){
		for (int i : vec) cout << i << " " ;
		cout << "\n";
		return;
	}

	for (int i=1; i<= N; i++){
		vec.push_back(i);
		func(cnt+1);
		vec.pop_back();
	}
}

int main(){
	cin >> N >> M;
	func(0);
	return 0;
}






}

int main() {
   cin >> N >> M;
   func(0);
}
