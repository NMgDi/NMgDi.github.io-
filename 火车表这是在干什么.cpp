#include <iostream>
using namespace std;

int main() {
    int time1, time2;
    cin >> time1 >> time2;  // 读取出发和到达时间
    
    // 分解出发时间的小时和分钟
    int h1 = time1 / 100;
    int m1 = time1 % 100;
    
    // 分解到达时间的小时和分钟
    int h2 = time2 / 100;
    int m2 = time2 % 100;
    
    // 转换为总分钟数
    int total_minutes1 = h1 * 60 + m1;
    int total_minutes2 = h2 * 60 + m2;
    
    // 计算时间差（总分钟数）
    int diff_minutes = total_minutes2 - total_minutes1;
    
    // 转换为小时和分钟
    int hours = diff_minutes / 60;
    int minutes = diff_minutes % 60;
    
    // 输出结果
    cout << hours << "小时" << minutes << "分钟" << endl;
    
    return 0;
}