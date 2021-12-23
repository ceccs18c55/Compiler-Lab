#include<stdio.h>
#include<string.h>

int ninputs;
int check(char,int)
int dfa[10][10]
    
char c[10],string[10];

/*
int checkSymbol(char ch,DFA d)
{
    for(int i=0;i<d.noi;i++)
    {
        if(ch == d.inputSymbols[i]) {
            return i;  
        }
    }
    return -1;
}
int checkFinalState(int st,DFA d)
{
    for(int i=0;i<d.nof;i++) {
        if(st == d.final[i]) {
            return 1;  
        }
    }
    return 0;
}
*/
int main()
{
    int nstates,nfinals;
    int f[10];
    int i,j,s=0,final=0;

    char y;
    printf("\nEnter no of states that your DFA consist: ");
    scanf(" %d",&nstates);

   // DFA d;
    printf("\nEnter no of input symbols: ");
    scanf(" %d",&ninput);  

      // accept the input symbols
    for(int i=0;i<d.noi;i++) {
        printf("Enter input symbol no %d : ",i+1);
        scanf(" %c",&c[i]);
    }  

    printf("\nEnter no of final states: ");
    scanf(" %d",&nfinals);
    
  
    // accept the final states
    for(int i=0;i<d.nof;i++) {
        printf("Enter final state no %d : ",i+1);
        scanf(" %d",&f[i]);
    }
    printf("\n Define transition rule as initlal state, input symbol = finalstate ");

    for(int i=0;i<d.nos;i++){
        for(int j=0;j<d.noi;j++) {
            printf("\n(q%d,%c) : q",j,c[i]);
            scanf(" %d",&dfa[i][i]);
        }
     }
    // print the transition table
    // print the symbols as columns of transition table
    //for(int i=0;i<d.noi;i++)
   //     printf("\t %c",d.inputSymbols[i]);
   // printf("\n");
    //for(int i=0;i<d.nos;i++) {
      //  printf("\nq%d",i);  
        //for(int j=0;j<d.noi;j++) {
          //  printf("\t%d",d.delta[i][j]);
       // }
       // printf("\n");
    //}
    // char ch = 'n';
    do {
	i=0;
	s=0;
	final=0;
	
        char string[10]; 
       /* printf("\nEnter a string: ");
        scanf("%s",string);
        int stateCounter = 0;
        int flag = 1;
        for(int i=0;i<strlen(string);i++) {
            int symPos = checkSymbol(string[i],d);
            if(symPos==-1) {
                flag = 0;
                break;
            }
            stateCounter = d.delta[stateCounter][symPos];
        }
        if(flag==1 && checkFinalState(stateCounter,d)==1) {
            printf("%s is accepted. ",string);
        }
        else {
            printf("%s is not accpeted. ",string);
        }
    } while(1); */


	while(string[i]!='\0')
		if((s=check(string[i++],s))<0)
			break;

		for (int i=0;i<nfinals;i++)
			if(f[i]==s)
				final =1;
		if(final==1)
			printf(" is accepted. ");
		else 	
			printf("invalid");
		printf("Do you want to continue?\n");
		scanf("%c",&y);

	}while(y=='Y');

    return 0;
}

int check(char c, int d)
{
	for(int j=0;i<mininputs,j++)
		if(b==c[j])
			rreturn (dfa[j][d]);
	return -1;
}
