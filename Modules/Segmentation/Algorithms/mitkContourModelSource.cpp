/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center, 
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without 
even the implied warranty of MERCHANTABILITY or FITNESS FOR 
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "mitkContourModelSource.h"


mitk::ContourModelSource::ContourModelSource()
{
  // Create the output.
  OutputType::Pointer output = dynamic_cast<OutputType*>(this->MakeOutput(0).GetPointer()); 
  Superclass::SetNumberOfRequiredInputs(0);
  Superclass::SetNumberOfRequiredOutputs(1);
  Superclass::SetNthOutput(0, output.GetPointer());
}




mitk::ContourModelSource::~ContourModelSource()
{
}




itk::DataObject::Pointer mitk::ContourModelSource::MakeOutput ( unsigned int /*idx */)
{
    return OutputType::New().GetPointer();
}




void mitk::ContourModelSource::SetOutput( OutputType* output )
{
  //itkWarningMacro(<< "SetOutput(): This method is slated to be removed from ITK.  Please use GraftOutput() in possible combination with DisconnectPipeline() instead." );
    this->ProcessObject::SetNthOutput( 0, output );
}




void mitk::ContourModelSource::GraftOutput(OutputType *graft)
{
  this->GraftNthOutput(0, graft);
}

void mitk::ContourModelSource::GraftNthOutput(unsigned int /*idx*/, OutputType* /*graft*/)
{
  itkWarningMacro(<< "GraftNthOutput(): This method is not yet implemented for mitk. Implement it before using!!" );
  assert(false);
}



mitk::ContourModelSource::OutputType* mitk::ContourModelSource::GetOutput()
{
    if ( this->GetNumberOfOutputs() < 1 )
    {
        return 0;
    }
    else
    {
      return dynamic_cast<OutputType*>
                         (this->BaseProcess::GetOutput(0));
    }
}




mitk::ContourModelSource::OutputType* mitk::ContourModelSource::GetOutput ( unsigned int idx )
{
    return dynamic_cast<OutputType*> ( this->ProcessObject::GetOutput( idx ) );
}


