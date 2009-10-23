/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class NSString, VolumeControlView, NSMutableSet, UIWindow;

@interface VolumeControl : NSObject {
	UIWindow* _volumeWindow;
	VolumeControlView* _volumeView;
	BOOL _windowVisible;
	BOOL _debounce;
	int _mode;
	NSMutableSet* _alwaysHiddenCategories;
	NSString* _lastDisplayedCategory;
	NSString* _lastEventCategory;
}
+(id)sharedVolumeControl;
-(void)reorientHUDIfNeeded:(BOOL)needed;
-(void)_createUI;
-(void)_tearDown;
-(void)_orderWindowOut:(id)anOut;
-(void)addAlwaysHiddenCategory:(id)category;
-(void)removeAlwaysHiddenCategory:(id)category;
-(BOOL)_HUDIsDisplayableForCategory:(id)category;
-(float)_windowFadeDelay;
-(void)_orderWindowFront:(id)front forCategory:(id)category;
-(void)_changeVolumeBy:(float)by;
-(float)_calcButtonRepeatDelay;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)hideHUD;
-(void)showHUD;
-(id)lastDisplayedCategory;
-(void)setHUDMode:(int)mode;
-(void)handleVolumeEvent:(GSEventRef)event;
-(void)cancelVolumeEvent;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_serverConnectionDied:(id)died;
-(int)_volumeModeForCategory:(id)category;
-(void)_systemVolumeChanged:(id)changed;
@end

