#ifndef HEADER_9_15_h
#define HEADER_9_15_h

template<class T>
int binSearch(const T list[], int n, const T &key){
	int low = 0;
	int high = n - 1;
	while(low <= high){ //low <= high表示整个数组尚未查找完成
		int mid = (low + high) / 2;	//求中间元素的下标
		if(key == list[mid])
			return mid;				//若找到，返回下标
		else if( key < list[mid])
			high = mid - 1;			//若key < list[mid]将查找范围缩小到数组的前一半
		else	
			low = mid + 1;			//否则将查找范围缩小到数组的后一半
	}
	return -1;						//没有找到返回-1
}

#endif