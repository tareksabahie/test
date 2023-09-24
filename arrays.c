
void array_print( int* arr, int size  )
{
	for ( int i=0 ; i<size ; i++)
	{
		printf ( " %d  ",arr[i]);
	}
	printf ( " \n");
}
int array_zigzag2(int *arr1, int size1, int *arr2, int size2, int* narr )
{
	int size, i, j=0  ;
	if (size1!=size2)
	{
		return -1;
	}
	size=2*size1;
	for ( i=0 ; i<size ; i++)
	{
		narr[i]=arr1[j];
		narr[++i]=arr2[j];
		j++;
	}
	return size;
}
void array_get_max_min(int *arr , int size ,int *max , int *min ,  int *index_max , int *index_min)
{ *max=arr[0] ;
	*min=arr[0];
	for(int i=0 ; i<size ; i++)
	{
		if (arr[i]>=*max)
		{
			*max=arr[i];
			*index_max=i;
		}
		if(arr[i]<=*min)
		{
			*min=arr[i];
			*index_min=i;
		}
	}

}


int array_search1( int*arr, int size, int num )
{
	for( int i =0 ; i<size ; i++)
	{
		if ( arr[i]==num)
		{
			return i ;
		}
	}
	return -1;
}
int array_search2 (int *arr , int size , int num )
{ int index=-1 ;
	for (int i=0 ; i<size ; i++)
	{
		if (arr[i]==num)
		{
			index=i;
		}
	}
	return index ;
}

int array_removePrime ( int *arr, int size)
{
	int count =0 ;
	for( int i=0 ; i<size ; i++)
	{
		if (Isprime(arr[i]))
		{
			arr[i]=0;
			count ++;
		}
	}

	return count ;
}

int array_scan ( int *arr)
{
	int i, size ;
	printf ( " enter number of element \n " );
	scanf ("%d",&size);
	for ( i=0 ; i<size ; i++)
	{
		scanf ( " %d",&arr[i]);
	}
	return size ;
}
void string_upper_to_lower(char *str)
{
	int i ;
	for (i=0 ; str[i] ; i++)
	{
		if (str[i] >='A' && str[i]<='Z')

		{
			str[i]=str[i]-'A'+'a';
		}
	}
}

