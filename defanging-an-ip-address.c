char * defangIPaddr(char * address){
    char *res = (char *)malloc(sizeof(char)*(10+strlen(address)));
    int j=0;
    for(int i=0;i<strlen(address);i++) {
        if (address[i]=='.') {
            res[j]='[';
            res[j+1]='.';
            res[j+2]=']';
            j+=3;
        } else {
            res[j]=address[i];
            j+=1;
        }
    }
    res[j]=0;
    return res;
}
