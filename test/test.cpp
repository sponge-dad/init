# include <iostream>
# include <algorithm>
using namespace std;

int a[1000];

void quick_sort(int a[], int l, int r){
	if(l >= r) return;
	int x = a[l+r>>1], i = l - 1, j = r + 1;

	while(i < j){
		do i ++; while(a[i] < x);
		do j --; while(a[j] > x);
		if(i < j){
			swap(a[i], a[j]);
		}
	}
	quick_sort(a, l, j);
	quick_sort(a, j + 1, r);
}


int main(void){
	int n;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	quick_sort(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	return 0;
}
