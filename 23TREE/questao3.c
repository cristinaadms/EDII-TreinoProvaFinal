/*
Dada uma árvore 2-3 de disciplinas (código, nome, carga horária, período do curso ao qual pertence), onde a árvore é organizada pelo código da disciplina, implemente uma função em C que, dado a raiz da árvore e um intervalo de períodos (por exemplo, entre 1 e 3), retorne a soma total das cargas horárias das disciplinas que pertencem a qualquer um dos períodos dentro desse intervalo.

int soma_ch(Arv23 *raiz, int inicio, int final){
    int soma = 0;
    if(raiz != NULL){
        if(raiz->periodo >= inicio && raiz->periodo <= final)
            soma += raiz->cargahoraria;

        if(raiz->num_filhos >= 2){
            soma += soma_ch(raiz->esquerda, inicio, final);
            soma += soma_ch(raiz->centro, inicio, final);
        }
        if(raiz->num_filhos == 3)
            soma += soma_ch(raiz->direita, inicio, final);
        }
    }

    return soma;

}

*/