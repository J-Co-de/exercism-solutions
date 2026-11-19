#include <array>
#include <string>
#include <vector>
#include <cmath>
#include <iostream>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> student_scores_floor;
    for(int i = 0; i < student_scores.size(); i++) {
        student_scores_floor.push_back(floor(student_scores[i]));
    }
    return student_scores_floor;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int fail_count = 0;
    for(int i = 0; i < student_scores.size(); i++) {
        if(student_scores[i] <= 40) {
            fail_count++;
        }
    }
    return fail_count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int difference = (highest_score - 40) / 4;
    std::array<int,4> scores = {41};
    for(int i = 1; i < 4; i++) {
        scores[i] = 41 + (difference * i);
    } 
    return scores;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> ranking_students;
    for(int i = 0;  i < student_scores.size(); i++) {
        ranking_students.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return ranking_students;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for(int i = 0; i < student_scores.size(); i++) {
        if(student_scores[i] == 100) {
            return student_names[i];
        }
    }
    
    return "";
}
