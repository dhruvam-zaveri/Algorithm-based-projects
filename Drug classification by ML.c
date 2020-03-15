#include <stdio.h>
#include <conio.h>
#include <math.h>

float ratio(float);
float ln(float);
float entropy(float,float,float,float);

int n=14;
int main()
{
    char gender[100]={'f','f','f','f','m','m','m','f','m','m','m','f','m','f'};
    char age[100]={'y','y','m','o','o','o','m','y','y','o','y','m','m','o'};
    char bp[100]={'h','h','h','n','l','l','l','n','l','n','n','n','h','n'};
    char cholesterol[100]={'n','h','n','n','n','h','h','n','n','n','h','h','n','h'};
    char drug[100]={'A','A','B','B','B','A','B','A','B','B','B','B','B','A'};
    char genderP,ageP,bpP,chP,drugP;
    float gender_fa=0,gender_fb=0,gender_ma=0,gender_mb=0,pFA,pFB,pMA,pMB,log_fa,log_fb,log_ma,log_mb,entropy_f,entropy_m;
    int i;
    for(i=0;i<14;i++){
        if(gender[i]=='f'){
            if(drug[i]=='A'){
                gender_fa++;
            }
            else if(drug[i]=='B'){
                gender_fb++;
            }
        }
        else if(gender[i]=='m'){
            if(drug[i]=='A'){
                gender_ma++;
            }
            else if(drug[i]=='B'){
                gender_mb++;
            }
        }
    }
    pFA=ratio(gender_fa);
    pFB=ratio(gender_fb);
    log_fa=ln(pFA);
    log_fb=ln(pFB);
    entropy_f=entropy(pFA,pFB,log_fa,log_fb);
    pMA=ratio(gender_ma);
    pMB=ratio(gender_mb);
    log_ma=ln(pMA);
    log_mb=ln(pMB);
    entropy_m=entropy(pMA,pMB,log_ma,log_mb);
    printf("%f %f",entropy_f,entropy_m);
    printf("Enter the data for the machine to predict the drug to be prescribed to  the patient...\n");
    printf("\nEnter the gender of patient (m=male f=female): ");
    genderP=getch();
    putch(genderP);
    printf("\nEnter age of patient (y=young m=middle aged o=old) : ");
    ageP=getch();
    putch(ageP);
    printf("\nEnter the BP condition of patient (h=high n=normal l=low) : ");
    bpP=getch();
    putch(bpP);
    printf("\nEnter the cholesterol level of patient (h=high n=normal) : ");
    chP=getch();
    putch(chP);
    if(genderP=='f'){
        if(ageP=='o'){
            if(chP=='h'){
                printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'A');
            }
            else if(chP=='n'){
                printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'B');
            }
        }
        else if(ageP=='m'){
            printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'B');
        }
        else if(ageP=='y'){
            printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'A');
        }
    }
    if(genderP=='m'){
        if(ageP=='o'){
            if(chP=='h'){
                printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'A');
            }
            else if(chP=='n'){
                printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'B');
            }
        }
        else if(ageP=='m'){
            printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'B');
        }
        else if(ageP=='y'){
            printf("\n\nDrug %c should be prescribed to the patient\n\n\n",'B');
        }
    }
   return 0;
}

float ratio (float a){
    float c;
    c=a/(n/2);
    return c;
}

float ln (float a){
    float c;
    c=log(a);
    return c;
}

float entropy (float a,float b,float c,float d){
    float e;
    c=(a*c)+(b*d);
    return e;
}
