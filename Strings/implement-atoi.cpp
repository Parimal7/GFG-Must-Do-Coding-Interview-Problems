int charToInt(char c) {
    return int(c) - 48;
}

int atoi(string s)
{
    int l = s.length();
    int sum = 0;
    for(int i = l - 1; i >= 0; --i) {
        if(charToInt(s[i]) >= 0 && charToInt(s[i]) <= 9) {
            sum += charToInt(s[i]) * int(pow(10, l - i - 1));
        }
        else if(s[i] != '-') return -1;
    }
    if(s[0] == '-') return -sum;
    return sum;
}
