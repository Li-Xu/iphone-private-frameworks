/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray, SBIcon;

@interface SBIconList : UIView {
	SBIcon* _bouncedIcon;
	NSMutableArray* _iconMatrix;
	NSMutableArray* _removedIcons;
	unsigned _scattered : 1;
	unsigned _needsLayout : 1;
	unsigned _stateIsDirty : 1;
}
-(float)horizontalIconInset;
-(int)maxIconRows;
-(int)maxIconColumns;
-(id)icons;
-(id)iconAtX:(int)x Y:(int)y;
-(BOOL)firstFreeSlotX:(int*)x Y:(int*)y;
-(BOOL)isEmpty;
-(BOOL)needsCompacting;
-(void)compactIconsInIconList:(BOOL)iconList;
-(void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
-(id)placeIcon:(id)icon atX:(int)x Y:(int)y animate:(BOOL)animate moveNow:(BOOL)now;
-(id)insertIcon:(id)icon atX:(int)x Y:(int)y moveNow:(BOOL)now;
-(BOOL)getX:(int*)x Y:(int*)y forIcon:(id)icon;
-(BOOL)getX:(int*)x Y:(int*)y forDisplayIdentifier:(id)displayIdentifier;
-(BOOL)containsIcon:(id)icon;
-(BOOL)containsIconForDisplayIdentifier:(id)displayIdentifier;
-(void)removeIconAtX:(int)x Y:(int)y compactEmptyLists:(BOOL)lists animate:(BOOL)animate;
-(void)removeIcon:(id)icon compactEmptyLists:(BOOL)lists animate:(BOOL)animate;
-(void)removeAllIcons;
-(BOOL)isScattered;
-(void)setIconAlphaForRow:(int)row column:(int)column alpha:(float)alpha;
-(void)scatter:(BOOL)scatter startTime:(double)time;
-(void)unscatter:(BOOL)unscatter startTime:(double)time;
-(void)removeAllIconAnimations;
-(float)verticalIconPadding;
-(float)topIconPadding;
-(void)setIconsNeedLayout;
-(int)visibleIconsInRow:(id)row;
-(CGPoint)originForIconAtX:(int)x Y:(int)y;
-(CGPoint)originForIcon:(id)icon;
-(void)setFrame:(CGRect)frame;
-(void)layoutIconsNow;
-(float)layoutIconsIfNeeded:(float)needed domino:(BOOL)domino;
-(int)columnAtPoint:(CGPoint)point;
-(int)rowAtPoint:(CGPoint)point;
-(id)iconAtPoint:(CGPoint)point X:(int*)x Y:(int*)y;
-(id)iconAtPoint:(CGPoint)point X:(int*)x Y:(int*)y proposedOrder:(int*)order;
-(void)removeInfoAnimation:(id)animation didFinish:(id)finish view:(id)view;
-(void)stopJittering;
-(void)noteEditingStateChanged;
-(void)setStateIsDirty:(BOOL)dirty;
-(BOOL)stateIsDirty;
-(BOOL)isDock;
-(void)setBouncedIcon:(id)icon;
-(id)bouncedIcon;
-(void)resetWithRepresentation:(id)representation;
-(id)initWithRepresentation:(id)representation;
-(id)representation;
@end

