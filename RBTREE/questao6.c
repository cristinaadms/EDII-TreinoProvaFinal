/*
Dada uma árvore rubro-negra que armazena palavras em português e, dentro de cada nó, uma árvore binária que armazena as traduções em inglês e as unidades onde cada tradução é usada (exemplo: "comida" -> "food" em "Restaurante", "Mercado", "Feira"), implemente uma função em C que, dado a raiz da árvore rubro-negra e uma palavra em português, verifique em quais X unidades essa palavra aparece e retorne a soma da quantidade total de palavras (em português) que existem nessas X unidades.


int quant_palavras(ArvRB *raiz, int const char* palavra){

    soma = 0;

    if(raiz != NULL){
        if(strcmp(raiz->palavrasportugues->palavra,palavra)==0){
            for(int i=0; i < raiz->palavrasportugues->num_unidades; i++){
                soma += raiz->palavrasportugues->quantidadepalavra[i];
            }
        }

        soma += quant_palavras(raiz->esquerda, palavra);
        soma += quant_palavras(raiz->direita, palavra);
        
    }

    return soma;

}

*/