//
//  PurchaseCell.h
//  THSCred
//
//  Created by Denis Nascimento on 10/07/13.
//  Copyright (c) 2013 Denis Nascimento. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"


@interface DetalheCell : SWTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *labelNome;
@property (weak, nonatomic) IBOutlet UILabel *labelHora;
@property (weak, nonatomic) IBOutlet UILabel *labelTratamento;
@property (assign, nonatomic) NSInteger indexRow;


@end
