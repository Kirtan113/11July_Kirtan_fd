#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    int find_length(char string[]) 
    {
        int len = 0, i;
        for(i = 0; string[i] != '\0'; i++) 
        {
        len++;
        }
    return len;
    }

    void join_strings(char string1[], char string2[]) 
    {
        int i, len1, len2;
        len1 = find_length(string1);
        len2 = find_length(string2);
        for (i = len1; i < len1 + len2; i++) 
        {
        string1[i] = string2[i - len1];
        }
            string1[i] = '\0'; 
    }

    void copy_string(char destination[], char source[]) 
    {
        int len, i;
        len = find_length(source);
        for (i = 0; i < len; i++) 
        {
            destination[i] = source[i];
        }
            destination[i] = '\0';
    }




int main() 
{
    char string1[20], string2[20]; 
    int choice;
    while (1) 
    {
        printf("Task Menu:\n1.Reverse String.\n2.Concatenation\n3.Palindrome\n4.Copy a string\n5.Length of the string \n6.Frequency of character in s string \n7.Find number of vowels and consonants\n8.Exit\n");   
        printf("\nEnter your choice: ");
        scanf("%d", & choice);
        switch (choice) 
        {
            case 1:
                    char st[40]; 
                    printf ("\nEnter a string to be reversed:");  
                    scanf ("%s", st);  
                    printf ("After the reverse of a string:%s\n\n", strrev(st));
            break;
    
            case 2:
                    printf("\nEnter two strings: ");
                    scanf("%s%s", string1, string2);
                    join_strings(string1, string2);
                    printf("The concatenated string is %s\n\n", string1);
            break;
            
            case 3:
                    char str[100], tmp, rev[100];
	                int a, b;
	                printf("\nEnter string: ");
	                scanf("%s", &str);
                    strcpy(rev,str);
	                a = 0;
	                b= strlen(str) - 1;
	                while(a < b)
                    {
                        tmp = str[a];
                        str[a] = str[b];
                        str[b] = tmp;
                        a++;
                        b--;
    	            }
	                printf("Reverse string: %s\n", str);
                    if(strcmp(rev,str) == 0)
                        printf("%s is palindrome!\n\n", str);
                    else
                        printf("%s is not palindrome.\n\n", str);
            break;
    
            case 4:
                    printf("\nEnter a string: ");
                    scanf("%s", string1);
                    printf("String1 = %s\n");
                    printf("After copying string1 to string 2\n");
                    copy_string(string2, string1);
                    printf("String2 = %s\n\n", string2);
            break;

            case 5:
                    printf("\nEnter the string: ");
                    scanf("%s", string1);
                    printf("The length of string is %d\n\n", find_length(string1));

            break;
            
            case 6:
                    char s[1000];  
                    int  i1,j,k,count=0,n;
                    printf("\nEnter the string : ");
                    scanf("%s",&s);
     
                    for(j=0;s[j];j++);
	                n=j; 
                    printf("frequency count character in string:\n");
 
                    for(i1=0 ;i1<n ;i1++)  
                    {
     	                count=1;
    	                if(s[i1])
    	                {
		                    for(j=i1+1;j<n;j++)  
	                        {   
	                            if(s[i1]==s[j])
    	                        {
                                    count++;
                                    s[j]='\0';
	     	                    }
	                        }  
	                        printf("'%c' = %d\n\n",s[i1],count);
                        }	   
 	                } 
            break;

            case 7:
                    char sr[100];
                    int i,vowCount=0,consCount=0;
                    printf("\nEnter a string for count vowel and consonant\n");
                    scanf("%s",&sr);
                    for(i=0; sr[i]; i++)
                    {
                        if
                        (sr[i] == 'a'|| sr[i] == 'e'|| sr[i] == 'i'|| sr[i] == 'o'|| sr[i] == 'u'
                        ||sr[i] == 'A'|| sr[i] == 'E'|| sr[i] == 'I'|| sr[i] == 'O'|| sr[i] == 'U' )
                        {
                        vowCount++;
                        }
                        else if
                        ((sr[i] >= 'a' && sr[i] <= 'z' || sr[i] >= 'A' && sr[i] <= 'Z' ))
                        {
                        consCount++;
                        }
                    }
                        printf("The number of vowels: %d \n",vowCount);
                        printf("The number of consonant: %d \n\n",consCount);
                        //return 0;
            break;

            case 8:
                exit(0);
        }
    } return 0;
}



