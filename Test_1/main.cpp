#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

#define PI (acos(-1))

using namespace std;

//十进制转二进制
//int dec2Bin(int dec)
//{
//	int result = 0, tmp = dec, i = 1;
//	while (tmp)
//	{
//		result = result + i * (tmp % 2);
//		tmp /= 2;
//		i *= 10;
//	}
//	return result;
//}

//二进制转十进制
//int bin2Dec(int bin)
//{
//	int result = 0, tmp = bin;
//	for (int i = 7; i >= 0; --i)
//	{
//
//		tmp = bin / pow(10, i);
//		bin %= int(pow(10, i));
//		result += (tmp * pow(2, i));
//	}
//	return result;
//}

//图片合并显示

//void mergeImg(const char *windowName, vector<cv::Mat> &images, int rows, int cols)
//{
//	int imgNum = int(images.size());
//	cv::Mat img_disp;
//	const int size = 400;
//	img_disp.create(cv::Size(100 + size * cols, 60 + size * rows), CV_8UC3);
//	float scale;
//
//	for (int i = 0, m = 20, n = 20, max = 0; i < imgNum; i++)
//	{
//		int x, y;
//		x = images[i].rows;
//		y = images[i].cols;
//
//		max = (x > y) ? x : y;
//		scale = (float)(float(max) / size);//规模
//
//		
//
//		if (i % cols == 0 && m != 20)
//		{
//			n = n + 20 + (int)(x / scale);
//			m = 20;
//		}
//
//		cv::Mat imgROI = img_disp(cv::Rect(m, n, (int)(y / scale), (int)(x / scale)));
//		cv::resize(images[i], imgROI, cv::Size((int)(y / scale), (int)(x / scale)));
//
//		m += 20 + (int)(y / scale);
//	}
//
//	cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
//	cv::imshow(windowName, img_disp);
//
//}

