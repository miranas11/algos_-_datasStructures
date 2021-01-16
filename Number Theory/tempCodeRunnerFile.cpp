for(ll i=0;i<=100000;i++)
	{
		csum[i]=csum[i-1]+p[i];
	}

	for(int t=0;t<q;t++)
	{
		int a,b;
		cin>>a>>b;
		cout<<csum[b]-csum[a-1]<<endl;
	}
	return 0;
}