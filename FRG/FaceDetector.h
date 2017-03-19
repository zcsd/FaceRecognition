#ifndef FACE_DETECTOR_H
#define	FACE_DETECTOR_H

#include <string>
#include <iostream>
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

class FaceDetector {
public:
    FaceDetector();
    ~FaceDetector();
    void findFacesInImage(Mat &frameRGB, vector<Rect> &facesRec);
private:
    CascadeClassifier face_cascade;
    CascadeClassifier eye_cascade;

};

#endif
