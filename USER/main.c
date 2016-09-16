/*********
	***************************************************************
	
		*@file			main.c 		
		*@author		Bin
		*@data			2016.09
		*@brief			主函数
		
	***************************************************************
**********/

#include "stm32f10x.h"
#include "drive_LCD_ili9341.h"

extern void Lcd_Delay(__IO uint32_t nCount) ;

int main(void)
{	
	LCD_Init() ;//初始化LCD
	LCD_clear(0,0,240,320,BACKGROUND) ; //清屏操作
	LCD_Display_String( 20 , 10 , (u8*)"This is a temperature and humidity" , BLACK ) ;//显示字符串
	LCD_Display_String( 75 , 24 , (u8*)"measuring meter." , BLACK ) ;
	LCD_Display_String( 13 , 60 , (u8*)"Humidity:" , BLACK ) ;
	
	LCD_Display_String( 13 , 84 , (u8*)"Temperature:" , BLACK ) ;
	
	LCD_Display_Num(  100 ,  60 , 95 , RED );//显示数字

	while( 1 ) ;	
}

	


