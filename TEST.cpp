do {
	printf("Nhap 'Y' hoac 'N': ");
	m=0; n=0;
	fflush(stdin);
	
	do{
		c[m]=getchar();
		if (c[m] == 10)
			break;
		m++;
	}while(1);
	
	while (c[n] == 32)
		n++;
		
	while (c[m-1] == 32)
		m--;
		
	if ((c[n+1] == 10 || c[n+1] == 32) && n==m-1) { 
		if (c[n] == 'N') 
			break;
	}
	if((c[n] != 'N' && c[n] != 'Y')|| n != m-1) 
		printf("Nhap sai moi nhap lai\n");
	} while(c[n] != 'Y' && n == m-1);
	
	if (c[n] == 'Y' && n == m-1) exit(0);
