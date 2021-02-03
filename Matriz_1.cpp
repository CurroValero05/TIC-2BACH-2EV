/*
LEe dos matrices 3x3 y devuelve la suma
*/
#include<stdio.h>

int main(){
	int matriz_1[3][3];
	int matriz_2[3][3];
	int matriz_suma[3][3];
	int fil,col;
	//Leo la matriz 1
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\nfila %d, columna %d:", fil+1,col+1);
			scanf("%d",&matriz_1[fil][col]);
			
		}
		
	}
	//Leo la matriz 2
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\nfila %d, columna %d:", fil+1,col+1);
			scanf("%d",&matriz_2[fil][col]);
			}
		}
	}
	//Muestro la matriz
	printf("\n SUMA: \n");
	for(fil=0;fil<3;fil++){
    	for(col=0;col<3;col++){
     		printf("%d", matriz_suma[fil][col]);
		}
		printf("\n");
	}
	
	//Sumo matrices
	for(fil=0;fil<3;fil++){
		for (col=0;col<3;col++){
			matriz_suma[fil][col]=matriz_1[fil][col]+matriz_2[fil][col];
			
		}
	}
			
	
		
	
	//Muestro la matriz suma
	return 0;
}
