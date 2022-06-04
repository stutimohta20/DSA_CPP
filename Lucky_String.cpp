//Problem Statement
You are given a string 'S' of length 'N' consisting of lowercase latin letters. If there is a letter occurring consecutively three times (at least three times), the string becomes unlucky for you.
Your task is to erase some characters from the string such that it becomes lucky for you. A string which is not unlucky, is considered as lucky.
Output the minimum number of removals (of characters) required to make the given string lucky.

  
  //Main Code
  
  int makeLucky(string s, int n)
{
    int cnt = 0;
    for(int i= 0;i<n ; i++){
        if(s[i-1] == s[i] && s[i] == s[i+1]) cnt++;
    }
    return cnt;
}
