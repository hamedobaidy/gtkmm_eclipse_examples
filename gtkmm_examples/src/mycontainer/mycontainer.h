/*
 * mycontainer.h
 *
 *  Created on: Jul 5, 2015
 *      Author: hamed
 */

#ifndef MYCONTAINER_H_
#define MYCONTAINER_H_


#include <gtkmm/container.h>

class MyContainer : public Gtk::Container
{
public:
  MyContainer();
  virtual ~MyContainer();

  void set_child_widgets(Gtk::Widget& child_one, Gtk::Widget& child_two);

protected:

  //Overrides:
  virtual Gtk::SizeRequestMode get_request_mode_vfunc() const;
  virtual void get_preferred_width_vfunc(int& minimum_width, int& natural_width) const;
  virtual void get_preferred_height_for_width_vfunc(int width, int& minimum_height, int& natural_height) const;
  virtual void get_preferred_height_vfunc(int& minimum_height, int& natural_height) const;
  virtual void get_preferred_width_for_height_vfunc(int height, int& minimum_width, int& natural_width) const;
  virtual void on_size_allocate(Gtk::Allocation& allocation);

  virtual void forall_vfunc(gboolean include_internals, GtkCallback callback, gpointer callback_data);

  virtual void on_add(Gtk::Widget* child);
  virtual void on_remove(Gtk::Widget* child);
  virtual GType child_type_vfunc() const;

  Gtk::Widget* m_child_one;
  Gtk::Widget* m_child_two;
};


#endif /* MYCONTAINER_H_ */
