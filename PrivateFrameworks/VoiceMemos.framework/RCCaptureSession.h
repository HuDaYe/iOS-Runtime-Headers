/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSDate, NSHashTable, NSObject<OS_dispatch_group>, NSString, RCAVState, RCAudioSessionRoutingAssertion, RCCaptureInputDevice, RCCaptureInputWaveformDataSource, RCCaptureOutputWriter;

@interface RCCaptureSession : NSObject <RCCaptureOutputWriterDelegate, RCWaveformDataSourceObserver> {
    unsigned long long _backgroundTaskIdentifier;
    RCCaptureOutputWriter *_captureOutputWriter;
    RCAudioSessionRoutingAssertion *_captureRouteAssertion;
    NSDate *_captureStartDate;
    RCCaptureInputWaveformDataSource *_captureWaveformDataSource;
    NSObject<OS_dispatch_group> *_endCaptureTaskGroup;
    RCCaptureInputDevice *_inputDevice;
    long long _sessionCaptureState;
    NSString *_sessionRouteName;
    NSHashTable *_weakObservers;
    bool_captureBeginSoundEffectDisabled;
    bool_captureEndSoundEffectDisabled;
    bool_deleteCapturedOutWhenFinished;
    bool_destinationShouldBeDeleted;
    bool_handledFinishedCapturingAfterCompletionSound;
    bool_handlingDidFinishCapturing;
}

@property(readonly) RCAVState * AVState;
@property(readonly) double captureDestinationComposedDuration;
@property(readonly) RCCaptureInputWaveformDataSource * captureWaveformDataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) RCCaptureInputDevice * inputDevice;
@property(readonly) bool isCaptureSessionFinished;
@property(readonly) Class superclass;

+ (void)playCaptureDidFinishSoundEffectWithCompletionBlock:(id)arg1;
+ (void)playCaptureWillStartSoundEffectWithCompletionBlock:(id)arg1;

- (void).cxx_destruct;
- (id)AVState;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (bool)_attachInputToCaptureSession:(id)arg1;
- (void)_beginAVCapturingToDestinationInitiallyPaused:(bool)arg1;
- (void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1;
- (void)_captureInputDeviceRouteDidChangeNotification:(id)arg1;
- (void)_closeCaptureSession;
- (void)_deleteCaptureDestinationAndPostDidEndNotification:(id)arg1;
- (void)_enumerateCaptureSessionObserversWithBlock:(id)arg1;
- (void)_handleCaptureSessionDidError:(id)arg1;
- (bool)_handleFinishWritingByRestartingCaptureForError:(id)arg1 testOnly:(bool)arg2;
- (void)_onMainQueueHandleCaptureDidFinishCapturingAfterCompletionSound;
- (bool)_openAVCaptureSessionAndWaitUntilRunning;
- (void)_postToObserversWithBlock:(id)arg1;
- (void)_setDisableSBMediaHUD:(bool)arg1;
- (void)_setPostPrepareRequestedState:(long long)arg1;
- (void)addCaptureSessionObserver:(id)arg1;
- (bool)canResumeCapturingAtCompositionDestinationTime:(double)arg1;
- (double)captureDestinationComposedDuration;
- (void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (id)captureWaveformDataSource;
- (void)dealloc;
- (void)deleteCapturedOutWhenFinished;
- (id)description;
- (void)disableCaptureBeginSoundEffect;
- (void)disableCaptureEndSoundEffect;
- (void)finishCapturing;
- (id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2;
- (id)inputDevice;
- (bool)isCaptureActive;
- (bool)isCapturePaused;
- (bool)isCaptureSessionFinished;
- (bool)isPreparing;
- (void)pauseCapturing;
- (void)prepareToCaptureWithPreparedHandler:(id)arg1;
- (void)removeCaptureSessionObserver:(id)arg1;
- (void)resumeCapturing;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;

@end