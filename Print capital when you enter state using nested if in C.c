#include <stdio.h>
#include <string.h>
#include <conio.h>
 
//created by Anonymous
 
int main()
{
	int pass, x=10;	
	
    char username[15];
    	printf("\n\n\n\t=======================================================================");
 printf("\n\t      CAUTION : USE FIRST CHARACTER AND AFTER SPACE UPPERCASE");
 printf("\n\t      CAUTION : IF IT DOES NOT OUTPUT WT U ENTRED THEN CHECK SPEELING OR STATE");
 printf("\n\t=================================================================================");
    
    printf("\n \n\t Enter state:");
    scanf("%s",&username);
  /*if statements */
    if(strcmp(username,"Telangana")==0){
       
 
             printf("\t Capital : Hyderabad");
             printf("\n\n  Places to vist.... \n Warangal \n Nagarjuna Sagar \n Yadagirigutta \n Basara \n Kuntala Falls  ");
        }
        
            if(strcmp(username,"Maharastra")==0){
       
 
             printf("\t Capital : Mumbai");
              printf("\n\n Places to vist .... \n pune \n Ellora Caves \n Mahabaleshwar \n Lonavala");
        }
        
            if(strcmp(username,"AndraPradesh")==0){
       
 
             printf("\t Capital : Amaravati");
             printf("\n places to visit.....\n Tirupati \n Aruka Valley \n Vishakapatnam \n Vijayvada");
        }
        
            if(strcmp(username,"Tamilnadu")==0){
       
 
             printf("\t Capital : Chennai");
             printf("\n Places to visit.....\n Madurai \n Rameshvaram \n Mahabalipuram \n Kanyakumari");
        }
        
            if(strcmp(username,"Kerala")==0){
             printf("Capital :Thiruvananthapuram ");
        }
        
            if(strcmp(username,"MadhyaPradesh")==0){
            	
             printf("Capital : Bhopal");
        }
        
         if(strcmp(username,"Uttarkhand")==0){
             printf("Capital :Dehradun ");
        }
        
          if(strcmp(username,"Uttarpradesh")==0){
             printf("Capital : Lucknow");
        }
        
            if(strcmp(username,"Gujarat")==0){
             printf("Capital : Gandhinagar");
        }
        
               if(strcmp(username,"Chhatissgrah")==0){
 
             printf("Capital : Raipur");
        }
        
                      if(strcmp(username,"Odisha")==0){
 
             printf("Capital : Bhubaneswar ");
        }
        
 
                         if(strcmp(username,"Arunachal Pradhesh")==0){
 
             printf("Capital : 	Itanagar ");
        }
                         if(strcmp(username,"Assam")==0){
 
             printf("Capital : Dispur ");
        }
                         if(strcmp(username,"Bihar")==0){
 
             printf("Capital : 	Patna ");
        }
                         if(strcmp(username,"Goa")==0){
 
             printf("Capital : Panaji ");
        }
        
                            if(strcmp(username,"Manipur")==0){
 
             printf("Capital : Impal ");
        }
        
            
                            if(strcmp(username,"Nagaland")==0){
 
             printf("Capital : Kohima ");
        }
        
                            if(strcmp(username,"Sikkim")==0){
 
             printf("Capital : Gangtok ");
        }
    
                           if(strcmp(username,"West Bengal")==0){
 
             printf("Capital : Kolkataa ");
        }
        
                               if(strcmp(username,"India")==0){
 
             printf("Capital : Delhi ");
        }
   
        
                               if(strcmp(username,"Nagaland")==0){
 
             printf("Capital : Khohima ");
        }
        
 getch();
 return 0;
}
