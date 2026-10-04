#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10];
	cout <<  "Please input 8 numbers :";
	int t;
	for(int i=0;i<8;i++){
		cin >> a[i];
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<7-i;j++){
			if(a[j+1]<a[j]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	cout << "After sorting:";
	for(int i=0;i<7;i++){
		cout << a[i] << " ";
	}
}
