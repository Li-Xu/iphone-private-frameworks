/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBBluetoothController : NSObject {
	NSMutableArray* _devices;
}
+(id)sharedInstance;
-(id)firstBTDeviceToReportBatteryLevel;
-(BOOL)canReportBatteryLevel;
-(float)batteryLevel;
-(void)noteDevicesChanged;
-(void)startWatchingForDevices;
-(void)stopWatchingForDevices;
-(void)iapDeviceChanged:(id)changed;
-(void)addDeviceNotification:(id)notification;
-(void)removeDeviceNotification:(id)notification;
-(void)connectionChanged:(id)changed;
-(void)batteryChanged:(id)changed;
-(void)updateBattery;
-(void)avrcpPerformToggle:(id)toggle;
-(void)avrcpPerformPlay:(id)play;
-(void)avrcpPerformPause:(id)pause;
-(void)avrcpPerformStop:(id)stop;
-(void)avrcpPlay:(id)play;
-(void)avrcpPause:(id)pause;
-(void)avrcpStop:(id)stop;
@end

