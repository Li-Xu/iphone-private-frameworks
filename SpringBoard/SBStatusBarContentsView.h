/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class SBStatusBar, SBStatusBarCallForwardingView, SBStatusBarBatteryPercentageView, NSMutableArray, SBStatusBarVPNView, SBStatusBarProgressView, SBStatusBarBluetoothView, SBStatusBarAirPortView, SBStatusBarNoServiceView, SBStatusBarCarrierView, SBStatusBarTimeView, SBStatusBarBatteryView, SBStatusBarBluetoothBatteryView, SBStatusBarSignalView;

@interface SBStatusBarContentsView : UIView {
	SBStatusBar* _statusBar;
	int _mode;
	BOOL _dimmed;
	BOOL _enteringAirplaneMode;
	UIView* _lockIconView;
	SBStatusBarTimeView* _timeView;
	SBStatusBarBatteryView* _batteryView;
	SBStatusBarBatteryPercentageView* _batteryPercentageView;
	SBStatusBarSignalView* _signalView;
	SBStatusBarCarrierView* _carrierView;
	NSMutableArray* _indicatorViews;
	SBStatusBarAirPortView* _airPortView;
	SBStatusBarNoServiceView* _noServiceView;
	SBStatusBarBluetoothView* _bluetoothView;
	SBStatusBarProgressView* _progressView;
	SBStatusBarBluetoothBatteryView* _bluetoothBatteryView;
	SBStatusBarVPNView* _vpnView;
	SBStatusBarCallForwardingView* _forwardingView;
}
+(float)contentAlphaForMode:(int)mode;
-(id)initWithStatusBar:(id)statusBar mode:(int)mode;
-(id)statusBar;
-(void)buildContentViews;
-(void)updateContentViewsAlpha;
-(void)reflowContentViewsNow;
-(void)reflowContentViews:(BOOL)views;
-(void)reflowContentViews;
-(void)stop;
-(void)_initializeIndicatorViewsWithNames:(id)names;
-(void)_arrangeIconsByPriorityWithLeftWidth:(float)leftWidth rightWidth:(float)width;
-(void)_addObjectSortedByPriority:(id)priority toArray:(id)array;
-(float)_removeViews:(id)views withNeededCapacity:(float)neededCapacity totalCapacity:(float)capacity;
-(float)_capacityAfterAddingView:(id)view onSide:(id)side;
-(void)start;
-(void)bluetoothBatteryAvailabilityChanged;
-(void)stopClock;
-(void)startClock;
-(void)updateClockFormat;
-(void)setShowsService:(BOOL)service SIMStatus:(id)status;
-(void)significantTimeChange;
-(void)signalFormatChanged;
-(void)customTextChanged;
-(void)progressChanged;
-(void)cloakChanged;
-(void)showBatteryPercentageChanged;
-(void)setAirPortStrength:(int)strength;
-(void)setShowsAirPort:(BOOL)port animate:(BOOL)animate;
-(void)indicatorsChanged;
-(void)airplaneModeAnimationFinished:(id)finished;
-(void)setIsInAirplaneMode:(BOOL)airplaneMode animate:(BOOL)animate ignoreAirPortPower:(BOOL)power;
-(void)setIsInAirplaneMode:(BOOL)airplaneMode animate:(BOOL)animate;
-(BOOL)shouldDisplayBatteryPercentage;
-(void)loopCarrierNameIfNecessary;
@end

