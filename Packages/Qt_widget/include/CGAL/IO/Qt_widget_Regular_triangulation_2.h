#ifndef CGAL_QT_WIDGET_REGULAR_TRIANGULATION_2_H
#define CGAL_QT_WIDGET_REGULAR_TRIANGULATION_2_H

#include <CGAL/IO/Qt_widget.h>
#include <CGAL/Regular_triangulation_2.h>

namespace CGAL{

template < class Gt, class Tds >
Qt_widget&
operator<<(Qt_widget& w, Regular_triangulation_2<Gt,Tds> &t)
{
  w.lock();
  t.draw_triangulation(w);
  w.unlock();
  return w;
}

}//end namespace CGAL

#endif
