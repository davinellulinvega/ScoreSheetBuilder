#ifndef RESULT_H
#define RESULT_H

class Result
{
public:
    //Constructor
    Result(int id, int stdId, int lectId, int markId);

    //Getter and Setter
    //Id
    int getId();

    //Student Id
    int getStudentId();
    void setStudentId(int id);

    //Lecture Id
    int getLectureId();
    void setLectureId(int id);

    //Mark Id
    int getMarkId();
    void setMarkId(int id);

private:
    int m_id;
    int m_studentId;
    int m_lectureId;
    int m_markId;
};

#endif // RESULT_H
