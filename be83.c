int main()
{
	int n,m,area;	
  char c;
		scanf("%d%d",&n,&m);
    scanf("%c",&c);
    if(c=='/')
		area=(n/m);
    else
    area=n%m;
	printf("%d\n",area);
	return 0;
}
