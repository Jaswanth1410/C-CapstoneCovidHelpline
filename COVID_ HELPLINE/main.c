#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct user
{
     char user_name[20];
     int user_DOB;
     char user_G[2];
     char user_p[15];
}user;
void Helpline(user u1);
void vaccination();
void symptoms(user u1);
void Positive();
void negitive();
void pincode();
void tsdistrict();
void apdistrict();
void Precations(user u1);
void pincodech();
int main()
{
    system("COLOR B4");
   printf("\n\n\t\t\t =============================================================================================");
     printf("\n\t\t\t ---------------------- COVID-19 Self-Checker & VACCINE INFO OF AP & TS ----------------------");
     printf("\n\t\t\t =============================================================================================");
     printf("\n\n\n\t\t\t\tWelcome to Our Coronavirus Self-Checker and COVID-19 Vaccine Info FAQ. \n\t\t\t\tIf you are experiencing any symptoms related to COVID-19 use this \n\t\t\t\tget to know what is your situation .\n\n\t\t\t\tThis tool is not a substitute for professional medical advice, diagnosis, \n\t\t\t\tor treatment. Always consult a medical professional for \n\t\t\t\tserious symptoms or emergencies.\n\n");
     printf("\n\n\t\t\t\tIf u ACCEPT Enter(Yes / No) : ");
     char accept[5];
     scanf("%s",accept);
      int exit =0,p;
     if( strcmp(accept,"Yes") == 0 || strcmp(accept,"yes") == 0)
     {

                 system("cls");
                 system("COLOR B4");
                  printf("\n\n\t\t\t\t\t ----------------------------------------------------------");
                  printf("\n\t\t\t\t\t ---------------------- USER DETAILS ----------------------");
                  printf("\n\t\t\t\t\t ----------------------------------------------------------");
             FILE *fp;
             fp = fopen("User.csv","a+");
             user u1;
             printf("\n\n\t\t\t\t\t Enter Your Name : ");
             scanf("%s",u1.user_name);
             fprintf(fp, "Name = %s\n", u1.user_name);
             fclose(fp);
             fp = fopen("User.csv","ab+");
             printf("\n\t\t\t\t\t Enter Your DOB(DDMMYYYY) : ");
             scanf("%d",&u1.user_DOB);
             fprintf(fp, "DOB = %d\n", u1.user_DOB);
             fclose(fp);
             fp = fopen("User.csv","a+");
             printf("\n\t\t\t\t\t Enter Your Gender [M/F] : ");
             scanf("%s",u1.user_G);
             fprintf(fp, "GENDER = %s\n", u1.user_G);
             fclose(fp);
             fp = fopen("User.csv","a+");
             printf("\n\t\t\t\t\t Enter Your Place : ");
             scanf("%s",u1.user_p);
             fprintf(fp, "Place = %s\n", u1.user_p);
             fclose(fp);

             while(exit != 1)
             {
                 system("cls");
                printf("\n\n\t\t\t\t\t -----------------------------------------------------------");
                  printf("\n\t\t\t\t\t ---------------------- You Can Check ----------------------");
                  printf("\n\t\t\t\t\t -----------------------------------------------------------");
             printf("\n\n\t\t\t\t\t Hi %s!!, ",u1.user_name);
             printf("\n\t\t\t\t\t  What u want to know ?");
             printf("\n\n\t\t\t\t\t\t1 --> Check Your Symptoms \n\t\t\t\t\t\t2 --> Get Vaccination Info of TS & AP\n\t\t\t\t\t\t3 --> Precautions to be taken Against COVID-19\n\t\t\t\t\t\t4 --> Get COVID-19 Helpline Numbers");
             printf("\n\n\t\t\t\t\t\tEnter Corresponding Number : ");
             int num;
             scanf("%d",&num);
             switch(num)
             {
                 case 1 : symptoms(u1); break;
                 case 2 : vaccination();break;
                 case 3 : Precations(u1);break;
                 case 4 : Helpline(u1);break;
             }
             printf("\n\n\t\t\t\t\tFor Exit Enter [1] or else [0]:");
             scanf("%d",&p);
             if(p == 1) exit = 1;
             else exit =0;
     }
     }
     else
     {
         printf("\n\n\t\t\t\tThanks! Hope u recover Fast.\n\n\n\n");
     }
     if(exit == 1)
     {
         printf("\n\n\t\t\t\tThanks! Hope u recover Fast.\n\n\n\n");
     }
     printf("\n\n\n\n");

return 0;
}
void Helpline(user u1)
{
     system("cls");
                printf("\n\n\t\t\t\t\t -------------------------------------------------------");
                  printf("\n\t\t\t\t\t ---------------------- Help Line ----------------------");
                  printf("\n\t\t\t\t\t -------------------------------------------------------");
            printf("\n\t\t\t\t\t Hi %s!!,\n\t\t\t\t\t Select your state :",u1.user_name);
            printf("\n\t\t\t\t\t\t 1. Andhra Pradesh\n\t\t\t\t\t\t 2. Arunachal Pradesh\n\t\t\t\t\t\t 3. Assam\n\t\t\t\t\t\t 4. Bihar\n\t\t\t\t\t\t 5. Chhattisgarh\n\t\t\t\t\t\t 6. Goa\n\t\t\t\t\t\t 7. Gujarat\n\t\t\t\t\t\t 8. Haryana\n\t\t\t\t\t\t 9. Himachal Pradesh\n\t\t\t\t\t\t10. Jharkhand\n\t\t\t\t\t\t11. Karnataka\n\t\t\t\t\t\t12. Kerala\n\t\t\t\t\t\t13. Madhya Pradesh\n\t\t\t\t\t\t14. Maharashtra\n\t\t\t\t\t\t15. Manipur\n\t\t\t\t\t\t16. Meghalaya\n\t\t\t\t\t\t17. Mizoram\n\t\t\t\t\t\t18. Nagaland\n\t\t\t\t\t\t19. Odisha\n\t\t\t\t\t\t20. Panjab\n\t\t\t\t\t\t21. Rajasthan\n\t\t\t\t\t\t22. Sikkim\n\t\t\t\t\t\t23. Tamilnadu\n\t\t\t\t\t\t24. Telengana\n\t\t\t\t\t\t25. Tripura\n\t\t\t\t\t\t26. Uttarkhand\n\t\t\t\t\t\t27. Uttar Pradesh\n\t\t\t\t\t\t28. West Bengal");
            int c;
            printf("\n\t\t\t\t\t\t Enter Corresponding Number of the state : ");
            scanf("%d",&c);
            system("cls");
            system("COLOR B4");
            printf("\n\n\t\t\t\t\t -------------------------------------------------------");
                  printf("\n\t\t\t\t\t ---------------------- Help Line ----------------------");
                  printf("\n\t\t\t\t\t -------------------------------------------------------");
            printf("\n\t\t\t\t\tHey %s ,\n\t\t\t\t\t The Selected State\n\t\t\t\t\tHelp-line-No is : ",u1.user_name);
            switch(c)
            {
                case 1 : printf("\t0866-2410978");break;
                case 2 : printf("\t9436055743");break;
                case 3 : printf("\t6913347770");break;
                case 4 : printf("\t104");break;
                case 5 : printf("\t104");break;
                case 6 : printf("\t104");break;
                case 7 : printf("\t104");break;
                case 8 : printf("\t8558893911");break;
                case 9 : printf("\t104");break;
               case 10 : printf("\t104");break;
                case 11: printf("\t104");break;
                case 12: printf("\t0471-2552056");break;
                case 13: printf("\t104");break;
                case 14: printf("\t020-26127394");break;
                case 15: printf("\t3852411668");break;
                case 16: printf("\t108");break;
                case 17: printf("\t102");break;
                case 18: printf("\t7005539653");break;
                case 19: printf("\t9439994859");break;
                case 20: printf("\t104");break;
                case 21: printf("\t0141-2225624");break;
                case 22: printf("\t104");break;
                case 23: printf("\t044-29510500");break;
                case 24: printf("\t104");break;
                case 25: printf("\t0381-2315879");break;
                case 26: printf("\t104");break;
                case 27: printf("\t18001805145");break;
                case 28: printf("\t1800313444222, 03323412600");break;


            }

}
void symptoms(user u1)
{
    system("cls");
    system("COLOR B5");
    printf("\n\n\t\t\t\t\t---------------------------------------------------------------------");
      printf("\n\t\t\t\t\t----------------------- COVID-19 SELF-CHECKER -----------------------");
      printf("\n\t\t\t\t\t---------------------------------------------------------------------");
      printf("\n\t\t\t\t\t Hi %s!!,\n\t\t\t\t\t 1 --> Checking For Yourself\n\t\t\t\t\t 2 --> Checking For Others",u1.user_name);
      int check;
      printf("\n\n\t\t\t\t\t Enter Corresponding No: ");
      scanf("%d",&check);
      system("cls");
           printf("\n\n\t\t\t\t\t---------------------------------------------------------------------");
      printf("\n\t\t\t\t\t----------------------- COVID-19 SELF-CHECKER -----------------------");
      printf("\n\t\t\t\t\t---------------------------------------------------------------------");
      if(check == 1)
      printf("\n\t\t\t\t\t Hey %s ,\n\t\t\t\t\tSelect Your Age Group : \n\n\t\t\t\t\t 1 --> 10-20 \n\t\t\t\t\t 2 --> 20-30 \n\t\t\t\t\t 3 --> 30-40 \n\t\t\t\t\t 4 --> 40-50 \n\t\t\t\t\t 5 --> 50-60 \n\t\t\t\t\t 6 --> 60-70 \n\t\t\t\t\t 7 --> 70-80 \n\t\t\t\t\t 8 --> 80-90 ",u1.user_name);
      else
        printf("\n\t\t\t\t\t Hey %s ,\n\t\t\t\t\tSelect His/Her Age Group : \n\n\t\t\t\t\t 1 --> 10-20 \n\t\t\t\t\t 2 --> 20-30 \n\t\t\t\t\t 3 --> 30-40 \n\t\t\t\t\t 4 --> 40-50 \n\t\t\t\t\t 5 --> 50-60 \n\t\t\t\t\t 6 --> 60-70 \n\t\t\t\t\t 7 --> 70-80 \n\t\t\t\t\t 8 --> 80-90 ",u1.user_name);

      printf("\n\t\t\t\t\tENTER CORRESPNDIG No :");
      int age;
      scanf("%d",&age);
      system("cls");
           printf("\n\n\t\t\t\t\t---------------------------------------------------------------------");
      printf("\n\t\t\t\t\t----------------------- COVID-19 SELF-CHECKER -----------------------");
      printf("\n\t\t\t\t\t---------------------------------------------------------------------");
      int test;
      if(age >0 && age <9)
      {
         printf("\n\t\t\t\t\tHey have u Tested Ur-self For covid: \n\t\t\t\t\t 1 --> Tested Positive \n\t\t\t\t\t 2 --> Tested Negitive");

         printf("\n\t\t\t\t\tEnter Number : ");
         scanf("%d",&test);
      }

      if( test == 1 )
      {
          Positive();
      }
      else
      {
           system("cls");
           printf("\n\n\t\t\t\t\t---------------------------------------------------------------------");
      printf("\n\t\t\t\t\t----------------------- COVID-19 SELF-CHECKER -----------------------");
      printf("\n\t\t\t\t\t---------------------------------------------------------------------");
          printf("\n\t\t\t\t\tHey,\n\t\t\t\t\t 1 --> If u Contacted any Covid-19 Affected Patient with in 10-feets distance\n\t\t\t\t\t 2 --> Are u Feeling Symptoms Even Not contacting with Any covid-19 patient.");
        int dis;
          printf("\n\t\t\t\t\tSelect the Number : ");
          scanf("%d",&dis);
               system("cls");
           printf("\n\n\t\t\t\t\t---------------------------------------------------------------------");
      printf("\n\t\t\t\t\t----------------------- COVID-19 SELF-CHECKER -----------------------");
      printf("\n\t\t\t\t\t---------------------------------------------------------------------");
      if(dis == 1)
      {
          printf("\n\t\t\t\t\t ALERT : Please Go to Nearby COVID-19 Test Center And Test Ur Self");
          printf("\n\n\t\t\t\t\t  If U Want to Check Ur Symptoms enter (Y/N) :");
          char sca[4];
          scanf("%s",sca);
          if(strcmp(sca,"Y") == 0 ) negitive();
      }
      else
        negitive();
      }

}
void vaccination()
{
    int va=0,v;
    while(va != 1)
    {
      system("cls");
      printf("\n\n\t\t\t===================================================================================================");
      printf("\n\t\t\t================================ Vaccination Location Via Pin_Code ================================");
      printf("\n\t\t\t===================================================================================================");
    char operator;
    printf("\n\n\t\t\t\tSEARCH VACCINATION CENTER TROUGH \n\t\t\t\tPINCODE(p) or \n\t\t\t\tTELANGANA STATE(t) or \n\t\t\t\tANDHRAPRADESH(a) \n ");
    printf("\n\n\t\t\t\tEnter Respective Character : ");
    scanf("\t\t\t\t%c",&operator);
    switch (operator)
    {
    case'p':
        pincode();
        break;
    case'P':
        pincode();
        break;
    case't':
        tsdistrict();
        break;
    case'a':
        apdistrict();
        break ;
    case'T':
        tsdistrict();
        break;
    case'A':
        apdistrict();
        break ;
    default:
        printf("INVALID INPUT");
    }
    printf("\n\n\t\t\t\tIf U want to Check Another type Enter [0] else Enter [1] : ");
    scanf("%d",&v);
    va = v;
    }
}
//

