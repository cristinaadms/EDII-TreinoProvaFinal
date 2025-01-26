/*
Dada um arvore vermelha e preta de disciplinas (codigo, nome, carga horaria, periodo do curso ao qual pertence), onde a arvore é organizada pelo codigo da disciplina. faça uma função que dado a raiz da arvore e um periodo do curso devolva quantas disciplinas existem neste periodo.



int quant_disc(ArvRB *raiz, int periodo){
    int contador = 0;

    if(raiz != NULL){
        if(raiz->periodocurso == periodo)
            contador++;
        
        contador+= quant_disc(raiz->esquerda, periodo);
        contador+= quant_disc(raiz->direita, periodo);
    }

    return contador;

}



*/

