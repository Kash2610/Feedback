//
//  AudioBuffer.h
//  Kash_Stereo
//
//  Created by SSPRL on 8/29/19.
//  Copyright © 2019 SSPRL. All rights reserved.
//

#ifndef AudioFormat_h
#define AudioFormat_h
#include <MacTypes.h>



#define FRAME_SIZE 256// Please put in order of 2.
#define SAMPLING_FREQUENCY 16000
#define kOutputBus 0
#define kInputBus 1
#define kNumberOfChannel 2
#define NFFT 512




#include <stdio.h>

typedef struct AudioData{
    UInt32                  frameSize;
    Float32*                left;
    Float32*                right;
}audioData;








#endif /* AudioBuffer_h */
