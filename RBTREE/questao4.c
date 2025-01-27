/*
Dada uma árvore rubro-negra que armazena palavras em português e, dentro de cada nó, uma árvore binária que armazena as traduções em inglês e as unidades onde cada tradução é usada (exemplo: "comida" -> "food" em "Restaurante", "Mercado"), implemente uma função em C que, dado a raiz da árvore rubro-negra e uma unidade específica, retorne todas as palavras em português que possuem tradução em inglês utilizada nessa unidade.


int exibir_palavras_port(ArvRB *raiz, int unidade){

    if(raiz != NULL){
        for(int i=0; i<raiz->palavrasportugues->num_unidades; i++){
            if(raiz->palavrasportugues->unidades[i] == unidade)
                printf("%s", raiz->palavrasportugues->palavra);
            }
        }
    }

    exibir_palavras_port(raiz->esquerda, unidade);
    exibir_palavras_port(raiz->direita, unidade);

}


*/