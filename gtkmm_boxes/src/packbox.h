/*
 * packbox.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef PACKBOX_H_
#define PACKBOX_H_


#include <gtkmm.h>

class PackBox : public Gtk::Box
{
public:
  PackBox(bool homogeneous, int spacing, Gtk::PackOptions options, int padding = 0);
  virtual ~PackBox();

protected:
  Gtk::Button m_button1, m_button2, m_button3;
  Gtk::Button* m_pbutton4;
};


#endif /* PACKBOX_H_ */
