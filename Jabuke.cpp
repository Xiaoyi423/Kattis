#include <iostream>

using namespace std;

struct point{
    double x;
    double y;
};

double compute_area(point a,point b,point c){
   double temp = (a.x*(b.y-c.y)+ b.x*(c.y-a.y)+ c.x*(a.y-b.y));
   if(temp<0) return -temp/2;
   else return temp/2;
}
int main(){
    point p1,p2,p3;
    cin >> p1.x >>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
    double area= compute_area(p1,p2,p3);
    int n;
    cin>>n;
    int count = 0;
    for(int i=0;i<n;i++){
        point p;
        cin>>p.x>>p.y;
        double temp=compute_area(p,p1,p2)+compute_area(p,p2,p3)+compute_area(p,p1,p3);
        if(temp==area) count++;
    }
    cout.precision(1);
    cout<<fixed<<area<<endl;
    cout<<count<<endl;
}