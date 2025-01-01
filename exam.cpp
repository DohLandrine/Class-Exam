#include <iostream>
#include <string.h>
using namespace std;
int main (){
    cout<<"Hello world"<<endl;

    return 0;
}

// Rating Class
class Rating
{
    public:
        Rating();
        double score;
        string aspect;
};

// Student
class Student{
    public:
        string name;
        int id;
        void submitFeedback(){}
};

// feedback class
class Feedback{
    private:
        string dateSubmitted;
        string feedback;
    public:
        // constructors
        Feedback();

        // attributes
        string anonymous;
        int feedbackId;

        // feedback getter
        string getFeedback(){
            return feedback;
        }
};

// survey feedback class
class SurveyFeedback{
    public:
        // constructor
        SurveyFeedback();

        // attributes
        string answer;
        string survey;
};

// Free feedback class
class FreeFeedback{
    public:
        // constructor
        FreeFeedback();
        
        // attributes
        string answer;
        string aspect;
};


// Analysis class
class Analysis{
    public:
        //constructor
        Analysis();

        //attributes
        string trends;
        string areaOfImprovement;
        double finalRating;
        int analysisId;

        //methods
        void analyzeFeedback(){}
        void identifyTrends(){}
        void suggestImprovement(){}

};

// Administrator class
class Administrator{
    public:
        // constructor
        Administrator();

        //attributes
        string name;

        // methods
        void generateAnalysis(){}
        void createSurvey(){}
        void viewAnalysis(){}
};

// Survey class
class Survey{
    public:
        // constructor
        Survey();

        // attributes
        string question;
        string title;
        int surveyId;
};

// Improvement class
class Improvement{
    public:
        //constructor
        Improvement();
        
        // attributes
        string description;
        string implementationDay;
        string feedback;
        int improvementId;
};

// department class
class Department{
    // constructor
    Department();

    // attribute
    string name;

    // method
    void responeToFeedback(){}
    void makeImprovement(){}
};

// Response class
class Response{
    public:
        // constructor
        Response();

        // attributes
        string response;
        string feedback;
        int responseId;
};
