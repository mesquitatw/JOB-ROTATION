#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, auxiliar, i, n,per;

    a = 0;
    b = 1;

    printf("Digite um n�mero: ");
    scanf("%d", &n);
    printf("\nS�rie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
        
       if (auxiliar == n){
       per = auxiliar;
    }
    
    }
    
if (per){
	printf("\nO numero %d pertence a sequ�ncia de fibonacci.",n);
}

else
printf("\nO n�mero %d n�o pertence a sequ�ncia de fibonacci.",n);
	
}

git remote add origin https://github.com/mesquitatw/JOB-ROTATION.git
