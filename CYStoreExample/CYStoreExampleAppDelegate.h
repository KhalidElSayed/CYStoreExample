//
//  CYStoreExampleAppDelegate.h
//  CYStoreExample
//
//  Created by Clay Allsopp on 7/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CYStoreExampleViewController;

@interface CYStoreExampleAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet CYStoreExampleViewController *viewController;

@end
