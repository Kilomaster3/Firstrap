//
//  fraction.h
//  1001task
//
//  Created by mb on 26/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef fraction_h
#define fraction_h
#include <iostream>
#include <string>
struct Fraction{
    int m_num;
    int m_denum;
    Fraction(){
        std::cout << "Fraction() " << std::endl;
    }
    Fraction(int num , int denum): m_num(num), m_denum(denum){
        normalize();
        std::cout << "Fraction(int num , int denum)" << std::endl;
    }
    std::string to_string(){
        std::string  result;
        result +=  std::to_string(m_num);
        result.push_back('/');
        result += std::to_string(m_denum);
        return result;
    }
    Fraction operator* (Fraction b ){
        Fraction result;
        result.m_num = m_num * b.m_num;
       result.m_denum = m_denum * b.m_denum;
        result.normalize();
        return result;
    }
    Fraction operator/ (Fraction b ){
        Fraction result;
        result.m_num = m_num * b.m_denum;
        result.m_denum = m_num * m_denum;
        result.normalize();
        return result;
    }
   bool operator== (Fraction b ){
       normalize();
       b.normalize();
       return m_num == b.m_num && m_denum == b.m_denum;
    }
    bool operator< (Fraction b ){
        normalize();
        b.normalize();
        int temp = common_denum(b);
        return m_num * (temp / m_denum) < b.m_num * (temp / b.m_denum);
    }
    bool operator> (Fraction b ){
        normalize();
        b.normalize();
        int temp = common_denum(b);
        return m_num * (temp / m_denum) > b.m_num * (temp / b.m_denum);
    }
    void normalize(){
        int temp = stu::gcd(m_num , m_denum);
        m_num /= temp;
        m_denum /= temp;
        
    }
    int common_denum(Fraction b ){
        normalize();
        b.normalize();
        return stu::lcm(m_denum, b.m_denum);
    }
    
};

#endif /* fraction_h */
