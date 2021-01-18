 #include <bits/stdc++.h>
using namespace std;

// Utility function to find minimum of two integers 
int min(int x, int y) 
{ 
	return (x < y)? x: y; 
	
} 

int calcAngle(double h, double m) 
{ 
	// validate the input 
	if (h>12)
    h-=12; 

	if (h == 12) h = 0; 
	if (m == 60)
	{
	m = 0;
	h += 1;
	if(h>12)
		h = h-12;
	} 

	// Calculate the angles moved 
	// by hour and minute hands 
	// with reference to 12:00 
	float hour_angle = 0.5 * (h * 60 + m); 
	float minute_angle = 6 * m; 

	// Find the difference between two angles 
	float angle = abs(hour_angle - minute_angle); 

	// Return the smaller angle of two possible angles 
	angle = min(360 - angle, angle); 

	return angle; 
} 

// Driver program to test above function 
int main() 
{ 
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string str,one="",two="";
        cin>>str;
        one=str.substr(0,2);
        two=str.substr(3,4);
        int hour=stoi(one);
        int minute=stoi(two);
        double result=calcAngle(hour,minute);
	    double result1=360-result;
        if(result<result1)
        cout<<result<<" degree"<<endl;
        else
        {
            cout<<result1<<" degree"<<endl;
        }
         
    }
	return 0; 
}
