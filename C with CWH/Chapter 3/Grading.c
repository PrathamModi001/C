#include <stdio.h>

int main()
{
    int physics, phy_pass, chemistry, chem_pass, maths, maths_pass, exam_marks;

    //Physics Paper Analysis

    printf("Marks acquired in Physics (Maximum Marks: 50) : \n");
    scanf("%d", &physics);

    phy_pass = 0.33 * 50;

    if (physics >= phy_pass)
    {printf("Congrats! You have passed the Physics Test.\n\n");}

    else
    {printf("You have faled the Physics Test. I know you can do better! \n\n");}

    //Chemistry Paper Analysis

    printf("Marks acquired in Chemistry (Maximum Marks: 50) : \n");
    scanf("%d", &chemistry);

    chem_pass = 0.33 * 50;

    if (chemistry >= phy_pass)
    {printf("Congrats! You have passed the Chemistry Test.\n\n");}

    else
    {printf("You have faled the Chemistry Test. I know you can do better! \n\n");}

    //Maths Paper Analysis

    printf("Marks acquired in Maths (Maximum Marks: 50) : \n");
    scanf("%d", &maths);

    maths_pass = 0.33 * 50;

    if (maths >= maths_pass)
    { printf("Congrats! You have passed the Maths Test.\n\n");}

    else
    {printf("You have faled the Chemistry Test. I know you can do better! \n\n");}

    //Full Exam Analysis

    exam_marks = physics + chemistry + maths;

    printf("Total Marks Acquired = %d/150\n\n\n", exam_marks);

    if (exam_marks > 60)
    {printf("You have succesfully PASSED the exam. Congratulations, Rest Easy King ");}

    else
    {printf("You have FAILED the exam :( Study Harder next time.");}

    return 0;
}