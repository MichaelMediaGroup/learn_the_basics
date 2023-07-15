#include <stdio.h>

int main()
{
    char messagein[100];
    char Morse[26][5] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                         ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                         "...","-","..-","...-",".--","-..-","-.--","--.."};
    printf("What is the message that you want to encode? \n");
    gets(messagein);
    for (int i = 0; i < 100; i++)
    {
        if (messagein[i] == '\0')
        {
            break;
        }
        else{
            if ((messagein[i] > 96) && (messagein[i] < 123)){
                int j = messagein[i] - 97;
                printf("%s ",Morse[j]);
            }
            else{
                printf("%c ",messagein[i]);
            }
        }
    }
    
}