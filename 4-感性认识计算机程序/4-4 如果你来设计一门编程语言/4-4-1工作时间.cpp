// #include <iostream>
// using namespace std;
// int main()
// {
//     enum day{Mon,Tue,Wed,Thu,Fri,Sat,Sun};
//     day workDay;
//     double times,wages,hourlyRate,hours;
//     cout<<"Enter the hourly wages rate."<<endl;
//     cin>>hourlyRate;
//     cout<<"Enter hours worked daily\n";
//     workDay=Mon;
//     while(workDay<=Sun)
//     {
//         workDay=workDay+1;
//         cin>>hours;
//         switch(workDay)
//         {
//             case Sat:times=1.5*hours;break;
//             case Sun:times=2.0*hours;break;
//             default:times=hours;

//         }
//         wages=wages+times*hourlyRate;

//     }
//     cout <<"The wages for the week are"<<wages;
//     return 0;
// }