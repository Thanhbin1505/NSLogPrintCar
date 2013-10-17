//
//  ViewController.m
//  NSLogPrintCar
//
//  Created by Apple on 10/17/13.
//  Copyright (c) 2013 Apple. All rights reserved.
//

#import "ViewController.h"
#import "Draw.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)demoDrawZicZac:(id)sender {
    drawZicZac();
}
- (IBAction)demoDrawCar:(id)sender {
    drawCar();
}

@end
