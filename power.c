double power(int N, int p) {
	if ( p == 0 ) 
		return 1.0;
	if ( p < 0 ) 
		return 1.0/power(N, -1*p);
	int i = 1;
	long long M = N;
	while ( 2*i < p )
	{
		i = i * 2;
		M = M * M;
	}
	if ( i == p )
		return (double)M;
	if ( 2*i -p > p-i )
		return M * power(N, p-i);
	else
		return (M*M) / power(N, 2*i-p);
}

