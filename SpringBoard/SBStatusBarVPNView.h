/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"

@class UIImageView;

@interface SBStatusBarVPNView : SBStatusBarContentView {
	UIImageView* _imageView;
	BOOL _setOnce;
	BOOL _showIndicator;
	BOOL _showVpnView;
	BOOL _showOnLeft;
	float _overlap;
}
-(void)updateIndicator;
-(void)setShowsIndicator:(BOOL)indicator;
-(BOOL)showsIndicator;
@end

