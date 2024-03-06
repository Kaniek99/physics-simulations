#include "gdexample.hpp"

godot::GDExample::GDExample() {
  time_passed = 0.0;

  Sphere sphere_(Vector3(0.0, 0.0, 0.0), 5.0, 20.0, 20.0);
  this->add_child(&sphere_);

  main_camera_ = new godot::Camera3D;
  main_camera_->set_fov(75.0);
  main_camera_->set_near(0.05);
  main_camera_->set_far(4000.0);
  main_camera_->set_position(Vector3(0, 0, 20));
  this->add_child(main_camera_);

  omnilight_ = new godot::OmniLight3D;
  omnilight_->set_position(Vector3(0, 7, 0));
  this->add_child(omnilight_);
}

godot::GDExample::~GDExample() {
  delete sphere_;
  delete main_camera_;
  delete omnilight_;
}