void array_reverse (int *arr , int size )
{ int  temp , j=size-1;;
	for (int i=0 ; i<size/2 ; i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
}
void array_swap(int*arr1 , int size1 , int *arr2 , int size2)
{
	int temp , size;
	if (size1>size2)
	{
		size=size2;
	}
	else
	{
		size=size1;
	}
	for (int i=0 ; i<size ; i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}

int array_most_repeated( int *arr, int size, int *element )
{
	int i, j, count =0,max =0 ;
	for ( i=0 ; i<size ; i++)
	{
		count =0 ;
		for ( j=i ; j<size ; j++)
		{
			if ( arr[i]==arr[j])
			{
				count ++;
			}
			if ( max<count )
			{
				max=count ;
				*element = arr[i];
			}
		}
	}
	return max ;
}

int array_copy ( int *sourse, int soursesize, int * copy, int maxsize )
{
	int i ;
	int     size=soursesize>maxsize?maxsize:soursesize;
	for ( i=0 ; i<size ; i++)
	{
		copy[i]=sourse[i];
	}
	return size ;
}

int array_mostRepeatedSorting ( int *arr, int size, int *element)
{
	int i,j, count=0,max=0 ;
	for ( i=0 ; i<size ; i++)
	{
		count =0 ;
		for ( j=i; arr[i]==arr[j] ; j++)
		{
			if ( arr[i]==arr[j])
			{
				count++ ;
			}
			if ( count>max)
			{
				max=count ;
				*element=arr[i];
			}
		}
	}
	return max;
}

int array_zigzag( int *arr1, int s1, int *arr2, int s2, int* narr)
{
	int i, j=0, size ;
	size =s1+s2;
	int min =s1<s2?s1:s2;
	for ( i=0 ; i<2*min ; i++)
	{
		narr[i]=arr1[j];
		narr[++i]=arr2[j];
		j++;
	}
	if ( s1>s2)
	{
		for ( ; i<size ; i++)
		{
			narr[i]=arr1[j];
			j++;
		}
	}
	else  if  ( s2>s1)
	{
		for ( ; i<size ; i++)
		{
			narr[i]=arr2[j];
			j++;
		}
	}
	printf ( " j= %d %d\n",j, i);

	return size ;
}
int array_max_seris_repeated(int *arr , int size , int*plement )
{
	int count =0 , max =0 ;
	for(int i=0 ; i<size ; i++)
	{
		if (arr[i]==arr[i+1])
		{
			count++;
			if (count>max)
			{
				max=count;
				*plement=arr[i];
			}
		}
		else
		{
			count=0 ;
		}
	}
	return max+1;
}
int array_zigzag4(int *arr1, int size1, int *arr2, int size2, int* narr )
{
	int size, i, j=0  ;
	if (size1!=size2)
	{
		return -1;
	}
	size=2*size1;
	for ( i=0 ; i<size ; i++)
	{

		narr[i]=arr1[j];
		narr[++i]=arr2[j];
		j++;
	}
	return size;
}
int array_search_max_series_for_given_num(int *arr , int size , int num )
{
	int count =0 , max =0 ;
	for(int i=0 ; i<size ; i++)
	{
		if (arr[i]==num)
		{
			count++;
			if (count>max)
			{
				max=count;

			}
		}
		else
		{
			count=0 ;
		}
	}
	return max;
}
int array_seriesMax  ( int*arr, int size  )
{
	int i, count =0, max=0;
	for ( i=0 ; i<size ; i++)
	{

		if (arr[i]==arr[i+1]-1 )
		{
			count++;
			if ( max<count )
			{
				max=count ;
			}
		}
		else
		{
			count =0;
		}

	}
	return ++max ;
}
int array_most_repeated_in_array_very_large_of_char(char*arr , int size , char *pelement )
{ int i , max=arr[0] , min=arr[0] , max_count =0;
	for(int i=0 ; i<size ; i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];

		}
		if(arr[i]<=min)
		{
			min=arr[i];

		}
	}
	int count_size =max-min+1;
	char *count=(char*)calloc(count_size,sizeof(char));
	if (count==0)
	{
		return -1 ;
	}
	for (i=0 ; i<size ; i++)
	{
		count [arr[i]-min]++;
	}
	for (i=0 ; i<count_size ; i++)
	{
		if (count[i]>max_count)
		{
			max_count=count[i];
			*pelement=i+min;
		}
	}
	free(count);
	return max_count;

}
int array_removeRepeatedSorting( int *arr, int size, int *narr)
{
	int i,m=0,j=0 ;
	for ( i=0 ; i<size; i++)
	{
		if (arr[i]!=arr[i+1])
		{
			narr[j]=arr[i];
			j++;
		}
	}
	return j;
}

