string predictPartyVictory(string s) {
    int j = 0;
    string temp;
    while (s.size() != 1)
    {
        j = 1;
        while (s[0] == s[j])
            j++;
        s += s[0];
        // if j-1 is even lesser than one means we dont have any more characters between 1-j
        temp = s.substr(1,j-1);
        temp+=s.substr(j+1);
        s = temp;
    }
    if (s[0] == 'R')
        return "Radiant";

    return "Dire";
}
