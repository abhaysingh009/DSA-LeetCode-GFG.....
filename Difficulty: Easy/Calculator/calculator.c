void utility(int a, int b, int opr) {
    switch(opr){
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a-b);
            break;
        case 3:
            printf("%d",a*b);
            break;
        default :
            printf("Invalid Input");
    }
    
}
