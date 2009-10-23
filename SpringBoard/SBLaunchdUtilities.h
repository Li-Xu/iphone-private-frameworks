/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface SBLaunchdUtilities : NSObject {
}
+(BOOL)createJobWithLabel:(id)label path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 machServices:(id)services threadPriority:(long long)priority jetsamPriority:(long long)priority9 waitForDebugger:(BOOL)debugger denyCreatingOtherJobs:(BOOL)jobs runAtLoad:(BOOL)load;
+(void)deleteJobWithLabel:(id)label;
+(int)pidForLabel:(id)label;
+(int)lastExitStatusForLabel:(id)label;
+(id)allJobLabels;
+(void)setJetsamPriority:(long long)priority forJobLabel:(id)jobLabel isFrontmost:(BOOL)frontmost;
@end

