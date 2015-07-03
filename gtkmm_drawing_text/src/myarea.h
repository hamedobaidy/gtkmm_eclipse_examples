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

private:
  void draw_rectangle(const Cairo::RefPtr<Cairo::Context>& cr, int width, int height);
  void draw_text(const Cairo::RefPtr<Cairo::Context>& cr, int rectangle_width, int rectangle_height);

};


#endif /* MYAREA_H_ */
