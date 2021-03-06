/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester;

@interface GEORPVoltaireProblemProvider : GEORPProblemProvider <PBRequesterDelegate> {
    id _notificationAvailabilityErrorHandler;
    id _notificationAvailabilityFinishedHandler;
    GEORequester *_notificationAvailabilityRequester;
    id _statusErrorHandler;
    id _statusFinishedHandler;
    GEORequester *_statusRequester;
    id _submissionErrorHandler;
    id _submissionFinishedHandler;
    GEORequester *_submissionRequester;
}

+ (unsigned short)providerID;
+ (void)setUsePersistentConnection:(BOOL)arg1;

- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)startNotificationAvailabilityRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startStatusRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
