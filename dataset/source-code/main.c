#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <limits.h>
#include <float.h>
#include <direct.h>
typedef struct
{
/*char parameters for the player's Pregnancies,Glucose,BloodPressure,SkinThickness,Insulin,BMI,DiabetesPedigreeFunction,Age,Outcome,Pregnancies,Glucose,BloodPressure,SkinThickness,Insulin,BMI,DiabetesPedigreeFunction,Age,Outcome*/
int Pregnancies;//Number of times pregnant
int Glucose;//Plasma glucose concentration over 2 hours in an oral glucose tolerance test
int BloodPressure;//Diastolic blood pressure (mm Hg)
int SkinThickness;//Triceps skin fold thickness (mm)
int Insulin;//2-Hour serum insulin (mu U/ml)
int BMI;//Body mass index (weight in kg/(height in m)2)
int DiabetesPedigreeFunction;//Diabetes pedigree function (a function which scores likelihood of diabetes based on family history)
int Age;//Age (years)
int Outcome;//Class variable (0 if non-diabetic, 1 if diabetic)
char line;
int read;
int records;
int nonnullint64;
int nonnullfloat64;
int entries;
int range_error;
int memory_usage;
int corr;
int Diabetic;
int NonDiabetic;
} patient;
int main(void)
{
    printf("Welcome to the world of Data Science:\n" );
    printf("Lets see how to Predict Diabetes  disease\n");
    printf("Enter the file name with its type as 'filename.csv' to read the csv file only\n");
/*    may need to enter the file name with type or will read the fie directly*/
    FILE*the_file = fopen("diabetes.csv","r");
/*    Input data files are available in the read-only "../input/" directory*/
/*    Reading the csv file*/
/*array of struts for storing the patient data from the file*/
  patient patient[100];
/*      read will be used to ensure each line/record is read correctly*/
  int read=0;
/*   records will keep track of the number of person records read from the file*/
  int records=0;
  /*read all records from the file and store them into the patient array*/
    if(the_file == NULL)
        {
         perror("Unable to open the file.\n");
        }
        else;
        char line[770];
         while(fgets(line,sizeof(line),the_file))
         {
             char*token;
             token = strtok(line,",");
             while(token!= NULL)
             {
                 printf("%-12s",token);
                 token =strtok(NULL,",");
                }
         printf("\n");
/*            print out the number of records read*/
         }
       do
  {
    read = fscanf(the_file,"[,]\n",
                 &patient[records].Pregnancies,
                 &patient[records].Glucose,
                 &patient[records].BloodPressure,
                 &patient[records].SkinThickness,
                 &patient[records]. Insulin,
                 &patient[records].BMI,
                 &patient[records].DiabetesPedigreeFunction,
                 &patient[records].Age,
                 &patient[records].Outcome);
/*     if fscanf read 4 values from the file then we have successfully read in another record*/
    if (read == 4) records++;
    /* The only time that fscanf should NOT read 4 values from the file is
     when we have reached the end of the file, so if fscanf did not read in
     exactly 4 values and we are not at the end of the file, there has been
     an error (likely due to an incorrect file format) and so we exit with
     an error message and status.*/
    if (read != 4 && !feof(the_file))
    {
      printf("File format incorrect.\n");
      return 1;
    }
    /* if there was an error reading from the file exit with an error message and status*/
    if (ferror(the_file))
    {
      printf("Error reading file.\n");
      return 1;
    }
  }
  while (!feof(the_file));
  /* print out the number of records read*/
  printf("\n%d records read.\n", records);
   /*print out each of the records that was read*/
  for (int i = 0; i < records; i++)
    printf("%d %d %d %d %d %d %d %d %d\n",
           &patient[records].Pregnancies,
           &patient[records].Glucose,
           &patient[records].BloodPressure,
           &patient[records].SkinThickness,
           &patient[records]. Insulin,
           &patient[records].BMI,
           &patient[records].DiabetesPedigreeFunction,
           &patient[records].Age,
           &patient[records].Outcome);
  printf("\n");
   /*Showing the complete diabetes dataset*/
int Diabetic=1,NonDiabetic=0;
int Outcome[800];
int i;
scanf("Outcome\n");
i = 0;
while(Outcome[i]= 0)
{
    if(Outcome[i]='1')
       Diabetic++;
    else(Outcome[i]='0');
        NonDiabetic++;
    i++;
}
printf("\n number of Diabetic patient are : %d",Diabetic);
printf("\n number of NonDiabetic patient are : %d",NonDiabetic);
/*Gives the count of 1 and 0
#1 represents Diabetic
#0 reresents NonDiabetic*/
range_error :768 ; entries :767;
{
memory_usage: 54.1;
           }
            fclose(the_file);
            /*close the file as we are done working with it*/
    return 0;
    }
