bool isPerfectSquare(int num){
if(num == 1 || num == 0){
        return true;
    }
    long i, s, m;
    i = 0;
    s = num - 1;
    while(i <= s){
        m = (s + i) / 2;
        if(m*m == num){
            return true;
        }else if(m*m < num){
            i = m + 1;
        }else if(m*m > num){
            s = m - 1;
        }
    }
    return false;
}
