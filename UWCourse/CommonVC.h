//
//  CommonVC.h
//  UWCourse
//
//  Created by Tengyu Cai on 2014-06-07.
//  Copyright (c) 2014 Tengyu Cai. All rights reserved.
//

#import <UIKit/UIKit.h>

#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define CCOLOR [UIColor clearColor]

@interface CommonVC : UIViewController

-(void)activityIndicator:(BOOL)show;

@end

