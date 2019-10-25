#include<stdio.h>

int main()
{
        int N,K,i,choice;
        //created variables
        //printf("\n1.Encryption\n2.Decryption\n\n\tEnter your choice : ");
        scanf("%d",&choice);
        //printf("\nEnter string11 Length : ");
        scanf("%d",&N);
        char string11[N];
        //printf("\nEnter string11 : ");
        getchar();
       // scanf("%s",string11);
        gets(string11);
        //printf("\nEnter Key : ");
        scanf("%d",&K);
        switch(choice)
        {
          case 1:
                for(i=0;i<N;i++)
                {
                        if((string11[i]>64) && (string11[i]<91))
                        {
                                string11[i]+=K;
                                if(string11[i]>90)
                                        string11[i]=64+(string11[i]-90);
                        }
                        else if((string11[i]>96) && (string11[i]<123))
                        {
                                string11[i]+=K;
                                if(string11[i]>122)
                                        string11[i]=96+(string11[i]-122);
                        }
                }
                break;
          case 2:
                for(i=0;i<N;i++)
                {
                        if((string11[i]>64) && (string11[i]<91))
                        {
                                string11[i]-=K;
                                if(string11[i]<65)
                                        string11[i]=91-(65-string11[i]);
                        }
                        else if((string11[i]>96) && (string11[i]<123))
                        {
                                string11[i]-=K;
                                if(string11[i]<97)
                                        string11[i]=123-(97-string11[i]);
                        }
                }
                break;
          default:
                printf("\nERROR!!NO SUCH CHOICE!!EXITING!!");
        }
        for(i=0;i<N;i++)
                printf("%c",string11[i]);
        printf("\n");
        return 0;
}
         