#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NITIndia{
        int infra;
        int hostel;
        int medical;
        int education;
        int entertainment;
        int food;
    }MNNIT,NITJ,NITS;

int main(){
    int jaipur=0,allahabad=0,silchar=0,repeat=1,i,j;
    while(repeat==1){
        printf("Welcome to position finder\n");
        printf("Points are given from 1 to 10\n");
    for(i=1;i<=3;i++){
        switch(i){
        case 1: printf("MNNIT Allahabad\n");
                printf("Write points for infra\n");
                scanf("%d",&MNNIT.infra);
                printf("Write points for hostel facilities\n");
                scanf("%d",&MNNIT.hostel);
                printf("Write points for medical facilities\n");
                scanf("%d",&MNNIT.medical);
                printf("Write points for education level\n");
                scanf("%d",&MNNIT.education);
                printf("Write points for places to visit outside college campus\n");
                scanf("%d",&MNNIT.entertainment);
                printf("Write points for food facilities\n");
                scanf("%d",&MNNIT.food);
        break;
        case 2: printf("NIT Silchar\n");
                printf("Write points for infra\n");
                scanf("%d",&NITS.infra);
                printf("Write points for hostel facilities\n");
                scanf("%d",&NITS.hostel);
                printf("Write points for medical facilities\n");
                scanf("%d",&NITS.medical);
                printf("Write points for education level\n");
                scanf("%d",&NITS.education);
                printf("Write points for places to visit outside college campus\n");
                scanf("%d",&NITS.entertainment);
                printf("Write points for food facilities\n");
                scanf("%d",&NITS.food);
        break;
        case 3: printf("NIT Jaipur\n");
                printf("Write points for infra\n");
                scanf("%d",&NITJ.infra);
                printf("Write points for hostel facilities\n");
                scanf("%d",&NITJ.hostel);
                printf("Write points for medical facilities\n");
                scanf("%d",&NITJ.medical);
                printf("Write points for education level\n");
                scanf("%d",&NITJ.education);
                printf("Write points for places to visit outside college campus\n");
                scanf("%d",&NITJ.entertainment);
                printf("Write points for food facilities\n");
                scanf("%d",&NITJ.food);
        break;
        }
    }
    allahabad=MNNIT.education+MNNIT.entertainment+MNNIT.food+MNNIT.hostel+MNNIT.infra+MNNIT.medical;
    jaipur=NITJ.education+NITJ.entertainment+NITJ.food+NITJ.hostel+NITJ.infra+NITJ.medical;
    silchar=NITS.education+NITS.entertainment+NITS.food+NITS.hostel+NITS.infra+NITS.medical;
    int col[3],swap,rank=1;
    col[0]=allahabad;
    col[1]=jaipur;
    col[2]=silchar;
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(col[i]<col[j]){
                swap=col[i];
                col[i]=col[j];
                col[j]=swap;
            }
        }
    }
    printf("MNNIT Allahabad have points equal to %d\n",allahabad);
    printf("NIT Silchar have points equal to %d\n",silchar);
    printf("MNIT Jaipur have points equal to %d\n",jaipur);
    for(i=0;i<3;i++){
         if(col[i]==allahabad){
                printf("Place %d is obtained by MNNIT Allahabad\n",rank);
                }
         if(col[i]==silchar){
                printf("Place %d is obtained by NIT Silchar\n",rank);
                }
         if(col[i]==jaipur){
                printf("Place %d is obtained by NIT Jaipur\n",rank);
                }
        rank++;}
        printf("Choose an option whether you want to repeat program for another user\n1:continue\n2:end\n");
        scanf("%d",&repeat);
    }
return 0;
}
