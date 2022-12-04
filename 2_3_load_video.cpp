//
// Created by kangyu on 22-12-4.
//
// 一个简单的播放视频文件的OpenCV程序
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

int main(int argc, char **argv) {
  cv::namedWindow("Example3", cv::WINDOW_AUTOSIZE);
  cv::VideoCapture cap;
  cap.open(std::string(argv[1]));
  cv::Mat frame;
  for (;;) {
    cap >> frame;
    if (frame.empty())
      break;
    cv::imshow("Example3", frame);
    // 等待33ms，如果用户在这段时间在键盘有任何输入，将退出循环，如果没有发生，33ms之后执行下一个循环。
    // 在退出的时候所有数据的内存空间将会由于生命周期的结束被自动释放掉。
    if (cv::waitKey(33) >= 0)
      break;
  }
  return 0;
}