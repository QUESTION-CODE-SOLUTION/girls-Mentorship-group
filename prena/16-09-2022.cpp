#include <iostream>
using namespace std;
int main() {
    int h1,h2,j;
    string  n,c;
    cout<<"Enter your details\nFull name(use _ instead of backspace): ";
    cin>>n;
    cout<<"Caste : ";
    cin>>c;
    cout<<"10th percentage(only numbers) : ";
    cin>>h1;
    cout<<"12th percentage(only numbers) : ";
    cin>>h2;
    cout<<"JEE percentile(only numbers) : ";
    cin>>j;
    cout<<"\n\nYour counselling process start's now :";
    
    cout<<"\nName : "<<n<<"\nCaste : "<<c<<"\n10th percentage : "<<h1<<"\n12th percentage : "<<h2<<"\nJEE percentile : "<<j;
    if(j<30&&h1<35&&h2<40){
        cout<<"\nYou are not eligible for admission in this college !! ";}
    else{
        cout<<"\n\nYou are eligible for below Branch/s :";
        if (j>=75&&h1>=35&&h2>=55){
            cout<<"\nComputer Science\nCSE(cyber security and blockchain)\nArtificial and Data science\n Internet of Things";
        }
        if (j>=70&&h1>=35&&h2>=55){
            cout<<"\nElectronics and Communication Engineering\nElectronics and Instrumentation Engineering\nElectrical Engineering";
        }
        if (j>=50&&h1>=35&&h2>=55){
            cout<<"\nPetro Chemical";
        }
        if (j>=30&&h1>=35&&h2>=40){
            cout<<"\nCivil\nMechanical\nAgriculture";
        }}
        
}
 