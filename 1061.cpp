#include <bits/stdc++.h>
using namespace std;

void get_numbers(int dates[], int &j){
  string date_string;
  getline(cin,date_string);
  istringstream is(date_string, istringstream::in);
  while(true){
    is >> dates[j];
    while(!is.eof() && (is.bad() || is.fail())){
      is.clear();
      is.ignore(1);
      is >> dates[j];
    }j++;
    if(is.eof()) break;
  }
}

int main(int argc, char const *argv[]){
  int dates[8], seconds_time[4] = {86400,3600,60,1}, first_day_seconds, last_day_seconds, total_seconds, destroy_days = 1;
  string names_time[4] = {" dia(s)"," hora(s)"," minuto(s)"," segundo(s)"};
  for(int i=0,j=0; i<4;i++) get_numbers(dates,j);
  if(dates[0] == dates[4]) destroy_days = 0;
  first_day_seconds = destroy_days*86400 - (dates[3] + ((dates[1]*60 + dates[2])*60));
  last_day_seconds = dates[7] + ((dates[5]*60 + dates[6])*60);
  total_seconds = first_day_seconds + last_day_seconds + ((dates[4]-dates[0]-1)*86400)*destroy_days;
  for(int i=0; i<4; i++) {
    cout << total_seconds/seconds_time[i] << names_time[i] << endl;
    total_seconds -= (total_seconds/seconds_time[i])*seconds_time[i];
  }
  return 0;
}
