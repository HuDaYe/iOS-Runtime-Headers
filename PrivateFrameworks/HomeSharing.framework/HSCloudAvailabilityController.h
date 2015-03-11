/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSObject<OS_dispatch_queue>, NSString, RadiosPreferences;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, HSCloudAvailability> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _networkType;
    int _preferencesChangedNotifyToken;
    RadiosPreferences *_radiosPreferences;
    bool_canShowCloudDownloadButtons;
    bool_canShowCloudMusic;
    bool_canShowCloudVideo;
    bool_isAirplaneModeActive;
    bool_isAutoDownloadOnCellularAllowed;
    bool_isCellularDataActive;
    bool_isNetworkReachable;
    bool_isShowingAllMusic;
    bool_isShowingAllVideo;
    bool_isUpdateInProgress;
    bool_isWiFiEnabled;
    bool_preferencesChangedNotifyTokenIsValid;
    struct __SCNetworkReachability { } *reachabilityRef;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)_handleTelephonyNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (bool)_hasCellularCapability;
- (bool)_hasWiFiCapability;
- (bool)_isAutoDownloadOnCellularAllowed;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(bool)arg1;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(bool)arg1;
- (void)_setNewIsNetworkReachable:(bool)arg1;
- (bool)_uncachedIsAutoDownloadOnCellularAllowed;
- (bool)_uncachedIsShowingAllMusic;
- (bool)_uncachedIsShowingAllVideo;
- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (void)dealloc;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (id)init;
- (bool)isCellularDataRestricted;
- (bool)isNetworkReachable;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;

@end