void Positive()
{
    system("cls");
    system("COLOR B4");
    printf("\n\n\t\t\tHey , Please follow the Below PRESCRIPTION due to u tested positive \n\t\t\t It will Helps to cure fast. ");
    printf("\n\n\t\t\t=====================================================================================================\n");
    printf("\t\t\t--------------------------------------- DAY WISE PRESCRIPTION ---------------------------------------\n");
    printf("\t\t\t=====================================================================================================\n");
    printf("\t\t\t| DAY WISE    |    MORNING                  |            AFTERNOON       |        NIGHT             |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-1       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | CETRIZINE 10 mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            | Paracetamol 650mg Tab-1  |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         | Vitamin D3 60000 IU        |                          |  \n");
    printf("\t\t\t|             | Paracetamol 650mg Tab-1     | CAPSULE -1                 |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-2       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | CETRIZINE 10 mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            | Paracetamol 650mg Tab-1  |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t|             | Paracetamol 650mg Tab-1     |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-3       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | CETRIZINE 10 mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            | Paracetamol 650mg Tab-1  |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t|             | Paracetamol 650mg Tab-1     |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-4       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | CETRIZINE 10 mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            | Paracetamol 650mg Tab-1  |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t|             | Paracetamol 650mg Tab-1     |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-5       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | CETRIZINE 10 mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            | Paracetamol 650mg Tab-1  |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t|             | Paracetamol 650mg Tab-1     |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-6       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            |                          |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-7       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            |                          |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-8       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |   Vitamin D3 60000 IU      |                          |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |   Capsule-1                |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-9       | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            |                          |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-10      | Pantaprozole 40 mg Tablet   |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             | (Before breakfast)-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t|             | Vitamin C 500mg Tablet-1    |                            |                          |  \n");
    printf("\t\t\t|             | Zinc 50mg Tablets-1         |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-11      | Vitamin C 500mg Tablet-1    |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             |  Zinc 50mg Tablets-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-12      | Vitamin C 500mg Tablet-1    |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             |  Zinc 50mg Tablets-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-13      | Vitamin C 500mg Tablet-1    |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             |  Zinc 50mg Tablets-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-14      | Vitamin C 500mg Tablet-1    |     B COMPLEX TABLET -1    | Vitamin c,500mg Tablet-1 |  \n");
    printf("\t\t\t|             |  Zinc 50mg Tablets-1        |                            |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-15      |                             |    Vitamin D3 60000 1U     |                          |  \n");
    printf("\t\t\t|             |                             |    Capsule-1               |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t| DAY-22      |                             |    Vitamin D3 60000 1U     |                          |  \n");
    printf("\t\t\t|             |                             |    Capsule-1               |                          |  \n");
    printf("\t\t\t|             |                             |                            |                          |  \n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t-----------------------------------------------------------------------------------------------------\n");
}

