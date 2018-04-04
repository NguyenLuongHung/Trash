#include <stdio.h>

main()
{

int pin,  a;
char n[22];
char c[22];


char url [90];

label1:


printf("\n\n\n\nWelcome, " );
label2:
printf("What's your name?\n");
scanf("%[^\n]",n);
fflush(stdin);
printf("What's your last name?\n");
scanf("%[^\n]",c);

printf("Thank you %s %s, Please tell us how old you are\n",n,c);
scanf("%d",&a);
if (a<18)
    {printf("People under the age of 18 cannot use the program, we are sorry. Press a key to continue\n");
    scanf("%d");
    goto label1;
    }


else if (a>30)
    {printf("Sorry, you're too old. ");
    goto label2;
    scanf("%s");

    }




else printf("Thank you");
printf(" ,insert PIN");
uk:
scanf("%d",&pin);
fflush(stdin);

if (pin!=2222)
    {printf("Wrong PIN, insert it again\n");
   goto uk; }

    else printf("you've done successfully. ");
    printf("Type the message you want to convert\n");
    scanf("%[^\n]",url);
    printf("\n\n\nThe message is'%s",url);


}


