//
//  ViewController.h
//  AudioQueueRecorderDemo
//
//  Created by apollo on 14/12/2016.
//  Copyright © 2016 projm. All rights reserved.
//

#import <UIKit/UIKit.h>
@import AudioToolbox;
@import CoreAudio;
@import MediaPlayer;
@import AVFoundation;

enum {
    kNumberBuffers = 3,
    kNumberPackages = 10*1000,
};

struct RecorderStat
{
    AudioStreamBasicDescription   mDataFormat;
    AudioQueueRef                 mQueue;
    AudioQueueBufferRef           mBuffers[kNumberBuffers];
    AudioFileID                   mAudioFile;
    UInt32                        bufferByteSize;
    SInt64                        mCurrentPacket;
    AudioStreamPacketDescription  *mPacketDescs;
    bool                           mIsRunning;
};

struct PlayerStat
{
    AudioStreamBasicDescription   mDataFormat;
    AudioQueueRef                 mQueue;
    AudioQueueBufferRef           mBuffers[kNumberBuffers];
    AudioFileID                   mAudioFile;
    UInt32                        bufferByteSize;
    SInt64                        mCurrentSize;
    AudioStreamPacketDescription  *mPacketDescs;
    FILE *fp;
};

@interface ViewController : UIViewController


@end

