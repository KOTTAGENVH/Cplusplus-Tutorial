class Student{
private:
  int studentID;
  char studentName[50];
  int marksOOC;
  int marksSPM;
  int marksISDM;

public:
 void setStudentDetails(int sID, char const sName[50]);
 void setMarksOOC(int mOOC);
 int getMarksOOC();
 void setMarksSPM(int mSPM);
 int getMarksSPM();
 void setMarksISDM(int mISDM);
 int getMarksISDM();
};