/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIGestureRecognizer.h>
#import "SpringBoard-Structs.h"


@interface SBAwaySwipeGestureRecognizer : UIGestureRecognizer {
	CGPoint _startLocation;
	unsigned _startTouchCount;
	double _startTime;
	unsigned _requiredTouchCount;
	int _gestureType;
}
@property(assign, nonatomic) unsigned requiredTouchCount;
-(int)recognizedGestureType;
-(unsigned)fingerCount;
-(BOOL)isGestureFromLocation:(CGPoint)location count:(unsigned)count toLocation:(CGPoint)location3 count:(unsigned)count4 elapsedTime:(double)time gestureType:(int*)type;
-(CGPoint)averagePositionForTouches:(id)touches;
-(BOOL)_isView:(id)view subviewOfClass:(Class)aClass;
@end

