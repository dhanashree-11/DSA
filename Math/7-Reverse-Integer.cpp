int reverse(int x) {
       int digi;
       long reversedigi = 0;
       while(x != 0)
       {
         digi = x % 10;
         reversedigi = (reversedigi * 10) + digi;
         x = x/10;
       }

       if(reversedigi > INT_MAX || reversedigi < INT_MIN)
       {
        return 0;
       }

       return reversedigi ;
       
    }