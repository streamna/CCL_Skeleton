//  Joint.h
//  CinderProject
//
//  Created by StreamGao on 8/29/15.


#pragma once

class Joint {
public:
    std::string name;
    //Joint *lchild,*mchild,*rchild, *parent;
    int lchild, mchild, rchild, parent;
    int degree;
    float m = 5;
    float damp = 0.3;
    bool drag = false;
    
    glm::vec3 location;
    glm::vec3 velocity;
    glm::vec3 acceleration;
    glm::vec3 offsetLoc;
    
    Joint();
    Joint(glm::vec3 l);
    Joint(glm::vec3 l,std::string name);
    Joint(ci::vec3 loc, int d, int p, int l, int m, int r, std::string n);
    Joint(glm::vec3 loc, int p, int l, int m, int r, std::string n);
    
    void display();
    void update();
    void update1(ci::vec3 newloc);
    void update2();
    void applyForce(ci::vec3 f);
    
    void click(ci::vec3 po);
    void dragged(ci::vec3 po);
    
    bool isDataDriven;
    
};
