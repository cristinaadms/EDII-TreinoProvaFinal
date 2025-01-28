/*
Dada uma árvore 2-3 que armazena palavras em português e, dentro de cada nó, uma árvore binária que armazena as traduções em inglês e as unidades onde cada tradução é usada (exemplo: "comida" -> "food" em "Restaurante", "Mercado"), implemente uma função em C que, dado a raiz da árvore 2-3 e uma unidade específica, retorne todas as palavras em português que possuem tradução em inglês utilizada nessa unidade.


void exibir_palavras(Arv23 *raiz, int unidade){

    if(raiz != NULL){
        for(int i=0; i < raiz->palavrasportugues->num_unidades; i++){
            if(raiz->palavrasportugues->unidade[i] == unidade)
                printf("%s", raiz->palavrasportugues->palavra);
        }

        if(raiz->num_filhos >= 2){
            exibir_palavras(raiz->esquerda, unidade);
            exibir_palavras(raiz->centro, unidade);
        }

        if(raiz->num_filhos == 3)
            exibir_palavras(raiz->direita, unidade);
    }
}

*/