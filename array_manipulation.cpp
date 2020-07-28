#include "iostream"
using namespace std;

int main(){
	int n,m;
//input for n and m
	cin>>n>>m;
	int arr[n]={0};
	int a,b,k;
	//iter
	for(int i=0;i<m;i++){
//a,b,k
		cin>>a>>b>>k;
//doing the ops for arr[a] to arr[b] +=k
		for (int j=a-1;j<b-1;j++){
			arr[j]+=k;
		}
	}
	for(auto a:arr){
		cout<<a<<" ";
	}
	cout<<endl;
}		
