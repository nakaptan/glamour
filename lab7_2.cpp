#include <iostream>
#include <string>
using namespace std;

//----getline(cin, value) รับค่าทั้งบรรทัด รวมทั้งช่องว่างด้วย โดยปกติแล้ว cin >> __; จะหยุดเก็บค่าต่อเมื่อเจอ ช่องว่าง(space), \n, \t
//----cin.ignore(); เพื่อลบค่าบัฟเฟอร์ที่มีอยู่ก่อนหน้า มีไว้เพื่อกำจัด (หรือข้าม) ข้อมูลที่ค้างอยู่ในบัฟเฟอร์นั้น.
//----to_string() เปลี่ยน int เป็น string 
//----string substr (size_t pos = 0, size_t len = npos) const; / pos: ตำแหน่งเริ่มต้นของสตริงย่อย (index) ที่ต้องการดึง. / len: ความยาวของสตริงย่อยที่ต้องการดึง.
//----stoi() แปลงค่าจาก string เป็น int

int main(){
    string username, name_movie, free_day, last_conver;
    int student_id;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, username); // ใช้ getline(cin, string) เพื่อรับค่าทั้งบรรทัด

    cout << "Fahsai: Wow!!! " << username << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;

    cout << username << ": ";
    cin >> student_id;
    cin.ignore(); // เพื่อลบค่าบัฟเฟอร์ที่มีอยู่ก่อนหน้า
    
    // แปลงค่า int to string เพื่อดึงค่า --> substr() 2ตัวหน้า จากนั้นเปลี่ยนเป็น int
    string str = to_string(student_id);
    string firstTwoNum = str.substr(0,2);
    int firstTwoNumToInt = stoi(firstTwoNum);
    
    // หารุ่น Gear
    firstTwoNumToInt -= 12;
    cout << "Fahsai: I think you may be GEAR " << firstTwoNumToInt << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;

    // รับชื่อหนัง
    cout << username << ": ";
    getline(cin, name_movie);

    // รับวันที่ว่าง
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << username << ": " ;
    getline(cin, free_day);

    cout << "Fahsai: " << free_day << "....that is OK!!! I'm looking forward to watching " << name_movie << " with you." << endl;
    cout << username << ": ";
    cin >> last_conver;
    
    cout << "Fahsai: 555+ see you " << free_day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}