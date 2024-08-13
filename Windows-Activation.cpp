//Windows激活.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
//命名空间
using namespace std;
//数字
int number;
int main()
{
    //欢迎信息
    cout << "欢迎使用Windows激活工具 作者:图图lyd2012 B站:https://space.bilibili.com/3546384120678937" << endl;
    cout << "本程序仅供个人使用 商业需求禁止使用否则后果字符" << endl;
    cout << "使用方法!!!" << endl;
    cout << "输入完数字后按回车!!! 每次激活只能使用180天过期后请重新激活" << endl;
    cout << "如果提示拒绝访问请使用管理员权限！！" << endl;
    while (true)
    {
        cout << "输入1开始激活 输入0退出:";
        cin >> number;
        //判断输入的数字
        if (number == 1)
        {
            //开始激活Windows
            cout << "正在激活Windows!!!" << endl;
            system("slmgr /skms kms.03k.org");
            system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
            system("slmgr /ato");
            cout << "激活成功!!!" << endl;
        }
        else if (number == 0)
        {
            //退出程序
            return 0;
        }
        else
        {
            cout << "输入错误，请重新输入!" << endl;
            continue;
        }
    }
}