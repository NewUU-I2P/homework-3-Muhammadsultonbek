#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
if (sex == 'M') {
        if (height < 1.70) {
            result = "Short";
        } else if (height >= 1.70 && height < 1.85) {
            result = "Normal";
        } else {
            result = "Tall";
        }
    } else if (sex == 'F') {
        if (height < 1.60) {
            result = "Short";
        } else if (height >= 1.60 && height < 1.75) {
            result = "Normal";
        } else {
            result = "Tall";
        }
    } else {

        result = "Invalid sex input";
    }

    // Return the result
    return result;
    // use return to return your result
    // make use of control flow statements
}
