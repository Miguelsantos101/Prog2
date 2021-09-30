#include <stdio.h>
#define MAX 20

struct tipoA{
	char nome[MAX+1];
	float op1, op2;
};

void maiorNota(int n, tipoA *v);
int buscaNota (int n, tipoA *v);

int main()
{
	int n, zero;

	// leitura de n
	scanf("%d", &n);

	// leitura do vetor
    tipoA alunos[MAX];
    
	for(int i = 0; i < n; i++){
        fflush(stdin);
        scanf(" %s %f %f", alunos[i].nome, &alunos[i].op1, &alunos[i].op2);
	}

	// chamada da funcao para calcular a maior nota e listar os alunos com tal nota
    maiorNota(n, alunos);

	// chamada da funcao para verificar aluno que obteve zero nas  2 optativas
    zero = buscaNota(n, alunos);
    if(zero >= 0){
        printf("\n%s", alunos[zero].nome);
        
    }
    else{
        printf("\nInexistente");
    }

	return 0;
}


// CORPO DAS FUNCOES
void maiorNota(int n, tipoA *v){
    float mNota = v[0].op1;

    for(int alpha = 0; alpha < n; alpha++){
        if(v[alpha].op1 < v[alpha + 1].op1){
            mNota = v[alpha + 1].op1;
        }
    }

    printf("%.1f ", mNota);

    for(int beta = 0; beta < n; beta++){
        if(v[beta].op1 == mNota){
            printf("%s ", v[beta].nome);
        }
    }
}

int buscaNota (int n, tipoA *v){
    for(int gamma = 0; gamma < n; gamma++){
        if(v[gamma].op1 == 0.0 && v[gamma].op2 == 0.0){
            return gamma;
        }
    }

    return -1;
}
