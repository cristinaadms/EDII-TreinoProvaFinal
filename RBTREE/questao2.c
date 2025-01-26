/*
Dada uma árvore vermelho-preta de disciplinas (código, nome, carga horária, período do curso ao qual pertence), onde a árvore é organizada pelo código da disciplina, implemente uma função em C que, dado a raiz da árvore e uma carga horária mínima, devolva a quantidade de disciplinas cuja carga horária seja maior ou igual à carga horária especificada.




int quant_disc_ch(ArvRB *raiz, int cargahoraria){

    int contador = 0;
    if(raiz != NULL){
        if (raiz->cargahoraria >= cargahoraria)
            contador ++;

        contador += quant_disc_ch(raiz->esquerda,cargahoraria);
        contador += quant_disc_ch(raiz->direita, cargahoraria);
        
         
    }

    return contador;


}


*/