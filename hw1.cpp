#include <iostream>

int main() {
	int a;
	int b;
	printf("Programm will calculate differences\n between spaces of two rectanges.\n Print two numbers that will mean sides of first rectangle.\n");
	scanf("%d %d", &a, &b);
	int S=a*b;
	printf("S=%d", S);
	
	int a1;
	int b1;
	printf("\n Print two numbers again.\n It will mean sides of second rectanges.\n");
	scanf("%d %d", &a1, &b1);
	int S1=a1*b1;
	printf("S1=%d", S1);
	
	printf("\n Space difference is \n");
	int S2;
	if (S>S1)
	{S2=S-S1;
	} else
	{S2=S1-S;
	}
	printf("%d", S2);
}

