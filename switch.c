main()
{
	char c;
	int a,b;
	scanf("%c\n",c);
	scanf("%d\n",a);
	scanf("%d\n",b);
	
	switch(c)
	{
		case 'a':
			printf("%d",a+b);
			break;
			case 's':
			printf("%d",a-b);
			break;
			case 'm':
			printf("%d",a*b);
			break;
	}
}
