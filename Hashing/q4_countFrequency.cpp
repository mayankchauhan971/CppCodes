{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    unordered_map<int,int>hash;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        hash[a[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        cout<<hash[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}