int* ptr = new int(10);
// 将 int 指针转换为 int 类型的整数
int intValue = reinterpret_cast<int>(ptr);

// 将 int 类型的整数转换回 int 指针
int* newPtr = reinterpret_cast<int*>(intValue);

// 将 int 指针转换为 void 指针
void* voidPtr = reinterpret_cast<void*>(ptr);

// 将 void 指针转换回 int 指针
int* anotherPtr = reinterpret_cast<int*>(voidPtr);
