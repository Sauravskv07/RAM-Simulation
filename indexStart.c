int indexstart(int startIndex,int* Larr)
{
	for(int i=2;i<Larr[0];i++)
		{
		if(Larr[i]==startIndex)
			return i;
		}
	return 0;
}
