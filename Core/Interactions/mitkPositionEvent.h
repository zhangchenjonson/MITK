#ifndef POSITIONEVENT_H_HEADER_INCLUDED_C184F366
#define POSITIONEVENT_H_HEADER_INCLUDED_C184F366

#include "mitkCommon.h"
#include <vecmath.h>
#include "Event.h"
#include "mitkVector.h"


namespace mitk {

//##ModelId=3E5B79B5012A
//##Documentation
//## @brief Event, that also stores coordinates
//## @ingroup Interaction
//## 
//## Stores DisplayPosition from Mouse.
//## Later on the WorldPosition according to a BaseRender can be calculated and
//## set.
class PositionEvent : public Event
{
  public:
    //##ModelId=3E5B7CF900F0
    //##Documentation
    //## @brief Constructor with all necessary arguments.
    //##
    //## @params sender: the widget, that caused that event, so that it can be asked for worldCoordinates. changed later to a focus
    //##        type, button, buttonState, key: information from the Event
    //##        displPosition: the 2D Position e.g. from the mouse
    //##        worldPosition:
    PositionEvent(mitk::BaseRenderer* sender, int type, int button, int buttonState, int key, const mitk::Point2D& displPosition, const mitk::Point3D& worldPosition);

	//##ModelId=3E5B79DE0133
    const Point2D& GetDisplayPosition() const;
	
    //##ModelId=3EDC8EEC00F8
	const Point3D& GetWorldPosition() const;

    //##ModelId=3EDC8EEC0136
	void SetWorldPosition(const Point3D& worldPosition);

    
  private:
    //##ModelId=3E5B79D00395
    Point2D m_DisplayPosition;
	
    //##ModelId=3EDC8EEC008A
	Point3D m_WorldPosition;
};

} // namespace mitk



#endif /* POSITIONEVENT_H_HEADER_INCLUDED_C184F366 */
