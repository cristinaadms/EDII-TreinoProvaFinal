/*
Dada uma árvore rubro-negra que armazena palavras em português e, dentro de cada nó, uma árvore binária que armazena as traduções em inglês e as unidades onde cada tradução é usada (exemplo: "comida" -> "food" em "Restaurante", "Mercado"), implemente uma função em C que, dado a raiz da árvore rubro-negra e uma palavra em português, retorne a quantidade de unidades onde as traduções dessa palavra estão presentes.


int quant_unidades(ArvRB *raiz, const char* palavra){

    int contador = 0;
    if(raiz != NULL){
        if(strcmp(raiz->palavrasportugues->palavra, palavra) == 0){
            for(int i=0; i < raiz->palavrasportugues->num_unidades; i++){
                contador++;
            }
        
        }

        contador += quant_unidades(raiz->esquerda, palavra);
        contador += quant_unidades(raiz->direita, palavra);
    }

    return contador;
}


*/