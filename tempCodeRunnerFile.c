
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    if(Isempty(s)){
        printf("the stack is Empty");
    }
}