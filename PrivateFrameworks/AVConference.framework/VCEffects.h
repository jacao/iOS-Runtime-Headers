/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool * _bufferPool;
    int  _effectsMode;
}

@property (nonatomic) int effectsMode;

- (bool)addFrame:(struct __CVBuffer { }*)arg1 time:(long long)arg2;
- (void)dealloc;
- (int)effectsMode;
- (id)init;
- (bool)releaseFrameWithTime:(long long)arg1;
- (void)setEffectsMode:(int)arg1;

@end