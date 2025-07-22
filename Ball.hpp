#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"
#include "Color.hpp"

class Ball {
public:
    Ball() = default;
    Ball(const Velocity& velocity, const Point& center, const Color& color,
        const double& radius, const double& mass) :
        ball_velocity_ {velocity}, ball_center_ {center}, ball_color_ {color},
        ball_radius_ {radius}, ball_mass_ {mass} {};
    void setVelocity(const Velocity& velocity);
    bool isValid() const;
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
private:
    Velocity ball_velocity_;
    Point ball_center_;
    Color ball_color_;
    double ball_radius_;
    double ball_mass_;
};
