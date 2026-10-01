int main(){
	long n, a=0, d=0, c;
	cin >> n;
	long b[n];
	for (int j = 0; j < n-1; j++){
		cin >> b[j];
		a = a + b[j];
	
	}
	c = n * (n+1) / 2;
	cout << c - a;
	return 0;
}
