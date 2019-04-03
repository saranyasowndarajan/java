void per(char *a, int l, int r) 
{ 
   int i; 
   if (l == r) 
     printf("%s\n", a); 
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          per(a, l+1, r); 
          swap((a+l), (a+i)); 
       } 
   } 
} 

int main() 
{ 
    char s[] = "ABC"; 
    int n = strlen(s); 
    per(s, 0, n-1); 
    return 0; 
} 
