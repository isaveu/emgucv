//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2019 by EMGU Corporation. All rights reserved.
//
//----------------------------------------------------------------------------

#pragma once
#ifndef EMGU_CUDACODEC_C_H
#define EMGU_CUDACODEC_C_H

//#include "opencv2/cuda.hpp"
#include "opencv2/cudacodec.hpp"
#include "opencv2/core/cuda.hpp"
#include "opencv2/core/types_c.h"
#include "opencv2/core/core_c.h"
#include "emgu_c.h"

//----------------------------------------------------------------------------
//
//  CudaVideoWritter
//
//----------------------------------------------------------------------------

CVAPI(cv::cudacodec::VideoWriter*) cudaVideoWriterCreate(cv::String* fileName, CvSize* frameSize, double fps, cv::cudacodec::SurfaceFormat format, cv::Ptr<cv::cudacodec::VideoWriter>** sharedPtr);
CVAPI(void) cudaVideoWriterRelease(cv::Ptr<cv::cudacodec::VideoWriter>** writer);
CVAPI(void) cudaVideoWriterWrite(cv::cudacodec::VideoWriter* writer, cv::_InputArray* frame, bool lastFrame);

//----------------------------------------------------------------------------
//
//  CudaVideoReader
//
//----------------------------------------------------------------------------

CVAPI(cv::cudacodec::VideoReader*) cudaVideoReaderCreate(cv::String* fileName, cv::Ptr<cv::cudacodec::VideoReader>** sharedPtr);
CVAPI(void) cudaVideoReaderRelease(cv::Ptr<cv::cudacodec::VideoReader>** reader);
CVAPI(bool) cudaVideoReaderNextFrame(cv::cudacodec::VideoReader* reader, cv::_OutputArray* frame);
CVAPI(void) cudaVideoReaderFormat(cv::cudacodec::VideoReader* reader, cv::cudacodec::FormatInfo* formatInfo);


#endif