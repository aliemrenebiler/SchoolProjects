
#include <stdio.h>
#include <time.h>
#define SIZE 100

//oluşturulan diziyi karıştıran algoritma

void printArray(int n, int arr[]){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}

void randomize(int n, int arr[]){
	int x, temp, i;
	for(i=0; i<n; i++){
		x = rand() % n;
		temp = arr[i];
		arr[i] = arr[x];
		arr[x] = temp;
	}
}

int main(){
	int arr[SIZE], n, i;
	printf("DIZININ ELEMANLARINI KARISTIRMA");
	printf("\nDizinin eleman sayisi: ");
	scanf("%d", &n);
	
	//random dizi elemanları oluşturma
	srand(time(NULL));
	for(i=0; i<n; i++){
		arr[i] = rand() % 100;
	}
	
	printf("\n");
	printArray(n, arr); //yazdırma
	randomize(n, arr); //karıştırma
	printf("\n");
	printArray(n, arr); //bir daha yazdırma
	
	return 0;
}















