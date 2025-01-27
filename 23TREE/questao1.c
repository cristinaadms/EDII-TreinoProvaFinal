/*
Dada um arvore 2-3 de disciplinas (codigo, nome, carga horaria, periodo do curso ao qual pertence), onde a arvore é organizada pelo codigo da disciplina. faça uma função que dado a raiz da arvore e um periodo do curso devolva quantas disciplinas existem neste periodo.

int quant_disciplinas(Arv23 *raiz, int periodo){

    int contador = 0;

    if(raiz != NULL){
        if(raiz->periodocurso == periodo)
            contador++;

        if(raiz->num_filhos == 2){
            if(periodo < raiz->periodocurso)
                contador += quant_disciplinas(raiz->esquerda,periodo);
        
            contador += quant_disciplinas(raiz->centro,periodo);
        
        }else if(raiz->num_filhos == 3){
            if(periodo < raiz->periodocurso)
                contador += quant_disciplinas(raiz->esquerda,periodo);
        
            contador += quant_disciplinas(raiz->centro,periodo);
            contador += quant_disciplinas(raiz->direita,periodo);
        
        }
   
        
    }

    return contador;
}



*/