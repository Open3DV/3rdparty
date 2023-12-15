#pragma once

#ifdef _WIN32 
#define DF_SDK_API __declspec(dllexport)

#elif __linux
#define DF_SDK_API 
#endif

//�豸������Ϣ�ṹ��
struct DeviceBaseInfo
{
	//����ڲ�
	char mac[64];
	//������
	char ip[64];
};

//�������� DfUpdateDeviceList
//���ܣ� ��ȡ�������豸��
//��������� device_num(�豸��)
//��������� ��
//����ֵ�� ���ͣ�int��:����0��ʾ���ӳɹ�;����-1��ʾ����ʧ��.
DF_SDK_API int DfUpdateDeviceList(int& device_num);

//�������� DfGetAllDeviceBaseInfo
//���ܣ� ��ȡ�豸������Ϣ
//��������� pDeviceInfo(�豸��Ϣ)��pBufferSize���豸�ṹ���ڴ�ߴ磩
//��������� ��
//����ֵ�� ���ͣ�int��:����0��ʾ���ӳɹ�;����-1��ʾ����ʧ��.
DF_SDK_API int DfGetAllDeviceBaseInfo(DeviceBaseInfo* pDeviceInfo, int* pBufferSize);