//
//  Wireframe.h
//  OrchextraApp
//
//  Created by Judith Medina on 13/7/15.
//  Copyright (c) 2015 Gigigo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RegionDetailTableController;

@interface MainWireframe : NSObject

-(void)showRegionDetailTableControllerOnViewController:(UIViewController *)viewController values:(NSArray *)values;

@end
