class Solution {
public:
    
    int cnt=0;
     void sieve(int n)
{
	if(n <= 1)
		return;

	bool isPrime[n+1];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i<n; i++)
	{
		if(isPrime[i])
			cnt++;
	}
         
}
    
    
    
    
    int countPrimes(int n) {
        sieve(n);
        return cnt;
    }
};