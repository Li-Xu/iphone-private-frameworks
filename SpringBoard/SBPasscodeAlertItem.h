/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"
#import "UITextFieldDelegate.h"
#import "SpringBoard-Structs.h"


@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {
	int _mode;
	int _unlockScreenType;
}
-(id)initWithPasscodeMode:(int)passcodeMode unlockScreenType:(int)type;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)returnKeyPressed:(id)pressed;
-(void)_setErrorString:(id)string;
@end

