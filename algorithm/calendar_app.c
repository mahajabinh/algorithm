#include<stdio.h>
int gatFirstDysofThaYear(int year){
 int day = (year*365+((year-1)/4) - ((year-1)/100)+((year - 1)/400))%7;
 
}


int main(){

char *month[] = {"January","februay","March","April","May","July","August","september","October","November","Desamber"};
int daysInMonth[] = {31,28,31,30,31,30.31,31,30,31,30,31};
int i,j,totalDays,weekdays=0,spasceCounter=0,year;
printf("Enter you favrite year:\n");
scanf("%d",&year);
printf("\n\n********** Welcome to %d ************\n\n",year);
if((year%4==0&&year%100!=0)||(year%400==0)){
 daysInMonth[1]= 29;
}
weekdays= gatFirstDysofThaYear(year);
for(i=0; i<12; i++){
 printf("\n\n\n-------------%s---------------\n\n",month[i]);
 printf("\n  sun  Mon  Tue  Wed  Thu  Fri  Sat\n\n");
for(spasceCounter = 1;spasceCounter <= weekdays;spasceCounter++){
 printf("     ");
}
 totalDays = daysInMonth[i];
 for(j=0;j<=totalDays;j++){
  printf("%5d",j);
weekdays++;
if(weekdays>6){
 weekdays=0;
 printf("\n");
}

 }
}


 return 0 ;


}

