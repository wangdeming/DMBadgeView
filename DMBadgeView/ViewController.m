//
//  ViewController.m
//  DMBadgeView
//
//  Created by SDC201 on 2017/5/2.
//  Copyright © 2017年 PCEBG. All rights reserved.
//

#import "ViewController.h"
#import "DMBadgeView.h"

@interface ViewController ()

@property (nonatomic, strong) UIButton *button;


@property (nonatomic, strong) DMBadgeView *badgeView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.button = [[UIButton alloc]initWithFrame:CGRectMake(100, 100, 120, 30)];
    [self.button setTitle:@"DMBadgeView" forState:UIControlStateNormal];
    self.button.backgroundColor = [UIColor greenColor];
    [self.view addSubview:self.button];
    
    self.badgeView = [[DMBadgeView alloc]initWithParentView:self.button alignment:DMBadgeViewAlignmentTopRight];
    self.badgeView.badgeText = @"1000000";
    
    
}


@end
