#include <iostream>
#include <string>

using namespace std;

class Training {
  protected:
    string school;
    string offeredBy;
    int creditHours;
    double tuition;
  public:
    Training(string ob, string s, int ch, double t): offeredBy(ob), school(s), creditHours(ch), tuition(t) {};
    void showTraining() {
      // Format: School OfferedBy creditHours Tuition
      cout << "--------------- OFFERED BY --------------------" << endl;
      cout << "School: " << school << endl;
      cout << offeredBy << " " << creditHours << " credits. Tuition $"<< tuition << endl;
    }
};

class Registration {
  private:
    string studentName = "";
    string courseName = "";
    double labFee = 0.0;
  public:
    Registration(){}

    void setStudentName(string sn) { studentName = sn; }
    string getStudentName() const {return studentName; }

    void setCourseName(string cn) { courseName = cn; }
    string getCourseName() const { return courseName; }

    void setLabFee(double lf) { labFee = lf; }
    double getLabFee() const { return labFee; }
    void showRegisteredTraining() {
      cout << "Student registered: " << studentName << endl;
      cout << "Course registered: " << courseName << endl;
      cout << "Lab fee to be paid: " << labFee << endl;
    }
};

int main() {
  /*
  You have been tasked at work with developing a program that will serve as an online registration system for training classes offered by the company.
  */
  // Format: OfferedBy School CreditHours Tuition
  double tuition = 2295;
  double labFee = 30.25;
  string yourName = "";
  Training cc("Microsoft", "Tarrant County College", 4, tuition);
  cc.showTraining();

  Registration rg;
  rg.setCourseName("CompTIA A+");
  cout << "Course to register on: " << rg.getCourseName() << endl;
  rg.setLabFee(labFee);
  cout << "Please enter your name to register: " << endl;
  cin >> yourName;
  rg.setStudentName(yourName);
  rg.showRegisteredTraining();

  double finalAmount = (tuition + labFee);

  cout << "Final Amount to be Paid by student: " << finalAmount << endl;

  return 0;
}