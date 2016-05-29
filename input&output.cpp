/*
@author: sysuLocas
@github: https://github.com/sysuLocas
*/
#include <iostream>
#include<string>
using namespace std;
int main()
{
    /*输入的情况*/
	//1//输入n对字符串，中间以空格间隔
    for(int i=0;i<n;i++)
	{
        string str1,str2;
		cin>>str1>>str2;
		//...
	}
    //
    
    //2//需要输入n个测试的情况
    int n;
	cin >> n;
	while(n--){
        //进行n次测试
    }
	
    //3//在每次测试中，需要判断是否需要跳出while循环的情况
    string op;
    cin >> n;
	while (n--){
		bool finish = false;
		while (!finish){
			cin >> op;
			if (op == "Take")
            {
				//take...
			}
            if (op == "otherOps")
            {
				//other ops...
			}
			if (op == "Read")
            {
				//read();
				finish = true;
			}
		}
	}
    //
    
    //4//未提前告知数组大小的情况，而需输入多个整数，可以用new
    int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n, cmp);//用了algorithm排序
		if (n > 0)                       //输出部分
			printf("%d", a[0]);
		for (int i = 1; i < n; i++)
			printf(" %d", a[i]);
		cout << "\n";
	}
    //
    
    //5//需要按ctrl+z来结束输入
    /*
    在scanf("%d %d",&a,&b)==2 中
    如果输入两个数字那么scanf函数会返回一个2
    如果ctrl+Z 那么scanf函数返回-1
    而EOF=-1
    */
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
        printf("%d\n",a+b);
    //
    
    //6//能有效地输入n，而且以输入n=0结束循环
    while (scanf("%d", &n) != EOF && n!=0) {
        //ops...
    }
    //
    
    //7//以输入0 0结束
    int a,b;
    while(true)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
            break;
        printf("%d\n",a+b);
    }
    //
    
    //8//用scanf输入时1 2 3 4 5（空格间隔）
    /*和以enter间隔效果是一样的
    1
    2
    3
    4
    5
    */
    for(int j=0;j<n;j++)
    {
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    //
    
    //9//
    //
    
    /*输出的情况*/
    //1//需要输出多个项以空格间隔，最后一项后面没有空格
    if (len > 0)
        cout << data[len-1];
	for (int i = len-2; i >= 0; i--)
		cout << " " << data[i];
    //
    
    //2//每组样例之间有空行
    int nCase;
    scanf("%d",&nCase);
    for(int i=0;i<nCase;i++)
    {
        //ops...
        //ops...
        if(i!=nCase-1)
            printf("\n");
    }
    //
    
    return 0;
}
