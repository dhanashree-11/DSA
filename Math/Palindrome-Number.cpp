bool palindrome(int n)
{
    
  int temp = n;
  int r = 0;

  int digi;

 if(n ==1)
 {
     return true;
 }   
  while(temp > 0)
  {
      digi = temp % 10;
      r = (r * 10) + digi;
      temp = temp /10;

  }  

  if(r == n)
  {
      return true;
  }
  return false;
}