int countDigits(int n){
	//int digi;
	int count = 0;
	while(n > 0)
	{
		//digi = N % 10;
		count++;
		n = n / 10;
	}
	return count;
}
/*
#include<bits/stdc++.h>>
int countDigits(int n){
	//int digi;
	int count = (log10(n)+1);
	
	return count;
}*/