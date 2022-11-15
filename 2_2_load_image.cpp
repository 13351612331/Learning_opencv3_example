//
// Created by kangyu on 22-11-15.
//
#include "opencv2/highgui/highgui.hpp"
using namespace cv;
int main(int argc, char **argv) {
  /**
   * 载入图像，cv::imread是高级的，依据文件名来决定载入图像格式的处理
   */
  Mat img = imread(argv[1], -1);
  /**
   * 检查图像是否被载入
   */
  if (img.empty()) {
    return -1;
  }
  /**
   * 将一个名称（Example1）赋予窗口，未来HighGUI和这个窗口的交互函数将由这个名称来指定要与哪个窗口交互
   */
  namedWindow("Example1", cv::WINDOW_AUTOSIZE);
  /**
   * 用来显示图像的窗口（如果这个窗口不存在，它会自动调用nameWindow)
   */
  imshow("Example1", img);
  /**
   * 告诉系统暂停并且等待键盘事件，如果传入值大于0,将会等待等同于该参数的毫秒时间，然后继续执行程序，
   * 如果参数小于或等于0,程序将会无限等待直到有按键按下
   */
  waitKey(0);
  return 0;
}