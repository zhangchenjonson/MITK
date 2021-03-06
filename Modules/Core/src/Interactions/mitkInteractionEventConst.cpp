/*============================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center (DKFZ)
All rights reserved.

Use of this source code is governed by a 3-clause BSD license that can be
found in the LICENSE file.

============================================================================*/

#include "mitkInteractionEventConst.h"

namespace mitk
{
  const std::string InteractionEventConst::xmlHead()
  {
    static const std::string xmlHead = "<?xml version='1.0'?>";
    return xmlHead;
  }

  const std::string InteractionEventConst::xmlTagConfigRoot()
  {
    static const std::string xmlTagConfigRoot = "config";
    return xmlTagConfigRoot;
  }

  const std::string InteractionEventConst::xmlTagEvents()
  {
    static const std::string xmlTagEvents = "events";
    return xmlTagEvents;
  }

  const std::string InteractionEventConst::xmlTagInteractions()
  {
    static const std::string xmlTagInteractions = "interactions";
    return xmlTagInteractions;
  }

  const std::string InteractionEventConst::xmlTagRenderer()
  {
    static const std::string xmlTagRenderer = "renderer";
    return xmlTagRenderer;
  }

  const std::string InteractionEventConst::xmlTagParam()
  {
    static const std::string xmlTagParam = "param";
    return xmlTagParam;
  }

  const std::string InteractionEventConst::xmlTagEventVariant()
  {
    static const std::string xmlTagEventVariant = "event_variant";
    return xmlTagEventVariant;
  }

  const std::string InteractionEventConst::xmlTagAttribute()
  {
    static const std::string xmlTagAttribute = "attribute";
    return xmlTagAttribute;
  }

  const std::string InteractionEventConst::xmlParameterName()
  {
    static const std::string xmlParameterName = "name";
    return xmlParameterName;
  }

  const std::string InteractionEventConst::xmlParameterValue()
  {
    static const std::string xmlParameterValue = "value";
    return xmlParameterValue;
  }

  const std::string InteractionEventConst::xmlParameterEventVariant()
  {
    static const std::string xmlParameterEventVariant = "event_variant";
    return xmlParameterEventVariant;
  }

  const std::string InteractionEventConst::xmlParameterEventClass()
  {
    static const std::string xmlParameterEventClass = "class";
    return xmlParameterEventClass;
  }

  const std::string InteractionEventConst::xmlEventPropertyModifier()
  {
    static const std::string xmlEventPropertyModifier = "Modifiers";
    return xmlEventPropertyModifier;
  }

  const std::string InteractionEventConst::xmlEventPropertyEventButton()
  {
    static const std::string xmlEventPropertyEventButton = "EventButton";
    return xmlEventPropertyEventButton;
  }

  const std::string InteractionEventConst::xmlEventPropertyButtonState()
  {
    static const std::string xmlEventPropertyButtonState = "ButtonState";
    return xmlEventPropertyButtonState;
  }

  const std::string InteractionEventConst::xmlEventPropertyPositionInWorld()
  {
    static const std::string xmlEventPropertyPosition = "PositionInWorld";
    return xmlEventPropertyPosition;
  }

  const std::string InteractionEventConst::xmlEventPropertyPositionOnScreen()
  {
    static const std::string xmlEventPropertyPosition = "PositionOnScreen";
    return xmlEventPropertyPosition;
  }

  const std::string InteractionEventConst::xmlEventPropertyKey()
  {
    static const std::string xmlEventPropertyKey = "Key";
    return xmlEventPropertyKey;
  }

  const std::string InteractionEventConst::xmlEventPropertyScrollDirection()
  {
    static const std::string xmlEventPropertyScrollDirection = "ScrollDirection";
    return xmlEventPropertyScrollDirection;
  }

  const std::string InteractionEventConst::xmlEventPropertyWheelDelta()
  {
    static const std::string xmlEventPropertyWheelDelta = "WheelDelta";
    return xmlEventPropertyWheelDelta;
  }

  const std::string InteractionEventConst::xmlEventPropertySignalName()
  {
    static const std::string xmlEventPropertySignalName = "SignalName";
    return xmlEventPropertySignalName;
  }

  const std::string InteractionEventConst::xmlEventPropertyRendererName()
  {
    static const std::string xmlEventPropertyRendererName = "RendererName";
    return xmlEventPropertyRendererName;
  }

  const std::string InteractionEventConst::xmlEventPropertyViewDirection()
  {
    static const std::string xmlEventPropertyViewDirection = "ViewDirection";
    return xmlEventPropertyViewDirection;
  }

  const std::string InteractionEventConst::xmlEventPropertyMapperID()
  {
    static const std::string xmlEventPropertyMapperID = "MapperID";
    return xmlEventPropertyMapperID;
  }

  const std::string mitk::InteractionEventConst::xmlRenderSizeX()
  {
    static const std::string xmlSize = "RenderSizeX";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlRenderSizeY()
  {
    static const std::string xmlSize = "RenderSizeY";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlRenderSizeZ()
  {
    static const std::string xmlSize = "RenderSizeZ";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlViewUpX()
  {
    static const std::string xmlSize = "ViewUpX";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlViewUpY()
  {
    static const std::string xmlSize = "ViewUpY";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlViewUpZ()
  {
    static const std::string xmlSize = "ViewUpZ";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlCameraPositionX()
  {
    static const std::string xmlSize = "CameraPositionX";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlCameraPositionY()
  {
    static const std::string xmlSize = "CameraPositionY";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlCameraPositionZ()
  {
    static const std::string xmlSize = "CameraPositionZ";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlCameraFocalPointX()
  {
    static const std::string xmlSize = "CameraFocalPointX";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlCameraFocalPointY()
  {
    static const std::string xmlSize = "CameraFocalPointY";
    return xmlSize;
  }

  const std::string mitk::InteractionEventConst::xmlCameraFocalPointZ()
  {
    static const std::string xmlSize = "CameraFocalPointZ";
    return xmlSize;
  }
}
