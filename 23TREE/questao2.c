/*
Dada uma árvore 2-3 de disciplinas (código, nome, carga horária, período do curso ao qual pertence), onde a árvore é organizada pelo código da disciplina, implemente uma função em C que, dado a raiz da árvore e uma carga horária mínima, devolva a quantidade de disciplinas cuja carga horária seja maior ou igual à carga horária especificada.


int quant_disciplinas(Arv *raiz, int cargahoraria){

    int contador = 0;

    if(raiz != NULL){
        if(raiz->cargahoraria >= cargahoraria)
            contador++;
        
        if(raiz->num_filhos == 2){
            if(periodo < raiz->periodocurso)
                contador += quant_disciplinas(raiz->esquerda, cargahoraria);

            contador += quant_disciplinas(raiz->centro, cargahoraria);
        
        }else if(raiz->num_filhos == 3){
            if(periodo < raiz->periodocurso)
                contador += quant_disciplinas(raiz->esquerda, cargahoraria);

            contador += quant_disciplinas(raiz->centro, cargahoraria);
            contador += quant_disciplinas(raiz->direita, cargahoraria);
        
        }

    }

    return contador;
}


*/