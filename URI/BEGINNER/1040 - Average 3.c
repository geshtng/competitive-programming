#include<stdio.h>

int main()
{
	float N1, N2, N3, N4, N5, N6;
	float media, media2;
	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
	
	if(media >= 7.0)
	{
		printf("Media: %.1f\n", media);	
		printf("Aluno aprovado.\n");
	}
	else if(media < 5.0)
	{
		printf("Media: %.1f\n", media);	
		printf("Aluno reprovado.\n");
	}
	else if(media >= 5.0 && media <= 6.9)
	{
		printf("Media: %.1f\n", media);	
		printf("Aluno em exame.\n");
		scanf("%f", &N5);
		printf("Nota do exame: %.1f\n", N5);
		
		media2 = (media + N5)/2;
		if(media2 >=5.0)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", media2);
		}
		else if(media2 < 5.0)
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", media2);
		}
	}
	
	
	return 0;
}

