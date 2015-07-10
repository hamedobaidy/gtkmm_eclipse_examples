/*
 * myarea.h
 *
 *  Created on: Jul 3, 2015
 *      Author: hamed
 */

#ifndef MYAREA_H_
#define MYAREA_H_


#include <gtkmm/drawingarea.h>

class MyArea : public Gtk::DrawingArea
{
public:
  MyArea();
  virtual ~MyArea();

protected:
  //Override default signal handler:
  virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);
};


#endif /* MYAREA_H_ */
