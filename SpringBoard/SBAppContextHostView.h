/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SBAppContextHostView : UIView {
	NSMutableArray* _contexts;
	BOOL _hostingEnabled;
}
@property(readonly, assign, nonatomic) unsigned count;
@property(assign, nonatomic, getter=isHostingEnabled) BOOL hostingEnabled;
-(id)initWithDefaultSize;
-(void)willOrderInContextWithId:(unsigned)anId windowLevel:(float)level windowOutput:(int)output;
-(void)didOrderOutContextWithId:(unsigned)anId;
-(void*)createIOSurfaceForFrame:(CGRect)frame;
-(void*)createIOSurfaceForFrame:(CGRect)frame includeAdditionalContext:(unsigned)context;
@end