int array_removeRepeated ( int *arr,int size, int *narr )
{
	int  i, j=0,k=0, flag =0;
	for ( i=0 ; i<size ; i++)
	{
		flag=0;
		for ( j=0 ; j<i ; j++)
		{
			if ( arr[i]==arr[j])
			{
				flag =1;
			}
		}
		if (flag==0)
		{
			narr[k]=arr[i];
			k++;
		}

	}
	return k ;
}
void array_swap_3elements_after_two_zeros(int *arr)
{
	int i, temp,index1, index2, flag=0 ;
	for (i=0 ;  flag!=2 ;  i++)
	{
		if (arr[i]==0 && flag==0)
		{
			index1=i+1;
			flag=1;
		}
		else if (arr[i]==0 && flag==1 )
		{
			index2=i+1;
			flag=2;

		}
	}
	for (i=0 ; i<3 ; i++)
	{
		temp=arr[index1];
		arr[index1]=arr[index2];
		arr[index2]=temp;
		index1++;
		index2++;

	}
}
int array_biggest_difference_between_2numbers(int*arr , int size )
{
	int i,flag=0 , index,min=arr[0] , max ;
	for ( i=0 ; i<size ; i++)
	{
		if (arr[i]<min)
		{
			min=arr[i];
			index=i;
		}
	}
	max=arr[i];
	for (i=index+1 ; i<size ; i++ )
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max-min;

}
int array_mostRepeatedNumber (int *arr, int size, int*pelement )
{
	int i, max=arr[0], min=arr[0], count_size=0, most_rep=arr[0];
	for (i=0 ; i<size ; i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}

	count_size=max-min+1;
	int *count=(int*)calloc(count_size,sizeof(int));
	for (i=0 ; i<size ; i++)
	{
		count[arr[i]-min]++;
	}
	for (i=0 ; i<count_size ; i++)
	{
		if (count[i]>most_rep)
		{

			most_rep=count[i];
			*pelement = i+min ;
		}
	}
	free(count);
	return most_rep;

}
void swap_pointers(int **p1 , int **p2)
{
	int *temp ;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int  array_elements_between_2numbers(int*arr , int num1 , int num2  )
{ int max , min , size;
	if(num1>num2)
	{
		max=num1;
		min=num2;
	}
	else
	{
		max=num2;
		min=num1;
	}

	size=max-min-1;
	for (int i=0; i<size; i++)
	{
		arr[i]=++min;

	}
	return size ;

}

void Fibonacci (int n)
{
	int  n1=0, n2=1, sum =1;

	for (int i =0 ; i<n; i++)
	{
		printf ("%d \n",sum);
		sum=n1+n2;
		n1=n2;
		n2=sum;

	}
	printf("\n");
}
array_mini_Max_Sum2(int *arr , int size )
{
	int max =arr[0], min=arr[0] , sum=0;
	for (int i=0 ; i<size ; i++)
	{
		sum=sum+arr[i];
		if (arr[i]>max)
		{
			max=arr[i];
		}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf ("%d    %d \n",sum-max , sum-min);
}
void array_mini_Max_Sum( int* arr,int arr_count) {
	int i ,max=arr[0 ], min=arr[0];
	long long sum_max=0 , sum_min=0;
	for (i=0 ; i<arr_count  ; i++ )
	{
		if (arr[i]>=max)
		{
			max=arr[i];

		}
		if (arr[i]<=min)
		{

			min=arr[i];
		}

	}
	if (max==min)
	{ arr_count--;
		sum_max=arr_count*arr[0];
		sum_min=sum_max;
	}
	else{
		for (i=0 ; i<arr_count ; i++)
		{
			if (arr[i]>min)
			{
				sum_max=sum_max+arr[i];
			}
			if (arr[i]<max)
			{

				sum_min=sum_min+arr[i];
			}

		}
	}
	printf ("%lld %lld\n",sum_min ,sum_max);
}
int array_mostRepeatedSorting2 ( int *arr, int size, int *element)
{
	int i, max =0, count =0 ;
	for (i=0 ; i<size ; i++)
	{
		if (arr[i]==arr[i+1])
		{
			count++;
			if (count >max )
			{
				max=count ;
				*element=arr[i];
			}
		}
		else
		{
			count =0;
		}
	}
	return max+1;
}
int array_binarySearch (int *arr , int size , int num )
{
	int first=0 , last=size-1, middle;
	while (first<=last )
	{
		middle=(first+last)/2;
		if (arr[middle]==num)
		{
			return middle ;
		}
		else if ( arr[middle]>num)
		{
			last=middle-1;
		}
		else
		{
			first=middle+1;
		}
	}
	return -1;

}

void array_selection_sort ( int *arr, int size )
{
	int i, j, temp,index_max=0;
	int last_i =size-1;
	for (j=0; j<size ; j++)
	{         index_max=0;

		for (i=0 ; i<size-j ; i++)
		{
			if (arr[i]>arr[index_max] )
			{
				index_max=i;
			}
		}
		temp=arr[last_i];
		arr[last_i]=arr[index_max];
		arr[index_max]=temp;
		last_i--;
	}
}
void array_bubble_sort(int *arr, int size )
{
	int i, j, temp, sorted_flag;
	for (i=1; i<+size ; i++ )
	{
		sorted_flag=1;
		for (j=0 ; j<size-i ; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sorted_flag=0;
			}
		}
		if(sorted_flag==1)
		{
			return ;
		}

	}
}
void array_CountingSort(int*arr,int size)
{
	int max=arr[0],min=arr[0],count_size,i,j,c=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
		c++;
	}
	count_size=max-min+1;

	int*count=(int*)calloc(count_size,sizeof(int));
	if(count==0)
	{
		return;
	}
	for(i=0;i<size;i++)
	{
		count[arr[i]-min]++;
		c++;
	}
	i=0;
	for(j=0;j<count_size;j++)
	{
		while(count[j])
		{
			arr[i]=j+min;
			count[j]--;
			i++;
			c++;
		}

	}
	free(count);
	printf("%d\n",c);

}
void array_copy_previous_given_number2(int*arr , int size , int num , int *narr,int *nsize)
{
	int i=0 ;
	char flag=0 ;
	for (i=0 ; i<size && flag!=1 ; i++)
	{
		if (arr[i]!=num)
		{
			narr[i]=arr[i];
		}
		else
		{
			flag=1 ;
		}

	}
	*nsize=i-1 ;
}
void array_copy_previous_given_number(int*arr , int size , int num , int *narr,int *nsize)
{
	int i ;
	*nsize=array_binarySearch(arr , size , num);
	for (i=0 ; i<*nsize ; i++)
	{
		narr[i]=arr[i];
	}
	return narr;
}
int array_find_not_repeated_num_in_sorted_array(int* arr , int size)
{
	int last=size-1;
	for ( int i=0 ;  i<size/2  ;i=i+2)
	{
		if (arr[i]!=arr[i+1])
		{
			return arr[i];
		}
		else if(arr[last] !=arr[last-1])
		{
			return arr[last];
		}
		last=last-2;
	}
}
int  array_find_missing_number(int *arr,int size  )
{
	int i, num, max_sum=(size*(size+1)/2),sum=0;
	for(i=0 ; i<size ; i++)
	{
		sum=sum+arr[i];
	}
	num=max_sum-sum;
	return num;

}

