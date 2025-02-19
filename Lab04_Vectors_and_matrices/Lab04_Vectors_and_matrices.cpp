#include <iostream>

// Include the glm library
#include <glm/glm.hpp>
#include <glm/gtx/io.hpp>

using namespace std;

int main() {
    
    //vectors
    printf("vectors and matrices\n");
    printf("______________________________\n");

    // defining vectors 
    glm::vec3 a, b;
    a = glm::vec3(3.0f, 0.0f, 4.0f);
    b[0] = 1.0f, b[1] = 2.0f, b[2] = 3.0f;

    printf("defining vectors : \n");
   
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;



    return 0;
}
