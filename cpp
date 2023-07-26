{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n =v.size();
		    sort(v.begin(), v.end());
		    if(n%2==1)  return v[n/2];
		    else {
		        int k=n/2;
		        int med=(v[k]+v[k-1]);
		        med/=2;
		        return med;
		    }
		}
};
