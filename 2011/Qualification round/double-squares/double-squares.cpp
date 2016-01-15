#include <iostream>
#include <cmath>

using namespace std;

int counter(){
	int N, count=0;
	cin>>N;
	if(N==0||N==1)return 1;
	int max_value = ceil(sqrt(N/2));

	for(int i=0;i<max_value;i++){
		double val = sqrt(N-i*i);
		if(val == ceil(val)){
			count++;
		}
	}
	return count;
}

int main(){
	int T;
	cin>>T;
	int tmp=T;
	while(tmp--){
		cout<<"Case #"<<T-tmp<<": "<<counter()<<endl;
	}
	return 0;
}
