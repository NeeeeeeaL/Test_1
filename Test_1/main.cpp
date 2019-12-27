#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

#define PI (acos(-1))

using namespace std;

//ʮ����ת������
int dec2Bin(int dec)
{
	int result = 0, tmp = dec, i = 1;
	while (tmp)
	{
		result = result + i * (tmp % 2);
		tmp /= 2;
		i *= 10;
	}
	return result;
}

//������תʮ����
int bin2Dec(int bin)
{
	int result = 0, tmp = bin;
	for (int i = 7; i >= 0; --i)
	{

		tmp = bin / pow(10, i);
		bin %= int(pow(10, i));
		result += (tmp * pow(2, i));
	}
	return result;
}

//ͼƬ�ϲ���ʾ

void mergeImg(const char *windowName, vector<cv::Mat> &images, int rows, int cols)
{
	int imgNum = int(images.size());
	cv::Mat img_disp;
	const int size = 400;
	img_disp.create(cv::Size(100 + size * cols, 60 + size * rows), CV_8UC3);
	float scale;

	for (int i = 0, m = 20, n = 20, max = 0; i < imgNum; i++)
	{
		int x, y;
		x = images[i].rows;
		y = images[i].cols;

		max = (x > y) ? x : y;
		scale = (float)(float(max) / size);//��ģ

		

		if (i % cols == 0 && m != 20)
		{
			n = n + 20 + (int)(x / scale);
			m = 20;
		}

		cv::Mat imgROI = img_disp(cv::Rect(m, n, (int)(y / scale), (int)(x / scale)));
		cv::resize(images[i], imgROI, cv::Size((int)(y / scale), (int)(x / scale)));

		m += 20 + (int)(y / scale);
	}

	cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
	cv::imshow(windowName, img_disp);

}

int main()
{ 

/* ��˹ƽ������ */

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

	////ƽ������
	//cv::Mat out ;

	//cv::GaussianBlur(img, out, cv::Size(5, 5), 3, 3);
	//cv::GaussianBlur(out, out, cv::Size(5, 5), 3, 3);


	//cv::imshow("Processed_Pic", out);

	//cv::waitKey(0);
	//cv::destroyWindow("Original_Pic");
	//cv::destroyWindow("Processed_Pic");


/* 500x500��ͨ��ͼ��ÿ������ֵ��Ϊ0 */

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

/* ֱ��ͼͳ�� */

	//string path = "C:\\Users\\Adam0\\Desktop\\C++\\Opencv\\code\\Test_1\\Document\\Lena.tif";

	//cv::Mat img = cv::imread(path, 0);

	//if (img.empty())
	//{
	//	cout << "Fail to read the piture!" << endl;
	//	system("pause");
	//	return -1;
	//}

	//cv::Mat img2 = img.clone();

	//int nr = img.rows; //����
	//int nc = img.cols * img.channels(); //ÿ��Ԫ�صĸ���
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

	//cout << "�Ҷ�ֱ��ͼ���£�" << endl;
	//for (int k = 0; k < 256; k++)
	//{
	//	float p = hist[k] / float((nr * nc));

	//	cout << "hist[" << k << "] : " << p << endl;
	//}

	////��ȡ����ͼ��

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

/* �������ҹ�դ���� */

	//const int period = 10;
	//unsigned int t = period;  //����
	//float f = 1 / float(t);   //Ƶ��
	//float w = 2 * PI * f;     //��Ƶ��

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

/* c++ѧϰ��ѭ�������ַ� */
	
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

/* cin��ȡ���� */

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

/* д�ļ����� */

	//char automobile[50];
	//int year;
	//double a_price;
	//double d_price;

	//ofstream outFile;              //������������Ķ���
	//outFile.open("carinfo.txt");   //�½��ĵ����ĵ�����

	//cout << "Enter the make and model of automobile: ";
	//cin.getline(automobile, 50);
	//cout << "Enter the model year: ";
	//cin >> year;
	//cout << "Enter the orginal asking price: ";
	//cin >> a_price;
	//d_price = 0.913 * a_price;

	//cout << fixed;                  //��һ��ķ�ʽ����������������ǿ�ѧ������
	//cout.precision(2);              //����С�������λ
	//cout.setf(ios_base::showpoint); //ǿ����ʾ������С������0
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

/* ���ļ����� */

	//const int Size = 60;
	//char filename[Size];

	//ifstream inFile;
	//
	//cout << "Enter the name of data file: ";
	//cin.getline(filename, Size);
	//inFile.open(filename);       //�����ļ�

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

/* ����ƽ��ֲ� �� ʵ��һ��������ʾ����ͼƬ */

	string path = "D:\\Work\\Coding\\C++\\Opencv\\code\\Test_1\\Document\\doallars.tif";
	cv::Mat img_dollar = cv::imread(path, 1);//�ԻҶ�ͼ��
	cv::namedWindow("original_Pic", cv::WINDOW_AUTOSIZE);
	//cv::namedWindow("0bit_Pic", cv::WINDOW_AUTOSIZE);
	if (img_dollar.empty())
	{
		cout << "Cannot find the picture!";
		system("pause");
	}
	cv::imshow("original_Pic", img_dollar);

	unsigned long hist[256];

	memset(hist, 0, sizeof(unsigned long) * 256);


	cv::Mat img = img_dollar.clone();

		for (int i = 0; i < img_dollar.rows; i++)
		{
			uchar *pCur = img.ptr<uchar>(i);

			for (int j = 0; j < img_dollar.cols * img.channels(); j++)
			{
				uchar tmp = *pCur;
				tmp = tmp >> 5;
				if (tmp & 0x01)
					*pCur = 255;
				else
					*pCur = 0;
				 hist[*pCur]++;
				 pCur++;
				
			}
		}	

		/*cout << "�Ҷ�ֱ��ͼ���£�" << endl;
		for (int k = 0; k < 256; k++)
		{
			float p = hist[k];

			cout << "hist[" << k << "] : " << p << endl;
		}*/

		/*int i = 0, count = 0;
		cin >> i;
		for (int t = 1; t <= 8; t++)
		{
			if (i & 0x01)
				cout << t << ", ";
			i = i >> 1;
		}*/
	

		vector<cv::Mat> images(11);
		images[0] = img_dollar;
		images[1] = img;
		images[2] = img.clone();
		images[3] = img_dollar.clone();
		images[4] = img.clone();
		images[5] = img_dollar.clone();
		images[6] = img.clone();
		images[7] = img_dollar.clone();
		images[8] = img.clone();
		images[9] = img_dollar.clone();
		images[10] = img.clone();

		mergeImg("mergeImg", images, 4, 3);
	cv::waitKey(0);
	//system("pause");

//unsigned int p = 255;
//cout << "255 = " << dec2Bin(p);
//cout << "&= " << (p & 0x00000100);
//system("pause");


	return 0;
}