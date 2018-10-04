bool isPalindrome(string str, int l, int h) 
{ 
    while (h > l) 
    if (str[l++] != str[h--]) 
        return false; 
    return true; 
} 

int Solution::anytwo(string str) {
    int MAX_CHAR = 256;
    
    int n = str.length();
    vector<int>freq(256,0);
    
    for (int i = 0; i < n; i++) 
    { 
        freq[str[i]]++; 
  
        if (freq[str[i]] > 2) 
            return true; 
    } 
  
 
    int k = 0; 
    for (int i = 0; i < n; i++) 
        if (freq[str[i]] > 1) 
            str[k++] = str[i]; 

    if (isPalindrome(str, 0, k-1)) 
    { 
        return false; 
    } 
    return true; 
} 
