/*
 * examplewindow.h
 *
 *  Created on: Jul 1, 2015
 *      Author: hamed
 */

#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_


#include "messageslist.h"
#include "messagetext.h"
#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:

  //Child widgets:
  Gtk::Paned m_VPaned;
  MessagesList m_MessagesList;
  MessageText m_MessageText;
};

#endif /* EXAMPLEWINDOW_H_ */
