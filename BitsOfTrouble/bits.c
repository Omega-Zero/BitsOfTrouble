/***************
* Jeffrey Marple
* Lab 3
****************/
#include <stdio.h>

int readInt(){
	int c = 0;
	int i = 0;
  
	while( (c = getchar()) != EOF && c != '\n' )
	{
		if( c >= '0' && c <= '9')	
			i = i * 10 + (c - '0');	
	}
	
	return i;
}





int main(){

	int value1 = 0;
	char value2 = 0;
	int value3 = 0;
	int answer = 0;
	int maskInt = 1;
	

	printf("Enter a integer: ");
	value1 = readInt();

	printf("Do you want to set, unset, or flip a bit? (s, u, f): ");
	value2 = getchar();

	printf("Which bit? (0-31): ");
	readInt();	
	value3 = readInt();


	if(value2 == 's'){//set
	
		maskInt = maskInt << value3;
		answer = maskInt | value1;
		

	}else if (value2 == 'u'){//Unset

		maskInt = maskInt << value3;
		maskInt = ~maskInt;
		answer = maskInt & value1;


	}else{//flip
		maskInt = maskInt << value3;
		answer = maskInt ^ value1;
	
	}

	

	if(value2 == 's'){
		printf("The result of setting bit %d ", value3);
	}else if (value2 == 'u'){
		printf("The result of unsetting bit %d ", value3);
	}else{
		printf("The result of flipping bit %d ", value3);
	}


	printf("in %d ", value1);
	printf("is %d ", answer);
	printf("\n");
	
	
	return 0;
}
