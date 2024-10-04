string armstrongNumber(int n) {
        int og = n;
        int count = to_string(n).length();
        int digi;
        int r = 0;
        while(n > 0)
        {
            digi = n % 10;
            r = r + pow(digi,count);
            n = n / 10;
        }
        
        if(r == og )
        {
            return "true";
        }
        return "false";
        
    }