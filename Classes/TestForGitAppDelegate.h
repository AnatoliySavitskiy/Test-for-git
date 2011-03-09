//
//  TestForGitAppDelegate.h
//  TestForGit
//
//  Created by Anatoliy.Savitskiy on 3/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestForGitViewController;

@interface TestForGitAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TestForGitViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TestForGitViewController *viewController;

@end

