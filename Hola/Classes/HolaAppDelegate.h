//
//  HolaAppDelegate.h
//  Hola
//
//  Created by Rulo on 20/07/11.
//  Copyright 2011 Ada Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HolaViewController;

@interface HolaAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HolaViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HolaViewController *viewController;

@end