int  array_find_missing_number_0_to_100(int *arr, int size )
{
	int i, j, count =0;
	for(i=0 ; i<size ; i++)
	{
		count =0 ;
		for(j=0 ; j<size ; j++ )
		{
			if (i==arr[j])
			{
				count++;
				if(count==1)
				{
					break;
				}
			}
		}
		if (count==0)
		{
			return i;
		}
	}
}
int array_find_repeated_num(int *arr, int size)
{
	size--;
	int i, num, max_sum=(size*(size+1)/2),sum=0;
	for(i=0 ; i<=size ; i++)
	{
		sum=sum+arr[i];
	}
	num=sum-max_sum;
	return num;

}
void swap_2bytes_in_short(unsigned short * num)
{
	unsigned short byte1=*num&0X00FF;
	unsigned   short byte2=*num&0XFF00;
	*num=(byte1<<8)|(byte2>>8);
}
void swap_2bytes_in_short2(unsigned short *num)
{
	unsigned int i, j=8, value1,value2 ;
	for (i=0 ; i<8 ; i++)
	{
		value1=(*num>>i)&(1);
		value2=(*num>>j)&(1);
		if (value1==1)
		{
			SET_BIT(*num, j);
		}
		else
		{
			CLR_BIT(*num, j);
		}
		if (value2==1)
		{
			SET_BIT(*num,i);
		}
		else
		{
			CLR_BIT(*num,i);
		}
		j++;
	}

}
