//Windows����.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
#include <iostream>
//�����ռ�
using namespace std;
//����
int number;
int main()
{
    //��ӭ��Ϣ
    cout << "��ӭʹ��Windows����� ����:ͼͼlyd2012 Bվ:https://space.bilibili.com/3546384120678937" << endl;
    cout << "�������������ʹ�� ��ҵ�����ֹʹ�÷������ַ�" << endl;
    cout << "ʹ�÷���!!!" << endl;
    cout << "���������ֺ󰴻س�!!! ÿ�μ���ֻ��ʹ��180����ں������¼���" << endl;
    cout << "�����ʾ�ܾ�������ʹ�ù���ԱȨ�ޣ���" << endl;
    while (true)
    {
        cout << "����1��ʼ���� ����0�˳�:";
        cin >> number;
        //�ж����������
        if (number == 1)
        {
            //��ʼ����Windows
            cout << "���ڼ���Windows!!!" << endl;
            system("slmgr /skms kms.03k.org");
            system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
            system("slmgr /ato");
            cout << "����ɹ�!!!" << endl;
        }
        else if (number == 0)
        {
            //�˳�����
            return 0;
        }
        else
        {
            cout << "�����������������!" << endl;
            continue;
        }
    }
}