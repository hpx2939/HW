#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int a[5];
	int i, j, k, temp;

	printf("�п�J5�ӧA�n�ƧǪ���\n");
	for (i = 0; i <5; i++) scanf_s("%d", &a[i]);

	for (i = 0; i <9999; i++){
		for (j = 0; j<4; j++){
			if (a[j]>a[j + 1]) 
			{
				temp = a[j];  
				a[j] = a[j + 1];
				a[j + 1] = temp;
				for (k = 0; k <5; k++){
					printf("%d ", a[k]); 
				}
				printf("\n");
			}
		}	
	}
	system("pause");

}