#include <stdio.h>
#include <stdlib.h>
#include "verification.h"
#include <string.h>
int verifier (char username[20],char password[20])
 {
         FILE *f;
         char pass[20]; char user[20]; int role=-1;
         f=fopen("users.txt","r");
        if (f!=NULL)
     {
             while(fscanf(f,"%s %s %d\n",user,pass,&role)!=EOF)   
         {
           if ((strcmp(username,user)==0)&&(strcmp(password,pass)==0))
            {
            	return (role);
	    }
	}
     }   
	fclose(f);    
         
 	return(role);
     
 }
