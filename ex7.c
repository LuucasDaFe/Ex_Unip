#include <stdio.h>
int main(){
	int canalX, canalY, novo;
	printf("Quantos seguidores tem o canal X? ");
	scanf("%d", &canalX);
	printf("\nQuantos seguidores tem o canal Y?");
	scanf("%d", &canalY);
	novo=(canalX+canalY);
	printf("\n\nO novo canal vai ter %d de seguidores\n\n",novo);
	return 0;
}
