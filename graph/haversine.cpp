// C++ program to calculate Distance
// Between Two Points on Earth
#include <bits/stdc++.h>
using namespace std;

long double toRadians(const long double degree)
{

	long double one_deg = (M_PI) / 180;
	return (one_deg * degree);
}

long double distance(long double lat1, long double long1,
					long double lat2, long double long2)
{
	// Convert the latitudes
	// and longitudes
	// from degree to radians.
	lat1 = toRadians(lat1);
	long1 = toRadians(long1);
	lat2 = toRadians(lat2);
	long2 = toRadians(long2);

	// Haversine Formula
	long double dlong = long2 - long1;
	long double dlat = lat2 - lat1;

	long double ans = pow(sin(dlat / 2), 2) +
						cos(lat1) * cos(lat2) *
						pow(sin(dlong / 2), 2);

	ans = 2 * asin(sqrt(ans));

	// Radius of Earth in
	// Kilometers, R = 6371
	// Use R = 3956 for miles
	long double R = 6371;

	// Calculate the result
	ans = ans * R;

	return ans;
}

// Driver Code
int main()
{
	long double lat1 = 27.667396;
	long double long1 =85.322978;
	long double lat2 = 27.683049;
	long double long2 = 85.318629;

	// call the distance function
	cout << setprecision(15) << fixed;
	cout << distance(lat1, long1,
					lat2, long2) << " K.M";

	return 0;
}