int main()
{

	/* 高斯平滑处理 */

		//string path = "C:\\Users\\Adam0\\Desktop\\C++\\Opencv\\code\\Test_1\\Document\\Lena.tif";

		//cv::Mat img = cv::imread(path, 0);

		//if (img.empty())
		//{
		//	cout << "Fail to read the piture!" << endl;
		//	system("pause");
		//	return -1;
		//}
		//cv::namedWindow("Original_Pic", cv::WINDOW_AUTOSIZE);
		//cv::namedWindow("Processed_Pic", cv::WINDOW_NORMAL);

		//cv::imshow("Original_Pic", img);

		////平滑处理
		//cv::Mat out ;

		//cv::GaussianBlur(img, out, cv::Size(5, 5), 3, 3);
		//cv::GaussianBlur(out, out, cv::Size(5, 5), 3, 3);


		//cv::imshow("Processed_Pic", out);

		//cv::waitKey(0);
		//cv::destroyWindow("Original_Pic");
		//cv::destroyWindow("Processed_Pic");


	/* 500x500单通道图像，每个像素值都为0 */

		//const int mat_size = 500;
		//const int mat_sz[] = { mat_size, mat_size };
		//cv::Mat img(2, mat_sz, CV_8UC1);

		//cv::RNG rng;
		//rng.fill(img, cv::RNG::UNIFORM, 0, 256);

		////img = 0;

		//cv::namedWindow("500x500 | C1 | Grayscale=0", cv::WINDOW_AUTOSIZE);
		//cv::imshow("500x500 | C1 | Grayscale=0", img);
		//cv::waitKey(0);
		//cv::destroyWindow("500x500 | C1 | Grayscale=0");

	/* 直方图统计 */

		//string path = "C:\\Users\\Adam0\\Desktop\\C++\\Opencv\\code\\Test_1\\Document\\Lena.tif";

		//cv::Mat img = cv::imread(path, 0);

		//if (img.empty())
		//{
		//	cout << "Fail to read the piture!" << endl;
		//	system("pause");
		//	return -1;
		//}

		//cv::Mat img2 = img.clone();

		//int nr = img.rows; //行数
		//int nc = img.cols * img.channels(); //每行元素的个数
		//cout << "rows = " << nr << endl << "cols = " << nc << endl;

		//unsigned long hist[256];

		//memset(hist, 0, sizeof(unsigned long) * 256);

		//for (int i = 0; i < nr; ++i)
		//{
		//	uchar *pCur = img2.ptr<uchar>(i);

		//	for (int j = 0; j < nc; ++j)
		//	{
		//		//*(pCur++) = rand();
		//		hist[*(pCur++)] ++;
		//	}
		//}

		//cout << "灰度直方图如下：" << endl;
		//for (int k = 0; k < 256; k++)
		//{
		//	float p = hist[k] / float((nr * nc));

		//	cout << "hist[" << k << "] : " << p << endl;
		//}

		////提取区域图像

		//cv::Mat img3 = img2(cv::Rect(149, 149, 100, 100));

		////uchar *ptr = &img3;

		//
		//cv::namedWindow("original", cv::WINDOW_AUTOSIZE);
		//cv::imshow("original", img);
		//cv::namedWindow("Processed", cv::WINDOW_AUTOSIZE);
		//cv::imshow("Processed", img2);
		//cv::namedWindow("Extracted", cv::WINDOW_AUTOSIZE);
		//cv::imshow("Extracted", img3);

		//cv::waitKey(0);

	/* 生成正弦光栅条纹 */

		//const int period = 10;
		//unsigned int t = period;  //周期
		//float f = 1 / float(t);   //频率
		//float w = 2 * PI * f;     //角频率

		//cv:: Mat img = cv::Mat::ones(500, 500, CV_8UC1);

		//for (int i = 0; i < 500; i++)
		//{
		//	uchar *pCur = img.ptr<uchar>(i);

		//	for (int j = 0; j < 500; j++)
		//	{
		//		*(pCur++) = 127.5 + 127.5*cos(w * (i - j));
		//	}
		//}

		//cv::namedWindow("GratingStripe", cv::WINDOW_AUTOSIZE);
		//cv::imshow("GratingStripe", img);
		//cv::waitKey(0);
		//cv::destroyWindow("GratingStripe");

	/* c++学习：循环读入字符 */

		/*char ch;
		cout << "Please input several charactors with '#' to terminate !\n";
		while (cin)
		{
			cin.get(ch);
			if (ch == '#')
				break;
			cout.put(ch).put('\n');
		}
		cout << "Bye!\n";

		system("pause");*/

		/* cin读取数字 */

			/*const int Max = 5;
			int golf[Max];

			cout << "Please enter your golf score!\n"
				 << "You must Enter" << Max << "rounds.\n";

			for (int i = 0; i < 5; ++i)
			{
				cout << "round #" << i << ": ";
				while (!(cin >> golf[i]))
				{
					cin.clear();
					while (cin.get() != '\n')
						continue;
					cout << "Please enter a number!\n";
					cout << "round #" << i << ": ";
				}
			}

			double total = 0.0;

			for (int j = 0; j < 5; ++j)
				total += golf[j];

			cout << "Total score is: " << total << endl;

			system("pause");*/

			/* 写文件操作 */

				//char automobile[50];
				//int year;
				//double a_price;
				//double d_price;

				//ofstream outFile;              //创建用于输出的对象
				//outFile.open("carinfo.txt");   //新建文档与文档关联

				//cout << "Enter the make and model of automobile: ";
				//cin.getline(automobile, 50);
				//cout << "Enter the model year: ";
				//cin >> year;
				//cout << "Enter the orginal asking price: ";
				//cin >> a_price;
				//d_price = 0.913 * a_price;

				//cout << fixed;                  //用一般的方式输出浮点数，而不是科学计数法
				//cout.precision(2);              //保留小数点后两位
				//cout.setf(ios_base::showpoint); //强制显示浮点数小数点后的0
				//cout << "Make and model: " << automobile << endl;
				//cout << "year: " << year << endl
				//	<< "Was asking $" << a_price << endl
				//	<< "Now asking $" << d_price << endl;

				//outFile << fixed;
				//outFile.precision(2);
				//outFile.setf(ios_base::showpoint);
				//outFile << "Make and model: " << automobile << endl;
				//outFile << "year: " << year << endl
				//		<< "Was asking $" << a_price << endl
				//		<< "Now asking $" << d_price << endl;

				//outFile.close();

				//system("pause");

			/* 读文件操作 */

				//const int Size = 60;
				//char filename[Size];

				//ifstream inFile;
				//
				//cout << "Enter the name of data file: ";
				//cin.getline(filename, Size);
				//inFile.open(filename);       //关联文件

				//if (!inFile.is_open())
				//{
				//	cout << "Could not open the file " << filename << endl;
				//	cout << "Program terminating.\n";
				//	system("pause");
				//	exit(EXIT_FAILURE);
				//}

				//double value;
				//double sum = 0.0;
				//int count = 0;

				//for (;; inFile >> value)
				//{
				//	
				//	++count;
				//	sum += value;
				//	if (!inFile.good())
				//		break;
				//}
				//if (inFile.eof())
				//	cout << "End of file reached.\n";
				//else if (inFile.fail())
				//	cout << "Input terminated by data mismatch.\n";
				//else
				//	cout << "Input terminated for unknown reason.\n";

				//if (count == 0)
				//	cout << "No data processed.\n";
				//else
				//{
				//	cout << "Items read: " << count << endl;
				//	cout << "sum: " << sum << endl;
				//	cout << "Average: " << sum / count << endl;
				//}

				//inFile.close();
				//system("pause");

			/* 比特平面分层 并 实现一个窗口显示多张图片 */

			//	string path = "D:\\Work\\Coding\\C++\\Opencv\\code\\Test_1\\Document\\doallars.tif";
			//	cv::Mat img_dollar = cv::imread(path, 1);//以灰度图打开
			//	cv::namedWindow("original_Pic", cv::WINDOW_AUTOSIZE);
			//	//cv::namedWindow("0bit_Pic", cv::WINDOW_AUTOSIZE);
			//	if (img_dollar.empty())
			//	{
			//		cout << "Cannot find the picture!";
			//		system("pause");
			//	}
			//	cv::imshow("original_Pic", img_dollar);
			//
			//	unsigned long hist[256];
			//
			//	memset(hist, 0, sizeof(unsigned long) * 256);
			//
			//
			//	cv::Mat img = img_dollar.clone();
			//
			//		for (int i = 0; i < img_dollar.rows; i++)
			//		{
			//			uchar *pCur = img.ptr<uchar>(i);
			//
			//			for (int j = 0; j < img_dollar.cols * img.channels(); j++)
			//			{
			//				uchar tmp = *pCur;
			//				tmp = tmp >> 5;
			//				if (tmp & 0x01)
			//					*pCur = 255;
			//				else
			//					*pCur = 0;
			//				 hist[*pCur]++;
			//				 pCur++;
			//				
			//			}
			//		}	
			//
			//		/*cout << "灰度直方图如下：" << endl;
			//		for (int k = 0; k < 256; k++)
			//		{
			//			float p = hist[k];
			//
			//			cout << "hist[" << k << "] : " << p << endl;
			//		}*/
			//
			//		/*int i = 0, count = 0;
			//		cin >> i;
			//		for (int t = 1; t <= 8; t++)
			//		{
			//			if (i & 0x01)
			//				cout << t << ", ";
			//			i = i >> 1;
			//		}*/
			//	
			//
			//		vector<cv::Mat> images(11);
			//		images[0] = img_dollar;
			//		images[1] = img;
			//		images[2] = img.clone();
			//		images[3] = img_dollar.clone();
			//		images[4] = img.clone();
			//		images[5] = img_dollar.clone();
			//		images[6] = img.clone();
			//		images[7] = img_dollar.clone();
			//		images[8] = img.clone();
			//		images[9] = img_dollar.clone();
			//		images[10] = img.clone();
			//
			//		mergeImg("mergeImg", images, 4, 3);
			//	cv::waitKey(0);
			//	//system("pause");
			//
			////unsigned int p = 255;
			////cout << "255 = " << dec2Bin(p);
			////cout << "&= " << (p & 0x00000100);
			////system("pause");


	///* 平滑处理 + 大津阈值分割 */
	//
	//	string path = "D:\\Work\\Coding\\C++\\Opencv\\code\\Test_1\\Document\\Lena.tif";
	//	cv::Mat img_Lena = cv::imread(path, 0);//以灰度图打开
	//	cv::namedWindow("original_Pic", cv::WINDOW_AUTOSIZE);
	//	cv::namedWindow("Processed_Pic", cv::WINDOW_AUTOSIZE);
	//	cv::namedWindow("Processed_Pic_OTSU", cv::WINDOW_AUTOSIZE);
	//	cv::namedWindow("Processed_Pic_OTSU_fromLib", cv::WINDOW_AUTOSIZE);
	//	if (img_Lena.empty())
	//	{
	//		cout << "Cannot find the picture!";
	//		system("pause");
	//	}
	//	
	//
	//	//均值滤波
	//	cv::Mat img = img_Lena.clone();
	//	cv::imshow("original_Pic", img_Lena);
	//
	//	
	//	
	//	for (int i = 1; i < img.rows - 1; ++i) //行
	//	{
	//
	//		uchar *pCur_Last = img.ptr<uchar>(i - 1);
	//		uchar *pCur = img.ptr<uchar>(i);
	//		uchar *pCur_Next = img.ptr<uchar>(i + 1);
	//
	//		for (int j = 1; j < img.cols - 1; ++j) //列
	//		{
	//			/*uchar neighborhood[9] = { 0 };
	//			neighborhood[0] = pCur[j];*/ //中值滤波会用到
	//			
	//			*pCur = (*(pCur_Last - 1) + *pCur_Last + *(pCur_Last + 1)
	//						+ *(pCur - 1) + *pCur + *(pCur + 1)
	//						+ *(pCur_Next - 1) + *pCur_Next + *(pCur_Next + 1)
	//						) / 9;
	//			
	//			pCur++; pCur_Last++; pCur_Next++;
	//		}
	//	}
	//
	//	//大津阈值
	//
	//	//统计灰度值
	//	int hist_number[256];
	//	memset(hist_number, 0, sizeof(int) * 256);
	//
	//	for (int i = 0; i < img.rows; ++i)
	//	{
	//		uchar *pCur = img.ptr<uchar>(i);
	//
	//		for (int j = 0; j < img.cols; ++j)
	//		{
	//			hist_number[*(pCur++)]++;
	//		}
	//	}
	//
	//	//输出像素数目直方图
	//	for (int i = 0; i < 256; ++i)
	//		cout << "hist_number[" << i << "] = " << hist_number[i] << endl;
	//
	//	int threshold_OTSU = 0;               //大津阈值
	//	double variance_max = 0.0;            //最大类间方差
	//	double foreground_proportion = 0.0;   //前景比例
	//	double background_proportion = 0.0;   //背景比例
	//	double foreground_grayscale_average = 0.0;
	//	double background_grayscale_average = 0.0;
	//
	//	for (int i = 0; i < 256; ++i)
	//	{
	//		int background_sum_number = 0;
	//		long background_sum_garyscale = 0;
	//		int foreground_sum_number = 0;
	//		long foreground_sum_garyscale = 0;
	//
	//		float variance = 0.0;//类间方差
	//
	//		for (int j = 0; j < i; ++j)//背景
	//		{
	//			background_sum_number += hist_number[j];
	//			background_sum_garyscale += j * hist_number[j];
	//		}
	//
	//		for (int k = i; k < 256; ++k)//前景
	//		{
	//			foreground_sum_number += hist_number[k];
	//			foreground_sum_garyscale += k * hist_number[k];
	//		}
	//
	//		background_proportion = float(background_sum_number) / (img.rows * img.cols);
	//		foreground_proportion = float(foreground_sum_number) / (img.rows * img.cols);
	//		
	//		if (background_sum_number == 0 || foreground_sum_number == 0)
	//		{
	//			continue;
	//		}
	//
	//		background_grayscale_average = background_sum_garyscale / background_sum_number;
	//		foreground_grayscale_average = foreground_sum_garyscale / foreground_sum_number;
	//
	//		variance = double(background_proportion * foreground_proportion *
	//			(foreground_grayscale_average - background_grayscale_average) *
	//			(foreground_grayscale_average - background_grayscale_average));
	//
	//		if (variance > variance_max)
	//		{
	//			variance_max = variance;
	//			threshold_OTSU = i;
	//		}
	//
	//	}
	//
	//	cout << "threshold_OTSU = " << threshold_OTSU << endl;
	//	
	//	cv::imshow("Processed_Pic", img);
	//
	//	cv::Mat img_OTSU = img_Lena.clone();
	//
	//	for (int i = 0; i < img_OTSU.rows; ++i)
	//	{
	//		uchar *pCur = img_OTSU.ptr<uchar>(i);
	//
	//		for (int j = 0; j < img_OTSU.cols; ++j)
	//		{
	//			if (*pCur <= threshold_OTSU/* - 20*/)
	//				*pCur = 0;
	//			else 
	//				*pCur = 255;
	//			pCur++;
	//		}
	//	}
	//
	//	cv::Mat img_OTSU_fromLib;
	//	cv::threshold(img_Lena, img_OTSU_fromLib, 0, 255, cv::THRESH_OTSU);
	//
	//	cv::imshow("Processed_Pic_OTSU", img_OTSU);
	//	cv::imshow("Processed_Pic_OTSU_fromLib", img_OTSU_fromLib);
	//
	//	cv::waitKey(0);

	/* 直方图均衡化 */

	string path = "D:\\Work\\Coding\\C++\\Opencv\\code\\Test_1\\Document\\Pea.tif";
	cv::Mat img_Pea = cv::imread(path, 0);

	if (img_Pea.empty())
	{
		cout << "Cannot find the picture!\n";
		system("pause");
		system("exit");
	}

	cv::Mat img_src = img_Pea.clone();
	unsigned int imgSize = img_src.rows * img_src.cols;
	unsigned int hist[256] = { 0 };
	int LUT[256] = { 0 };

	for (int i = 0; i < img_src.rows; ++i)
	{
		uchar *pCur = img_src.ptr<uchar>(i);

		for (int j = 0; j < img_src.cols; ++j)
		{
			hist[*(pCur++)]++;
		}
	}

	for (int i = 0; i < 256; ++i)
		cout << "hist[" << i << "] = " << hist[i] << endl;

	//不使用查找表
	cv::Mat img_dst = img_src.clone();

	//for (int i = 0; i < img_dst.rows; ++i)
	//{
	//	uchar *pCur = img_dst.ptr<uchar>(i);

	//	for (int j = 0/*, sum = 0*/; j < img_dst.cols; ++j)
	//		//这里sum只会初始化一次,在这里初始化sum变量不是好习惯
	//	{
	//		int sum = 0;

	//		for (int k = 0; k <= *pCur; ++k)
	//			//这里，循环嵌套多了对谁都没有好处，Debug太难看出问题来了，以后要避免这种问题
	//		{
	//			sum += hist[k];	
	//		}//这里，每次循环结束后，sum应该被清0
	//		 //养成好的编程习惯，从定义每一个变量做起！

	//		*pCur = 255 * (float(sum) / float(imgSize));

	//		pCur++;
	//	}
	//}

	//使用查找表
	//查找表，时间复杂度小，算法复杂度小
	//养成好习惯，写出每个人都能看懂的算法！
	for (int i = 0, sum = 0; i < 256; ++i)
	{
		sum += hist[i];
		LUT[i] = 255 * (float(sum) / float(imgSize));
	}

	for (int i = 0; i < img_dst.rows; ++i)
	{
		uchar *pCur = img_dst.ptr<uchar>(i);

		for (int j = 0; j < img_dst.cols; ++j)
		{

			*(pCur++) = LUT[*pCur];

		}
	}

	cv::namedWindow("Original_picture", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Processed_picture", cv::WINDOW_AUTOSIZE);
	cv::imshow("Original_picture", img_src);
	cv::imshow("Processed_picture", img_dst);
	cv::waitKey(0);

	return 0;
}