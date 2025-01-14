#include<stdio.h>
#include<ctype.h>
#include<string.h>

void bus();
void car();
void bike();
int menu();
void details();
void Auto();
void vehicleNum();


int nob=0;noc=0;nobi=0;noa=0;amount=0;count=0;
char vehnum[100][20];
void main(){
     while(1){
    int choice=menu();
        switch(choice){
            case 1:
            vehicleNum();
            bus();
            break;
            case 2:
            vehicleNum();
            car();
            break;
            case 3:
            vehicleNum();
            bike();
            break;
            case 4:
            vehicleNum();
            Auto();
            break;
            case 5: details();
            break;
            case 6:
            printf("exiting Thank you....!\n");
            return 0;
            default:
            printf("Invalid choice \n please select the one of the Above \n");
        }

}
return 0;
}
int menu(){
    int ch;
    printf("1.Enter Bus \n" );
    printf("2.Enter car \n" );
    printf("3.Enter bike \n" );
    printf("4.Enter auto \n" );
    printf("5.Show details \n" );
    printf("6.Exit \n ");
    printf("Enter the choice\n");
    scanf("%d",&ch);
    return ch;

}
void vehicleNum(){

    char temp[20];
    printf("enter the vehiclee num (KA-07-AB2003):");
    scanf("%s",temp);

    if(strlen(temp)==12  &&
    isupper(temp[0])&& isupper(temp[1])&& temp[2]=='-'&&
    isdigit(temp[3])&& isdigit(temp[4])&& temp[5]=='-'&&
    isupper(temp[6])&& isupper(temp[7])&& isdigit(temp[8])&& isdigit(temp[9])&&isdigit(temp[10])&& isdigit(temp[11]) ){
         strcpy(vehnum[count], temp); 
        printf("Vehicle number '%s' entered successfully!\n", temp);
    } else {
        printf("Invalid vehicle number format. Please follow 'XX-XX-AB1234'.\n");
    }
}
    


void details(){
    printf("Total number of buses:%d \n",nob);
    printf("Total number of cars:%d \n",noc);
    printf("Total number of bikes:%d \n",nobi);
    printf("Total number of auto:%d \n",noa);  
    printf("Total number of vehicles parked:%d \n",count);
    printf("Total number of amount:%d \n",amount);
    printf("\n  Vehicle Numbers \n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, vehnum[i]);
    }
}



void bus(){
    printf(" Bus Enterd Successfully...!\n");
    nob++;
    amount=amount+100;
    count++;
}
void car(){
    printf(" Car Enterd Successfully...!\n");
    noc++;
    amount=amount+50;
    count++;
}
void bike(){
    printf(" Bike Enterd Successfully...!\n");
    nobi++;
    amount=amount+20;
    count++;
}

void Auto(){
    printf("Auto Enterd Successfully...!\n");
    noa++;
    amount=amount+30;
    count++;
}
