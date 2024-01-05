int hack_it(Keeper& keeper){
    int* p = (int*)&keeper;
    return *(p + 1); 
}