void negitive()
{
    system("cls");
    printf("\n\n\t\t\t===================================================================================================");
      printf("\n\t\t\t====================================== COVID-19 SELF-CHECKER ======================================");
      printf("\n\t\t\t===================================================================================================");
    int a[20],n,i,j;
    float per;
    printf("\n\t\t\t\t SYMPTOMS : \n\n");
    printf("\t\t\t\t1 -  Dry cough\n\t\t\t\t2 -  Fatigue\n\t\t\t\t3 -  Coughing up sputum/mucus production\n\t\t\t\t4 -  Shortness of breath\n\t\t\t\t5 -  Joint or muscle pain\n\t\t\t\t6 -  Sore throat\n\t\t\t\t7 -  Headache\n\t\t\t\t8 -  Chills\n\t\t\t\t9 -  Nausea or vomiting\n\t\t\t\t10 - Nasal congestion\n\t\t\t\t11 - Diarrhea\n");
    printf("\n\n\t\t\t\tHOW MANY NUMBER OF SYMPTOMS DO U HAVE FROM THE ABOVE LIST : ");
    scanf("%d",&n);
    printf("\n\n\t\t\t\tENTER CORRESPONDING NUMBERS WITH RESPECT TO SYMPTOMS : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    per = (n/11.0)*100;
    printf("\n\n");
    for(j=0;j<n;j++)
    {
        if(a[j] == 1)
            printf("\t\t\t\tCURE FOR DRY COUGH : Use Menthol cough drops\n\t\t\t\tDrink Soup, broth, tea, or another hot beverage\n\t\t\t\tand finally, stay hydrated\n\n");
        else if(a[j] == 2)
            printf("\t\t\t\tCURE FOR FATIGUE : Recognise that the fatigue is real and be kind to yourself.\n\t\t\t\tGet a good night’s sleep.\n\t\t\t\tTry relaxation techniques.\n\t\t\t\tKeep an activity diary, keep yourself active\n\t\t\t\tImportantly, Eat well\n\n\t\t\t\tWhen should you attend a doctor :\n\t\t\t\tYour fatigue is getting worse rather than better.\n\t\t\t\tAfter 4 weeks your fatigue is unchanged.\n\t\t\t\tYou are worried or have other new symptoms.\n\n");
        else if(a[j] == 3)
            printf("\t\t\t\tCURE FOR COUGHING UP SPUTUM/MUCUS PRODUCTION : Stay hydrated by drinking fluids \n\t\t\t\tespecially water. If you become dehydrated, your mucus can get thicker, \n\t\t\t\twhich, in turn, may make your cough worse.\n\t\t\t\tRest and conserve your energy for fighting off the infection that \n\t\t\t\tcould be the trigger for your mucus production.\n\t\t\t\tConsider over-the-counter medications.\n\n");
        else if(a[j] == 4)
            printf("\t\t\t\tCURE FOR BREATHLESSNESS : Many simply involve changing position, by relax your body and airways.\n\t\t\t\tHere are nine home treatments you can use to alleviate your shortness of breath:\n\t\t\t\t1) Sitting forward\n\t\t\t\t2) sitting forward supported by a table\n\t\t\t\t3) stand with supported back\n\t\t\t\t4) sleeping in a relaxed position\n\t\t\t\t5) diaphragmatic breathing\n\n");
        else if(a[j] == 5)
            printf("\t\t\t\tCURE FOR JOINT OR MUSCLE PAINS : It may help to use topical pain relievers or \n\t\t\t\ttake non-steroidal anti-inflammatory drugs to reduce pain, swelling, and inflammation.\n\t\t\t\tStay physically active and follow a fitness program focusing on moderate exercise.\n\t\t\t\tStretch before exercising to maintain a good range of motion in your joints.\n\t\t\t\tKeep your body weight within a healthy range. This will lessen stress on the joints.\n\n");
        else if(a[j] == 6)
            printf("\t\t\t\tCURE FOR SORE THROAT : Rest and hydration\n\t\t\t\tOver the counter pain relievers\n\t\t\t\tGargling with salt water\n\t\t\t\tsucking on ice chips or lozenges\n\t\t\t\tpurified and humidified air\n\n");
        else if(a[j] == 7)
            printf("\t\t\t\tCURE FOR HEADACHE : Massage your head\n\t\t\t\tPractice Breathing exercises\n\t\t\t\tStay hydrated\n\t\t\t\tHave Good sleep\n\t\t\t\tHave Sip soothing teas\n\n");
        else if(a[j] == 8)
            printf("\t\t\t\tCURE FOR CHILLS : Layering clothes or getting to a warm place can make cold chills go away. \n\t\t\t\tYou can also drink hot chocolate, coffee or tea to raise your internal body temperature.\n\t\t\t\tIf an illness, infection or another health problem causes chills, treating the condition should get rid of the symptom.\n\t\t\t\tTreatments vary depending on the underlying cause.\n\n");
        else if(a[j] == 9)
            printf("\t\t\t\tCURE FOR NAUSEA OR VOMITTING : Try deep breathing\n\t\t\t\tEat bland crackers\n\t\t\t\tWrist acupressure\n\t\t\t\tDrink more fluids\n\t\t\t\tTry ginger, fennel or cloves\n\t\t\t\tIf these does not work, use medications to stop vomitting\n\n");
        else if(a[j] == 10)
            printf("\t\t\t\tCURE FOR NASAL CONGESTION : Use a humidifier or vaporizer.\n\t\t\t\tTake long showers or breathe in steam from a pot of warm (but not too hot) water.\n\t\t\t\tDrink lots of fluids.\n\t\t\t\tUse a nasal saline spray.\n\t\t\t\tTry a Neti pot, nasal irrigator, or bulb syringe.\n\t\t\t\tPlace a warm, wet towel on your face\n\n");
        else if(a[j] == 11)
            printf("\t\t\t\tCURE FOR DIARRHEA : Drink plenty of clear liquids\n\t\t\t\tAdd semisolid and low-fiber foods\n\t\t\t\tAvoid dairy products and high-fiber foods\n\t\t\t\tIf this does not work, Use anti-diarrheal medications\n\n");

    }
    printf("\n\n\t\t\t\tYOUR HAVE %.2f PERCENT OF COVID SYMPTOMS\n\n\t\t\t\tSO STAY SAFE, STAY STRONG AND TAKE NECESSARY PRECAUTIONS\n\n\n",per);

}
void pincode()
{
        system("cls");
    printf("\n\n\t\t\t===================================================================================================");
      printf("\n\t\t\t================================ Vaccination Location Via Pin_Code ================================");
      printf("\n\t\t\t===================================================================================================");
          printf("\n\n\t\t\t\tEnter the Pincode:");
    int pin ;
    scanf("\t%d",&pin );
    if(pin == 505209)
    {
        printf("\t\t\t\tYour are chosen area is Godavarikahani\n\t\t\t\t");
        printf (" vaccinaction centers are degree college , zphs,uphc addaguntapally");
    }
    else if(pin == 500001||pin == 500002||pin ==500003||pin == 500004||pin == 500005||pin == 500006||pin == 500007||pin == 500008||pin == 500012||pin == 500013||pin == 500015||pin == 500016||pin == 500017||pin == 500018||pin == 500020||pin == 500022||pin ==500023||pin ==500024||pin == 500025||pin == 500026||pin == 500027||pin == 500028||pin == 500029||pin == 500030||pin == 500031||pin == 500033||pin == 500034||pin == 500035||pin == 500036||pin == 500038||pin == 500039||pin == 500040||pin == 500041||pin == 500044||pin ==500044||pin == 500048||pin == 500051||pin ==500052||pin ==500053||pin ==500057||pin ==500058||pin == 500059||pin ==500060||pin ==500061||pin ==500062||pin ==500063||pin ==500064||pin ==500065||pin ==500066||pin ==500067||pin == 500068||pin ==500069||pin ==500070||pin ==500071||pin ==500073||pin ==500074||pin ==500076||pin ==500077||pin ==500079||pin ==500080||pin ==500082||pin ==500085||pin ==500081||pin ==500095||pin ==500011||pin ==500096||pin ==500009)
    {
        printf("\t\t\t\tYour are chosen area is Hyderabad\n\t\t\t\t");
         printf("vaccination centers are : \n\t\t\t\tGOVT. AYUR HOSPITAL\n\t\t\t\tNATURE CURE HOSPITAL\n\t\t\t\tElkathurthyPHC\n\t\t\t\tAH MAlakpet\n\t\t\t\tAH Nampally\n\t\t\t\tAH Golconda\n\t\t\t\tUPHC Borabanda\n\t\t\t\tUPHC Banjarahills\n\t\t\t\tUPHC Begum Bazar\n\t\t\t\tUPHC Nampally\n\t\t\t\tUPHC Niloufer\n\t\t\t\tUPHCBowenpally\n\t\t\t\t");
    }
    else if(pin == 506143||pin ==506144||pin ==506145||pin ==506146||pin ==506167||pin ==506175||pin ==506201||pin ==506221||pin == 506222||pin ==506224||pin == 506244||pin ==506252||pin ==506301||pin ==506302||pin ==506313||pin ==506316||pin ==4506367||pin ==508277)
    {
         printf("\t\t\t\tYour are chosen WARANGAL URBAN district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDeshaipet UPHC\n\t\t\t\tDharmasagar PHC\n\t\t\t\tElkathurthyPHC\n\t\t\t\tGMR Gardens Bheemaram\n\t\t\t\tHasanparthy Phc\n\t\t\t\tKASHIBUGGA UPHC\n\t\t\t\tKamalapur PHC\n\t\t\t\tPaidipally PHC\n\t\t\t\tPochammakunta UPHC\n\t\t\t\tUPHC Bodagutta\n\t\t\t\tInavole PHC\n\t\t\t\tWaddepally UPHC\n\t\t\t\t");
    }
    else if(pin == 502109||pin ==502110||pin ==502117||pin ==502113||pin ==502115||pin ==502130||pin ==502381||pin == 502303||pin ==502302||pin ==502125||pin ==502331||pin ==502301||pin ==502290||pin ==502269||pin ==502271||pin ==502334||pin ==502335||pin ==502336||pin ==502313||pin == 502255||pin ==502316||pin ==502314||pin ==502270||pin ==502102||pin ==502248||pin ==502101||pin ==502247||pin ==502225||pin ==502107)
    {
           printf("\t\t\t\tYour are chosen MEDAK district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Medak\n\t\t\t\tCHC Toopran\n\t\t\t\tCHC Ramayanpet\n\t\t\t\tCHC Narsapur\n\t\t\t\tPHC Alladurg\n\t\t\t\tPHC DongalDaramaram\n\t\t\t\tPHC Yeldurthy\n\t\t\t\tPHC Shankarampet\n\t\t\t\tPHC Shivampet\n\t\t\t\t");
    }
    else if(pin == 508001||pin ==508002||pin ==508004||pin ==508101||pin ==508114||pin ==508202||pin ==508205||pin ==508207||pin ==508210||pin ==508211||pin ==508217||pin ==508243||pin ==508244||pin ==508245||pin ==508247||pin ==508248||pin ==508250||pin ==508253||pin ==508254||pin ==508255||pin ==508256||pin ==508257||pin ==508258||pin ==508266||pin ==508278||pin ==508280||pin ==508355||pin ==508373||pin ==508374||pin ==508377)
    {

     printf("\t\t\t\tYour are chosen NALGONDA district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tUPHC Bagarugadda UPHC\n\t\t\t\tAH Miryalguda\n\t\t\t\tAH Nagarjunasagar\n\t\t\t\tDH Nalgonda\n\t\t\t\tMCH Nalgonda \n\t\t\t\tKASHIBUGGA UPHC\n\t\t\t\tCHC Deverkonda\n\t\t\t\tPaidipally PHC\n\t\t\t\tPHC Kattangur\n\t\t\t\tMCH Nalgonda\n\t\t\t\tPHC Thipparthy\n\t\t\t\tPHC Ramaulabanda\n\t\t\t\t");
    }
    else if(pin == 509103||pin ==509235||pin ==509206||pin ==509380||pin ==509120||pin ==509105||pin ==509104||pin ==509110||pin ==509381||pin ==509130||pin ==509131||pin ==509125||pin ==509216||pin ==509409||pin ==509410)
    {
        printf("\t\t\t\tYour are chosen WANAPARTHY district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Revally\n\t\t\t\tDH Wanaparthy\n\t\t\t\tUPHC Peerla Gutta\n\t\t\t\tPHC Ghanpur\n\t\t\t\tPHC PANGAL\n\t\t\t\tPHC Apparala\n\t\t\t\tPHC Peddamandadi\n\t\t\t\tUPHC Gandhinagar\n\t\t\t\tPHC Srirangapur\n\t\t\t\t");
    }
    else
    {
        pincodech();
    }
}
void pincodech()
{
system("cls");
    printf("\n\n\t\t\t===================================================================================================");
      printf("\n\t\t\t================================ Vaccination Location Via Pin_Code ================================");
      printf("\n\t\t\t===================================================================================================");
         printf("\n\n\t\t\t\tEnter the VALID PIN_CODE");
          printf("\n\n\t\t\t\tEnter the pincode:");
    int pin ;
    scanf("\t%d",&pin );
    if(pin == 505209)
    {
        printf("\t\t\t\tYour are chosen area is Godavarikahani\n\t\t\t\t");
        printf (" vaccinaction centers are degree college , zphs,uphc addaguntapally");
    }
    else if(pin == 500001||pin == 500002||pin ==500003||pin == 500004||pin == 500005||pin == 500006||pin == 500007||pin == 500008||pin == 500012||pin == 500013||pin == 500015||pin == 500016||pin == 500017||pin == 500018||pin == 500020||pin == 500022||pin ==500023||pin ==500024||pin == 500025||pin == 500026||pin == 500027||pin == 500028||pin == 500029||pin == 500030||pin == 500031||pin == 500033||pin == 500034||pin == 500035||pin == 500036||pin == 500038||pin == 500039||pin == 500040||pin == 500041||pin == 500044||pin ==500044||pin == 500048||pin == 500051||pin ==500052||pin ==500053||pin ==500057||pin ==500058||pin == 500059||pin ==500060||pin ==500061||pin ==500062||pin ==500063||pin ==500064||pin ==500065||pin ==500066||pin ==500067||pin == 500068||pin ==500069||pin ==500070||pin ==500071||pin ==500073||pin ==500074||pin ==500076||pin ==500077||pin ==500079||pin ==500080||pin ==500082||pin ==500085||pin ==500081||pin ==500095||pin ==500011||pin ==500096||pin ==500009)
    {
        printf("\t\t\t\tYour are chosen area is Hyderabad\n\t\t\t\t");
         printf("vaccination centers are : \n\t\t\t\tGOVT. AYUR HOSPITAL\n\t\t\t\tNATURE CURE HOSPITAL\n\t\t\t\tElkathurthyPHC\n\t\t\t\tAH MAlakpet\n\t\t\t\tAH Nampally\n\t\t\t\tAH Golconda\n\t\t\t\tUPHC Borabanda\n\t\t\t\tUPHC Banjarahills\n\t\t\t\tUPHC Begum Bazar\n\t\t\t\tUPHC Nampally\n\t\t\t\tUPHC Niloufer\n\t\t\t\tUPHCBowenpally\n\t\t\t\t");
    }
    else if(pin == 506143||pin ==506144||pin ==506145||pin ==506146||pin ==506167||pin ==506175||pin ==506201||pin ==506221||pin == 506222||pin ==506224||pin == 506244||pin ==506252||pin ==506301||pin ==506302||pin ==506313||pin ==506316||pin ==4506367||pin ==508277)
    {
         printf("\t\t\t\tYour are chosen WARANGAL URBAN district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDeshaipet UPHC\n\t\t\t\tDharmasagar PHC\n\t\t\t\tElkathurthyPHC\n\t\t\t\tGMR Gardens Bheemaram\n\t\t\t\tHasanparthy Phc\n\t\t\t\tKASHIBUGGA UPHC\n\t\t\t\tKamalapur PHC\n\t\t\t\tPaidipally PHC\n\t\t\t\tPochammakunta UPHC\n\t\t\t\tUPHC Bodagutta\n\t\t\t\tInavole PHC\n\t\t\t\tWaddepally UPHC\n\t\t\t\t");
    }
    else if(pin == 502109||pin ==502110||pin ==502117||pin ==502113||pin ==502115||pin ==502130||pin ==502381||pin == 502303||pin ==502302||pin ==502125||pin ==502331||pin ==502301||pin ==502290||pin ==502269||pin ==502271||pin ==502334||pin ==502335||pin ==502336||pin ==502313||pin == 502255||pin ==502316||pin ==502314||pin ==502270||pin ==502102||pin ==502248||pin ==502101||pin ==502247||pin ==502225||pin ==502107)
    {
           printf("\t\t\t\tYour are chosen MEDAK district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Medak\n\t\t\t\tCHC Toopran\n\t\t\t\tCHC Ramayanpet\n\t\t\t\tCHC Narsapur\n\t\t\t\tPHC Alladurg\n\t\t\t\tPHC DongalDaramaram\n\t\t\t\tPHC Yeldurthy\n\t\t\t\tPHC Shankarampet\n\t\t\t\tPHC Shivampet\n\t\t\t\t");
    }
    else if(pin == 508001||pin ==508002||pin ==508004||pin ==508101||pin ==508114||pin ==508202||pin ==508205||pin ==508207||pin ==508210||pin ==508211||pin ==508217||pin ==508243||pin ==508244||pin ==508245||pin ==508247||pin ==508248||pin ==508250||pin ==508253||pin ==508254||pin ==508255||pin ==508256||pin ==508257||pin ==508258||pin ==508266||pin ==508278||pin ==508280||pin ==508355||pin ==508373||pin ==508374||pin ==508377)
    {

     printf("\t\t\t\tYour are chosen NALGONDA district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tUPHC Bagarugadda UPHC\n\t\t\t\tAH Miryalguda\n\t\t\t\tAH Nagarjunasagar\n\t\t\t\tDH Nalgonda\n\t\t\t\tMCH Nalgonda \n\t\t\t\tKASHIBUGGA UPHC\n\t\t\t\tCHC Deverkonda\n\t\t\t\tPaidipally PHC\n\t\t\t\tPHC Kattangur\n\t\t\t\tMCH Nalgonda\n\t\t\t\tPHC Thipparthy\n\t\t\t\tPHC Ramaulabanda\n\t\t\t\t");
    }
    else if(pin == 509103||pin ==509235||pin ==509206||pin ==509380||pin ==509120||pin ==509105||pin ==509104||pin ==509110||pin ==509381||pin ==509130||pin ==509131||pin ==509125||pin ==509216||pin ==509409||pin ==509410)
    {
        printf("\t\t\t\tYour are chosen WANAPARTHY district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Revally\n\t\t\t\tDH Wanaparthy\n\t\t\t\tUPHC Peerla Gutta\n\t\t\t\tPHC Ghanpur\n\t\t\t\tPHC PANGAL\n\t\t\t\tPHC Apparala\n\t\t\t\tPHC Peddamandadi\n\t\t\t\tUPHC Gandhinagar\n\t\t\t\tPHC Srirangapur\n\t\t\t\t");
    }
    else
    {
        pincodech();
    }
}
void apdistrict()
{
    int ds = 0,p;
    while(ds != 1)
    {
     system("cls");
    printf("\n\n\t\t\t============================================================================================");
    printf("\n\t\t\t================================ Vaccination Location IN AP ================================");
    printf("\n\t\t\t============================================================================================\n\n");
   printf(" \t\t\t\tANDHRA PRADESH STATE \n\t\t\t district(code):\n\t\t\t\tANANTAPUR(1) \n\t\t\t\tCHITOOR(2)\n\t\t\t\tEAST GODAVARI(3)\n\t\t\t\tGUNTUR (4)\n\t\t\t\tKADAPA(5)\n\t\t\t\tKRISHNA (6)\n\t\t\t\tKARNOOL(7)\n\t\t\t\tNELLORE(8)\n\t\t\t\tPRAKASAM(9)\n\t\t\t\tSRIKAKULAM(10)\n\t\t\t\tVISHAKAPATNAM(11)\n\t\t\t\tVizianagaram(12)\n\t\t\t\tWEST GODAVARI(13)\n");
        printf("\n\t\t\t\t Enter the district code : ");
    int code ;
    scanf("\t\t\t\t%d", &code );
         system("cls");
    printf("\n\n\t\t\t============================================================================================");
    printf("\n\t\t\t================================ Vaccination Location IN AP ================================");
    printf("\n\t\t\t============================================================================================\n\n");
    if(code >13 || code<1)
    {
        printf("\t\t\t\tinvalid input");

    }
    if (code == 1)
    {
        printf("\t\t\t\tYour are chosen ANANTAPUR district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tJeevana Jyothi Hospital \n\t\t\t\tAASHA HOSPITAL \n\t\t\t\tABHAYA KIDNEY CARE MULITYSPECIALITY HOSPITAL  \n\t\t\t\tAMEER NURSING HOME   \n\t\t\t\tBALAJI MULTISPECIALITY HOSPITAL \n\t\t\t\tAnantapur GH \n\t\t\t\tAtmakur phc\n\t\t\t\tBethapalli PHC\n\t\t\t\tAmarapuram\n ");
    }
      if (code == 2)
    {
        printf("\t\t\t\tYour are chosen CHITOOR district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tPunganur CHC \n\t\t\t\tRAMASAMUDRAM PHC\n\t\t\t\tKAMMAPALLE PHC\n\t\t\t\tSANTHIPURAM PHC \n\t\t\t\tSOMALA PHC \n\t\t\t\t");
    }
     if (code == 3)
    {
        printf("\t\t\t\tYour are chosen EAST GODAVARI district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tMANDAPETA CHC \n\t\t\t\tGidajam P.H.C \n\t\t\t\tSAKHINETIPALLI PHC   \n\t\t\t\tDuppalapalem PHC   \n\t\t\t\tYellavaram PHC \n\t\t\t\tNagulapalli PHC \n\t\t\t\tDUGGUDURU PHC\n\t\t\t\t ");
    }
     if (code == 4)
    {
        printf("\t\t\t\tYour are chosen  GUNTUR district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tPonnur CHC \n\t\t\t\tChebrole PHC  \n\t\t\t\tKolluru PHC  \n\t\t\t\tPedakakani PHC   \n\t\t\t\tPonnur PHC \n\t\t\t\tTenaliPHC  \n\t\t\t\t ");
    }
     if (code == 5)
    {
        printf("\t\t\t\tYour are chosen KADAPA district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\t Badvel,P.H.C \n\t\t\t\tCuddapah,P.H.C \n\t\t\t\tDuvvur,P.H.C  \n\t\t\t\tGopavaram,P.H.C   \n\t\t\t\tProddutur,P.H.C \n\t\t\t\tPulivendla,P.H.C \n\t\t\t\tRAYAVARAM (P.H.C)\n\t\t\t\tSurabhi P.H.C\n\t\t\t\tTHOTTIGARIPALLI (P.H.C)\n \t\t\t\t");
    }
     if (code == 6)
    {
        printf("\t\t\t\tYour are chosen KRISHNA  district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tGANNAVARAM CHC  \n\t\t\t\tVEERULAPADU PHC  \n\t\t\t\tCHEVENDRA PALEM (P.H.C)  \n\t\t\t\tPURITIGADDA (P.H.C)  \n\t\t\t\tAVANIGADDA PHC \n\t\t\t\tBUCHAVARAM (P.H.C)\n\t\t\t\tCHANDARLA (P.H.C)\n\t\t\t\tCHINTALAPADU (P.H.C)\n\t\t\t\tCHOUTAPALLY (P.H.C)\n\t\t\t\t ");
    }
    if (code == 7)
    {
        printf("\t\t\t\tYour are chosen KARNOOL district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tALURU CHC \n\t\t\t\tASPARI PHC  \n\t\t\t\tKATTALACRVU PHC  \n\t\t\t\tTALAMUDIPI PHC  \n\t\t\t\tW-KOTHAPALLI PHC\n\t\t\t\tHALAHARAVI PHC  \n\t\t\t\tHUSSAINAPURAM PHC\n\t\t\t\tJALADURGAM PHC\n\t\t\t\tJILLELA PHC\n\t\t\t\t ");
    }
     if (code == 8)
    {
        printf("\t\t\t\tYour are chosen NELLORE district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tBuchireddipalem P.H.C \n\t\t\t\tKovvurupalli P.H.C \n\t\t\t\tNellore P.H.C \n\t\t\t\tTUMMALA PENTA P.H.C   \n\t\t\t\tVarikuntapadu P.H.C \n\t\t\t\tAnantapur GH \n\t\t\t\tVINJAMUR P.H.C\n\t\t\t\tTurimala P.H.C\n\t\t\t\tRAMATHEARTHAM P.H.C\n \t\t\t\t");
    }
         if (code == 9)
    {
        printf("\t\t\t\tYour are chosen PRAKASAM district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tCHIRALA-AH\n\t\t\t\tCUMBUM-CHC \n\t\t\t\tGIDDALURU(CHC) \n\t\t\t\tGUNTUPALLI (P.H.C)   \n\t\t\t\tHanumanthunipadu,P.H.C \n\t\t\t\tKanigiri,P.H.C\n\t\t\t\tGUNTUPALLI (P.H.C)\n\t\t\t\tEEPURUPALEM\n\t\t\t\t ");
    }
         if (code == 11)
    {
        printf("\t\t\t\tYour are chosen VISHAKAPATNAM district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tJERRILA PHC \n\t\t\t\tMadugula PHC\n\t\t\t\tAtchutapuram PHC  \n\t\t\t\tRavikamatham PHC  \n\t\t\t\tGEMMILI PHC \n\t\t\t\tSWARANABHARATHI PHC \n\t\t\t\tCHINNAVALTHERU UHC\n\t\t\t\tARILOWA U.H.C\n\t\t\t\t ");
    }
         if (code == 10)
    {
        printf("\t\t\t\tYour are chosen SRIKAKULAM district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tGUPPEDUPETA, P.H.C \n\t\t\t\tPONDURU, P.H.C \n\t\t\t\tAMADALAVALASA, P.H.C\n\t\t\t\tPalasa Kaibugga P.H.C   \n\t\t\t\tPONNADA, P.H.C \n\t\t\t\tTADIVALASA PHC \n\t\t\t\tSIRIPURAM, P.H.C\n\t\t\t\tRENTIKOTA, P.H.C\n \t\t\t\t");
    }
         if (code == 12)
    {
        printf("\t\t\t\tYour are chosen Vizianagaram district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tBADANGI P.H.C \n\t\t\t\tAlamanda P.H.C \n\t\t\t\tBONDAPALLI(G) P.H.C \n\t\t\t\tCHALLAPETA P.H.C  \n\t\t\t\tDEVUPALLI P.H.C \n\t\t\t\tDOKISEELA PHC\n\t\t\t\tG.N.PETA PHC\n\t\t\t\tGALAVILA P.H.C\n\t\t\t\t ");
    }
         if (code == 13)
    {
        printf("\t\t\t\tYour are chosen WEST GODHAVARI district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tNidavole P.H.C \n\t\t\t\tTANUKU(P.H.C) \n\t\t\t\tKalla PHC\n\t\t\t\tMogalthuru PHC   \n\t\t\t\tL.B.Cherla PHC \n\t\t\t\tGopalapuram\n\t\t\t\tVemavaram PHC \n\t\t\t\tMogalthuru PHC \n \t\t\t\t");
    }
    printf("\n\n\t\t\t\tIf U want to Check Another District Enter [0] else Enter [1] : ");
    scanf("%d",&p);
    ds = p;
    }
}
void tsdistrict()
{
    int ds = 0,p;
    while(ds != 1)
    {
     system("cls");
    printf("\n\n\t\t\t============================================================================================");
    printf("\n\t\t\t================================ Vaccination Location IN TS ================================");
    printf("\n\t\t\t============================================================================================\n\n");

   printf("\t\t\t\t TELANGANA STATE \n \t\t\t\tdistrict(code):\n\t\t\t\tADILABAD (1) \n\t\t\t\tKARIMNAGAR (2)  \n\t\t\t\tWARANGAL URBAN  (3)  \n\t\t\t\tKHAMMAM (4) \n\t\t\t\tNALGONDA (5) \n\t\t\t\tMAHABOOBNAGAR (6) \n\t\t\t\tRANGA REDDY(7) \n\t\t\t\tMEDCHAL (8) \n\t\t\t\tHYDERABAD (9) \n\t\t\t\tSANGAREDDY	 (10)\n\t\t\t\tNIZAMABAD(11) \n\t\t\t\tKAMAREDDY (12) \n\t\t\t\tNIRMAL (13) \n\t\t\t\tMANCHERIYAL(14) \n\t\t\t\tKOMRAMBHEEM(15) \n\t\t\t\tJAGITYAL(16) \n\t\t\t\tPEDDAPALLI(17) \n\t\t\t\tRAJANNA (18) \n\t\t\t\tWARANGAL RURAL(19)  \n\t\t\t\tJAYASHANKAR (20)\n\t\t\t\tMAHABUBABAD(21) \n\t\t\t\tJANGOAN(22) \n\t\t\t\tBHADRADRI(23) \n\t\t\t\tSURYAPET(24) \n\t\t\t\tYADADRI(25) \n\t\t\t\tNAGARKURNOOL(26) \n\t\t\t\tWANAPARTHY(27)\n\t\t\t\tJOGULAMBA GADWAL(28)\n\t\t\t\tVIKARABAD(29) \n\t\t\t\tMEDAK(30) \n\t\t\t\tSIDDIPET(31) \n");
    printf("\n\t\t\t\tEnter the district code : ");
    int code ;
    scanf("\t\t\t\t%d", &code );
system("cls");
  printf("\n\n\t\t\t============================================================================================");
    printf("\n\t\t\t================================ Vaccination Location IN TS ================================");
    printf("\n\t\t\t============================================================================================\n\n");
      if(code >31 || code<1)
    {
        printf("invalid input");

    }
    if (code == 1)
    {
        printf("\t\t\t\tYour are chosen ADILABAD district \n\t\t\t\t");
        printf("vaccination centres are : \n\t\t\t\tTamsi PHC \n\t\t\t\tGadigida PHC \n\t\t\t\tBazarhatoor PHC \n\t\t\t\tGimma PHC  \n\t\t\t\tHasnapur PHC \n\t\t\t\tBheempur PHC \n\t\t\t\tBela PHC\n \t\t\t\t");
    }
    if (code == 2)
    {
        printf("\t\t\t\tYour are chosen KARIMNAGAR district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tkattarampur UPHC \n\t\t\t\tShankarapatnam PHC \n\t\t\t\tHuzurabad PHC \n\t\t\t\tVavilala PHC  \n\t\t\t\tsaidapur PHC \n\t\t\t\tManakondur PHC \n\t\t\t\tSapthagiricolony UPHC\n\t\t\t\tTimmapur PHC \n\t\t\t\tRamadugu PHC \n\t\t\t\tKarimnagar District Hospital \n\t\t\t\tKothapally PHC \n\t\t\t\tVeenavanka PHC \n\t\t\t\tJammikunta CHC \n\t\t\t\tEllandakunta PHC \n\t\t\t\t");
    }
    if (code == 3)
    {
        printf("\t\t\t\tYour are chosen WARANGAL URBAN district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDeshaipet UPHC\n\t\t\t\tDharmasagar PHC\n\t\t\t\tElkathurthyPHC\n\t\t\t\tGMR Gardens Bheemaram\n\t\t\t\tHasanparthy Phc\n\t\t\t\tKASHIBUGGA UPHC\n\t\t\t\tKamalapur PHC\n\t\t\t\tPaidipally PHC\n\t\t\t\tPochammakunta UPHC\n\t\t\t\tUPHC Bodagutta\n\t\t\t\tInavole PHC\n\t\t\t\tWaddepally UPHC\n\t\t\t\t");
    }
    if (code == 4)
    {
        printf("\t\t\t\tYour are chosen KHAMMAM  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAROGYA MULTISPECIALITY HOSPITAL\n\t\t\t\tAYU HOSPITA \n\t\t\t\tMAMATHA GENERAL AND SUPERSPECIALITY hospital\n\t\t\t\tMEGHANA HOSPITAL\n\t\t\t\tNEW LIFE EMERGENCY AND MULTISPECIALITY\n\t\t\t\tNOVA CARE HOSPITAL\n\t\t\t\tPRASANTHI HOSPITAL\n\t\t\t\tSAMATHA HOSPITAL\n\t\t\t\tSANKALPA CSTAR HOSPITAL\n\t\t\t\tTELANGANA HOSPITAL\n\t\t\t\tSRI BALAJI ASIAN HOSPITAL\n\t\t\t\t");
    }
    if (code == 5)
    {
        printf("\t\t\t\tYour are chosen NALGONDA district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tUPHC Bagarugadda UPHC\n\t\t\t\tAH Miryalguda\n\t\t\t\tAH Nagarjunasagar\n\t\t\t\tDH Nalgonda\n\t\t\t\tMCH Nalgonda \n\t\t\t\tKASHIBUGGA UPHC\n\t\t\t\tCHC Deverkonda\n\t\t\t\tPaidipally PHC\n\t\t\t\tPHC Kattangur\n\t\t\t\tMCH Nalgonda\n\t\t\t\tPHC Thipparthy\n\t\t\t\tPHC Ramaulabanda\n\t\t\t\t");
    }
    if (code == 6)
    {
        printf("\t\t\t\tYour are chosen MAHABOOBNAGAR district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Koilkonda\n\t\t\t\tAH Badepally / Jadcherla\n\t\t\t\tMed College Govt General Hospital\n\t\t\t\tUPHC Pathapalmoor\n\t\t\t\tUPHC Mothinagar\n\t\t\t\tPHC Midjil\n\t\t\t\tPHC Nawabpet\n\t\t\t\tPHC Addakal\n\t\t\t\tPHC ChinnaChintakunta\n\t\t\t\tPHC Hanwada\n\t\t\t\tPHC Balanagar\n\t\t\t\t");
    }

      if (code == 7)
    {
        printf("\t\t\t\tYour are chosen RANGAREDDY district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Hayathnagar\n\t\t\t\tCHC Rajendranagar\n\t\t\t\tAH Shadnagar\n\t\t\t\tCHC Shamshabad\n\t\t\t\tCHC Chevella\n\t\t\t\tCHC Ibrahimpatnam\n\t\t\t\tCHC Maheshwaram\n\t\t\t\tPHC Moinabad\n\t\t\t\tPHC GattuIppalpally\n\t\t\t\tCHC Maheshwaram\n\t\t\t\tPHC Tangutoor\n\t\t\t\tPHC Raidurga\n\t\t\t\t");
    }
      if (code == 8)
    {
        printf("\t\t\t\tYour are chosen MEDCHAL district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Ghatkesar\n\t\t\t\tBD-BJR Nagar\n\t\t\t\tBD-Ambedhkarnagar,\n\t\t\t\tBD-Dilkushnagar, Kukatpally\n\t\t\t\tBD-Jeedimetla\n\t\t\t\tBD-Singamcheruvu, Kapra\n\t\t\t\tBD-Errakunta\n\t\t\t\tPaidipally PHC\n\t\t\t\tBD-Nuvulabanda\n\t\t\t\tUPHC-Nagole\n\t\t\t\tPHC-Jawaharnagar\n\t\t\t\t");
    }
      if (code == 9)
    {
        printf("\t\t\t\tYour are chosen HYDERABAD  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tGOVT. AYUR HOSPITAL\n\t\t\t\tNATURE CURE HOSPITAL\n\t\t\t\tElkathurthyPHC\n\t\t\t\tAH MAlakpet\n\t\t\t\tAH Nampally\n\t\t\t\tAH Golconda\n\t\t\t\tUPHC Borabanda\n\t\t\t\tUPHC Banjarahills\n\t\t\t\tUPHC Begum Bazar\n\t\t\t\tUPHC Nampally\n\t\t\t\tUPHC Niloufer\n\t\t\t\tUPHCBowenpally\n\t\t\t\t");
    }
      if (code == 10)
    {
        printf("\t\t\t\tYour are chosen SANGAREDDY  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Jogipet\n\t\t\t\tCHC Koheer\n\t\t\t\tCHC Sadashivpet\n\t\t\t\tAH Zaheerabad\n\t\t\t\tMCH Sangareddy\n\t\t\t\tDH Sanga Reddy\n\t\t\t\tCHC Sadashivpet\n\t\t\t\tPHC Jinnaram\n\t\t\t\tPHC Bhanoor\n\t\t\t\tPHC Mirzapur\n\t\t\t\tPHC Mogudampally\n\t\t\t\tUPHC Indira Colony\n\t\t\t\t");
    }
    if (code == 11)
    {
        printf("\t\t\t\tYour are chosen NIZAMABAD district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Armoor\n\t\t\t\tCHC Balkonda\n\t\t\t\tCHC Kotagiri\n\t\t\t\tCHC Varni\n\t\t\t\tCHC Navipet\n\t\t\t\tCHC Morthad\n\t\t\t\tCHC Dharpally\n\t\t\t\tCHC Dichpally\n\t\t\t\tMed College Govt General Hospital\n\t\t\t\tPHC Kammarpally\n\t\t\t\tPHC Velpur\n\t\t\t\tPHC Yergatla\n\t\t\t\t");
    }
    if (code == 12)
    {
        printf("\t\t\t\tYour are chosen KAMAREDDY  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Banswada\n\t\t\t\tCHC Yellareddy\n\t\t\t\tCHC Bichkunda\n\t\t\t\tCHC Domakonda\n\t\t\t\tCHC Madnur\n\t\t\t\tCHC Pitlam\n\t\t\t\tDH Kamareddy\n\t\t\t\tPHC Nizamsagar\n\t\t\t\tPHC Nizamsagar\n\t\t\t\tUPHC Rajeevnagar\n\t\t\t\tPHC Devanpally\n\t\t\t\tPHC Uthnoor\n\t\t\t\t");
    }
    if (code == 14)
    {
        printf("\t\t\t\tYour are chosen MANCHERIYAL  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Bellampally\n\t\t\t\tCHC Chennur\n\t\t\t\tCHC Luxettipet\n\t\t\t\tAH Mancherial\n\t\t\t\tPHC Mandamarri\n\t\t\t\tPHC Thallagurajala\n\t\t\t\tPHC Kasipet\n\t\t\t\tUPHC Mancherial\n\t\t\t\t");
    }
    if (code == 13)
    {
        printf("\t\t\t\tYour are chosen NIRMAL  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tPHC Basar\n\t\t\t\tAH Bhainsa\n\t\t\t\tCHC Khanapur\n\t\t\t\tCHC Mudhole\n\t\t\t\tMCH Nirmal\n\t\t\t\tPHC Tanoor\n\t\t\t\tDH Nirmal\n\t\t\t\tPHC Narsapur G\n\t\t\t\tPHC Sarangapur\n\t\t\t\tPHC Velmalbopparam\n \t\t\t\tPHC Dasturabad\n\t\t\t\tPHC Kaddam\n\t\t\t\t");
    }
    if (code == 15)
    {
        printf("\t\t\t\tYour are chosen KOMRAMBHEEM  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Asifabad\n\t\t\t\tCHC Kagaznagar\n\t\t\t\tUPHC Sirsilk Colony\n\t\t\t\tPHC Dahegaon\n\t\t\t\tUPHC NavegoamBasthi\n\t\t\t\tPHC Penchikalpet\n\t\t\t\tPHC Batpally\n\t\t\t\t");
    }
    if (code == 16)
    {
        printf("\t\t\t\tYour are chosen JAGITYAL district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Jagityal\n\t\t\t\tCHC Metpally\n\t\t\t\tCHC Korutla\n\t\t\t\tPHC Pegadapalli\n\t\t\t\tPHC Mallapur\n\t\t\t\tPHC Medipalli\n\t\t\t\tUPHC Mothewada\n\t\t\t\tPHC Dharmapuri\n\t\t\t\tPHC Mallapur\n\t\t\t\tPHC Ambaripet\n\t\t\t\tPHC Velgatur\n\t\t\t\t");
    }
    if (code == 17)
    {
        printf("\t\t\t\tYour are chosen  PEDDAPALLI  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Ramagundam\n\t\t\t\tCHC Manthani\n\t\t\t\tDH Peddapally\n\t\t\t\tPHC Ramagundam\n\t\t\t\tCHC Sultanabad\n\t\t\t\tUPHC Addaguntapally\n\t\t\t\tPHC Mutharam\n\t\t\t\tPHC Raghavapur\n\t\t\t\tUPHC Laxmipur\n\t\t\t\tUPHC Allur\n\t\t\t\t");
    }
    if (code == 18)
    {
        printf("\t\t\t\tYour are chosen RAJANNA SIRCILLA  district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Sircilla\n\t\t\t\tPHC Boinpalli\n\t\t\t\tPHC Lingannapet\n\t\t\t\tPHC Konaraopet\n\t\t\t\tPHC Ellanthakunta\n\t\t\t\tPHC Nerella\n\t\t\t\tPHC Yellareddypeta\n\t\t\t\tPHC Vemulawada\n\t\t\t\tUPHC P. Sunderaiah Nagar\n\t\t\t\tPHC Vilasagar\n\t\t\t\tPHC Lingannapet\n\t\t\t\t");
    }
     if (code == 19)
    {
        printf("\t\t\t\tYour are chosen WARANGAL RURAL district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Narasampet\n\t\t\t\tCHC Parkal\n\t\t\t\tCHC Chennaraopet\n\t\t\t\tPHC Geesygonda\n\t\t\t\tPHC Keshavapur\n\t\t\t\tCHC Wardhannapet\n\t\t\t\tPHC Nallabelly\n\t\t\t\tPHC Raiparthy\n\t\t\t\t");
    }
     if (code == 20)
    {
        printf("\t\t\t\tYour are chosen JAYASHANKAR BHUPALAPALLY  \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Bhupalapally\n\t\t\t\tCHC Chittiyal\n\t\t\t\tPHC Velishala\n\t\t\t\tPHC Maha-Mutharam\n\t\t\t\tPHC Chelpur\n\t\t\t\tPHC Regonda\n\t\t\t\tPHC Mogullapally\n\t\t\t\tPHC Azamnagar\n\t\t\t\t");
    }
     if (code == 21)
    {

        printf("\t\t\t\tYour are chosen  MAHABUBABAD district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Mahabubabad\n\t\t\t\tCHC Garla\n\t\t\t\tCHC Gudur\n\t\t\t\tPHC Thorrur\n\t\t\t\tPHC Malliyala\n\t\t\t\tPHC Uggampalli\n\t\t\t\tCHC Gudur\n\t\t\t\tPHC Dornakal\n\t\t\t\tPHC Bayyaram\n\t\t\t\tPHC Vilasagar\n\t\t\t\tPHC Kesamudram\n\t\t\t\t");
    }
     if (code == 22)
    {
        printf("\t\t\t\tYour are chosen JANGOAN  district \n\t\t\t\t");
        printf("vaccination centers are :\n\t\t\t\tDH Janagaon\n\t\t\t\tPHC Ghanpur\n\t\t\t\tPHC Ippaguda\n\t\t\t\tPHC Kodakandla\n\t\t\t\tPHC Raghunathpally\n");
    }
     if (code == 23)
    {
        printf("\t\t\t\tYour are chosen BHADRADRI KOTHAGUDEM district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Kothagudem\n\t\t\t\tAH Bhadrachalam\n\t\t\t\tCHC Ashwaraopeta\n\t\t\t\tCHC Burgampadu\n\t\t\t\tCHC Palavoncha\n\t\t\t\tCHC Yellandu\n\t\t\t\tUPHC Ramavaram\n\t\t\t\tPHC Julurupadu\n\t\t\t\tPHC Erragunta\n\t\t\t\t");
    }
     if (code == 24)
    {
        printf("\t\t\t\tYour are chosen SURYAPET district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Kodad\n\t\t\t\tGGH Suryapet\n\t\t\t\tCHC Nadigudem\n\t\t\t\tAH Huzurnagar\n\t\t\t\tPHC Arvapally\n\t\t\t\tPHC Munagala\n\t\t\t\tPHC Chilukur\n\t\t\t\tPHC Atmakur\n\t\t\t\t");
    }
     if (code == 25)
    {
        printf("\t\t\t\tYour are chosen YADADRI district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Bhongir\n\t\t\t\tCHC Alair\n\t\t\t\tCHC Ashwaraopeta\n\t\t\t\tCHC Burgampadu\n\t\t\t\tPHC Mothkur\n\t\t\t\tPHC Rajapet\n\t\t\t\tPHC Yadagirigutta\n\t\t\t\tCHC Ramannapet\n\t\t\t\t");
    }
     if (code == 26)
    {
        printf("\t\t\t\tour are chosen NAGARKURNOOL district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Nagarkurnool\n\t\t\t\tCHC Kollapur\n\t\t\t\tCHC Amrabad\n\t\t\t\tCHC Achampet\n\t\t\t\tPHC Vatavarlapally\n\t\t\t\tPHC Ambatpally\n\t\t\t\tPHC Peddakottapally\n\t\t\t\tPHC Vennacherla\n\t\t\t\t");
    }
     if (code == 27)
    {
        printf("\t\t\t\tYour are chosen WANAPARTHY district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Revally\n\t\t\t\tDH Wanaparthy\n\t\t\t\tUPHC Peerla Gutta\n\t\t\t\tPHC Ghanpur\n\t\t\t\tPHC PANGAL\n\t\t\t\tPHC Apparala\n\t\t\t\tPHC Peddamandadi\n\t\t\t\tUPHC Gandhinagar\n\t\t\t\tPHC Srirangapur\n\t\t\t\t");
    }
     if (code == 28)
    {
        printf("\t\t\t\tYour are chosen JOGULAMBA GADWALdistrict \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Gadwal\n\t\t\t\tCHC Alampur\n\t\t\t\tPHC Dharur\n\t\t\t\tPHC Kythur\n\t\t\t\tPHC Waddepally\n\t\t\t\tPHC Ieeja\n\t\t\t\tPHC Itikyal\n\t\t\t\tUPHC Vantalpet\n\t\t\t\t");
    }
     if (code == 29)
    {
        printf("\t\t\t\tYour are chosen VIKARABAD district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tCHC Pargi\n\t\t\t\tCHC Marpally\n\t\t\t\tCHC Kodangal\n\t\t\t\tDH Tandur\n\t\t\t\tCHC Vikarabad\n\t\t\t\tPHC Nawabpet\n\t\t\t\tPHC Karimpur\n\t\t\t\t");
    }
     if (code == 30)
    {
        printf("\t\t\t\tYour are chosen MEDAK district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tAH Medak\n\t\t\t\tCHC Toopran\n\t\t\t\tCHC Ramayanpet\n\t\t\t\tCHC Narsapur\n\t\t\t\tPHC Alladurg\n\t\t\t\tPHC DongalDaramaram\n\t\t\t\tPHC Yeldurthy\n\t\t\t\tPHC Shankarampet\n\t\t\t\tPHC Shivampet\n\t\t\t\t");
    }
     if (code == 31)
    {
        printf("\t\t\t\tYour are chosen SIDDIPET district \n\t\t\t\t");
        printf("vaccination centers are : \n\t\t\t\tDH Gajwel\n\t\t\t\tCHC Cheriyal\n\t\t\t\tCHC Dubbak\n\t\t\t\tMCH Siddipet\n\t\t\t\tPHC Mulug\n\t\t\t\tPHC Chintamadaka\n\t\t\t\tPHC IbrahimNagar\n\t\t\t\tPHC Kondapak\n\t\t\t\tPHC Rajagopalpet\n\t\t\t\t");
    }
     printf("\n\n\t\t\t\tIf U want to Check Another District Enter [0] else Enter [1] : ");
    scanf("%d",&p);
    ds = p;
    }
}
void Precations(user u1)
{
    system("cls");
    printf("\n\n\t\t\t=======================================================================================");
    printf("\n\t\t\t================================ PRECAUTIONS TO BE TAKEN ================================");
    printf("\n\t\t\t=========================================================================================\n\n");
    printf("\n\n\t\t\t\tHey %s ! , Kindly Follow the Below precautions to not affect by Covid-19.",u1.user_name);
    printf("\n\n\t\t\t\t 1. Do not panic!, For a normal Health problems.");
    printf("\n\t\t\t\t 2. Do not touch your face.");
    printf("\n\t\t\t\t 3. Do not stockpile on masks.");
    printf("\n\t\t\t\t 4. Do not travel unless necessary.");
    printf("\n\t\t\t\t 5. Do not go to crowded places.");
    printf("\n\t\t\t\t 6. Do not believe everything on the internet.");
    printf("\n\t\t\t\t 7. Do not seek alternative treatments.");
    printf("\n\t\t\t\t 8. Do not take antibiotics.");
    printf("\n\t\t\t\t 9. Skip the flu shot.");
    printf("\n\t\t\t\t10. Do not propagate hostility against Asians.");

}
