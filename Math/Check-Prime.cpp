#include<iostream>
using namespace std;

bool isPrime(int n)
{
	if(n == 2)
	{
		return true;
	}
	int count = 0;
	for(int i = 1;i*i<=n;i++)
	{
		if(n % i == 0)
		{
			count++;
		}
		
	}
	if(count < 2)
	{
		return true;
	}
	return false;
}
int main() {
	
	int n;
	cin>>n;

	if(isPrime(n))
	{
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
