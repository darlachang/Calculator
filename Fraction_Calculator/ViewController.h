//
//  ViewController.h
//  Fraction_Calculator
//
//  Created by Ming-Han Chang on 2016/4/17.
//  Copyright © 2016年 Ming-Han Chang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *display;

-(void) provideImageData:(void *)data bytesPerRow:(size_t)rowbytes origin:(size_t)x :(size_t)y size:(size_t)width :(size_t)height userInfo:(id)info
@end

