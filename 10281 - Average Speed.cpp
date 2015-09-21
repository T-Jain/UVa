#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char buffer[20];
	int n, time = 0, now; // now = current time, time = elapsed time
	int hour, min, sec, speed=0, newSpeed;
	double distance=0;

	while (cin.getline(buffer, sizeof(buffer))){
		n = sscanf(buffer, "%d:%d:%d %d", &hour, &min, &sec, &newSpeed);
		now = hour * 3600 + min * 60 + sec;

		distance += (now - time) * speed;
		time = now;
		
		if (n == 3)
			printf("%02d:%02d:%02d %.2f km\n", hour, min, sec, distance/3600);
		else if (n == 4)
			speed = newSpeed;
	}

	return 0;
}