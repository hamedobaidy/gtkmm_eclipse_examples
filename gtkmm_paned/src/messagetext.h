/*
 * messagetext.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef MESSAGETEXT_H_
#define MESSAGETEXT_H_


#include <gtkmm.h>

class MessageText : public Gtk::ScrolledWindow
{
public:
  MessageText();
  virtual ~MessageText();

  void insert_text();

protected:
  Gtk::TextView m_TextView;
};


#endif /* MESSAGETEXT_H_ */
