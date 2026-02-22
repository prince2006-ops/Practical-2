#include<stdio.h>
int main(){
    int current_population=312032486;
    int total_days_in_year=365;
    int total_sec_in_a_day=24*60*60;
    int sec_in_year= total_days_in_year*total_sec_in_a_day;

    int birth_per_year=sec_in_year/7;
    int death_per_year= sec_in_year/13;
    int immigrants_per_year=sec_in_year/45;

    int net_change_per_year=birth_per_year+immigrants_per_year-death_per_year;
    long long population= current_population;
    printf("Population after every year for five year\n");
    for(int i=1;i<=5;i++){
        population= population+net_change_per_year;
        printf("Population on year %d: %lld\n", i, population);
    }
    return 0;
}