int* ptr = new int(10);
// �� int ָ��ת��Ϊ int ���͵�����
int intValue = reinterpret_cast<int>(ptr);

// �� int ���͵�����ת���� int ָ��
int* newPtr = reinterpret_cast<int*>(intValue);

// �� int ָ��ת��Ϊ void ָ��
void* voidPtr = reinterpret_cast<void*>(ptr);

// �� void ָ��ת���� int ָ��
int* anotherPtr = reinterpret_cast<int*>(voidPtr);
