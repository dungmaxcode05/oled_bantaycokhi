
#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST); // Fast I2C / TWI

// 'mức độ (1)', 16x4px
const unsigned char epd_bitmap_m_c_____1_ [] PROGMEM = {
	0x12, 0x70, 0x1e, 0x48, 0x12, 0x48, 0x12, 0x70
};


// 'icon_3dcube', 16x16px
const unsigned char bitmap_icon_3dcube [] PROGMEM = {
0x00, 0x00, 0x20, 0x00, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0xff, 0xff, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xff, 0xff, 0x00, 0x40
};
// 'icon_battery', 16x16px
const unsigned char bitmap_icon_battery [] PROGMEM = {
 0x00, 0x20, 0x00, 0x40, 0x00, 0x80, 0x01, 0x00, 0x01, 0x00, 0x1f, 0xf0, 0x60, 0x0c, 0x48, 0x04, 
	0x9c, 0x12, 0x88, 0x42, 0x40, 0x04, 0x33, 0x98, 0x1c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'icon_dashboard', 16x16px
const unsigned char bitmap_icon_dashboard [] PROGMEM = {
 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x5f, 0xf8, 0x50, 0x08, 0x50, 0x08, 0x50, 0x08, 0x50, 0x08, 
	0x50, 0x08, 0x50, 0x08, 0x50, 0x08, 0x50, 0x08, 0x5f, 0xf8, 0x40, 0x00, 0xff, 0xff, 0x40, 0x00
};
// 'icon_fireworks', 16x16px
const unsigned char bitmap_icon_fireworks [] PROGMEM = {
  0x15, 0x50, 0x15, 0x50, 0x3f, 0xf8, 0xe0, 0x0e, 0x20, 0x08, 0xe2, 0x8e, 0x27, 0xc8, 0xec, 0x6e, 
	0x27, 0xc8, 0xe2, 0x8e, 0x20, 0x08, 0xe0, 0x0e, 0x3f, 0xf8, 0x15, 0x50, 0x15, 0x50, 0x00, 0x00
};


// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 384)
// icon cho phần menu thứ nhất 
const unsigned char* bitmap_icons[4] = {
  bitmap_icon_3dcube,
  bitmap_icon_battery,
  bitmap_icon_dashboard,
  bitmap_icon_fireworks
 
};
const unsigned char epd_bitmap_m_c_____5_ [] PROGMEM = {
	0x00, 0x00, 0x03, 0x00, 0x42, 0x80, 0x22, 0x40, 0x12, 0x20, 0x0a, 0x40, 0x06, 0x80, 0x03, 0x00, 
	0x06, 0x80, 0x0a, 0x40, 0x12, 0x20, 0x22, 0x40, 0x42, 0x80, 0x03, 0x00, 0x00, 0x00, 0x11, 0x10
};


const unsigned char epd_bitmap_m_c_____7_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x4f, 0x94, 0x29, 0x98, 0x19, 0x90, 0x09, 
	0x9e, 0x79, 0x90, 0x09, 0x98, 0x19, 0xf4, 0x2f, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char epd_bitmap_D___n_m_i__GGG_ [] PROGMEM = {
	0x01, 0x00, 0x03, 0x80, 0x05, 0x40, 0x01, 0x00, 0x01, 0x00, 0x21, 0x08, 0x40, 0x04, 0xfc, 0x7e, 
	0x40, 0x04, 0x21, 0x08, 0x01, 0x00, 0x01, 0x00, 0x05, 0x40, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00
};

const unsigned char epd_bitmap_m_c_____6_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 
	0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


const unsigned char* epd_bitmap_allArray[4] = {
	epd_bitmap_m_c_____5_ , 
  epd_bitmap_m_c_____7_ , 
  epd_bitmap_D___n_m_i__GGG_ , 
  epd_bitmap_m_c_____6_
};


// bên trong các phần tử on / off / back 
// 'Dự án mới', 16x16px
const unsigned char epd_bitmap_D___n_m_i [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x20, 0x04, 0x58, 0x02, 0xbc, 0x01, 0xbc, 0x01, 
	0x58, 0x02, 0x20, 0x04, 0x1f, 0xf8, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'Dự án mới (1)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__1_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x20, 0x04, 0x40, 0x1a, 0x80, 0x3d, 0x80, 0x3d, 
	0x40, 0x1a, 0x20, 0x04, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char epd_bitmap_D___n_m_i__2_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 
	0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char* menu_on_of_back[3] = {
   epd_bitmap_D___n_m_i ,
   epd_bitmap_D___n_m_i__1_ ,
   epd_bitmap_D___n_m_i__2_ 
};

// 'Dự án mới (2)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__jjj_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x0b, 0x40, 0x44, 0x88, 0x28, 0x50, 0x10, 0x20, 0x23, 0x10, 
	0x23, 0x10, 0x10, 0x20, 0x28, 0x50, 0x44, 0x88, 0x0b, 0x40, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00
};
// 'Dự án mới (3)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__3_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x20, 0x10, 0x20, 0x10, 0x20, 0x10, 0x23, 0x10, 
	0x23, 0x10, 0x20, 0x10, 0x20, 0x10, 0x20, 0x10, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char epd_bitmap_D___n_m_i__4_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 
	0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char* menu_test[3] = {
  epd_bitmap_D___n_m_i__jjj_ ,
  epd_bitmap_D___n_m_i__3_ ,
  epd_bitmap_D___n_m_i__4_ 
};
// 'Dự án mới (5)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__a_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x7f, 0xc0, 0x20, 0x00, 
	0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'Dự án mới (6)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__b_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x08, 0x07, 0xfc, 0x00, 0x08, 
	0x00, 0x10, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'Dự án mới (7)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__c_ [] PROGMEM = {
	0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x05, 0x40, 0x09, 0x20, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'Dự án mới (8)', 16x16px
const unsigned char epd_bitmap_D___n_m_i__d_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x09, 0x20, 0x05, 0x40, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00
};
const unsigned char epd_bitmap_m_c_____e_ [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 
	0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char* handmede[5] = {
epd_bitmap_D___n_m_i__a_ ,
epd_bitmap_D___n_m_i__b_ ,
epd_bitmap_D___n_m_i__c_ ,
epd_bitmap_D___n_m_i__d_ ,
epd_bitmap_m_c_____e_ 
};




// 'scrollbar_background', 8x64px
const unsigned char bitmap_scrollbar_background [] PROGMEM = {
  0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 
  0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 
  0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 
  0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00
};

// 'item_sel_outline', 128x21px
const unsigned char bitmap_item_sel_outline [] PROGMEM = {
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};



// ------------------kết thúc bitmap được tạo từ image2cpp ---------------------------------



const int NUM_ITEMS = 4; //số mục trong danh sách cũng như số lượng ảnh chụp màn hình và ảnh chụp màn hình có mã QR (màn hình khác)
const int NUM_ITEMS_CONTROL = 4 ;
const int NUM_ITEMS_WIRELESS = 3 ; 
const int NUM_ITEMS_classic = 3 ; 
const int NUM_ITEMS_classic_automatic = 3 ;
const int NUM_ITEMS_voice_control = 3 ; 
const int NUM_ITEMS_FORCE_CONTROL = 3 ; 
const int NUM_ITEMS_GESURE_CONTROL = 3 ;
const int NUM_ITEMS_sensors_text = 3 ; 
const int NUM_ITEMS_check_sensor = 7 ;
const int NUM_ITEMS_check_MOTOR = 7 ; 
const int NUM_ITEMS_HANDMADE = 5 ; 
const int NUM_ITEMS_GLOVE = 5; 
const int MAX_ITEM_LENGTH = 20; // ký tự tối đa cho tên mục

//menu 1 
char menu_items [NUM_ITEMS] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "GLOVE MODE" }, 
  { "CONTROL MODE" }, 
  { "CALIBRATION" }, 
  { "SENSORS TEST" }
 }; 
// menu 2 
char control_mode [NUM_ITEMS_CONTROL] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "BLUETOOTH" }, 
  { "classic" }, 
  {"HANDMADE"} , 
  { "BACK" }
 }; 
 // menu 3 
 char control_mode_wireless [NUM_ITEMS_WIRELESS] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "ON" }, 
  { "OFF" }, 
  { "BACK" }
 }; 
// menu 4
 char control_mode_classic [NUM_ITEMS_classic] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "ON" }, 
  { "OFF" }, 
  { "BACK" }
 }; 
// menu 5
 char glove_mode [NUM_ITEMS_GLOVE] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "AUTOMATIC" }, 
  { "VOICE CONTROL" }, 
  {"GLOVE"} ,
  {"GESTURE CONTROL"} ,
  { "BACK" }
 }; 
 // menu 6 
  char control_mode_automatic [NUM_ITEMS_classic_automatic] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "ON" }, 
  { "OFF" }, 
  { "BACK" }
 };
// menu 7 
  char control_mode_voice_control [NUM_ITEMS_voice_control] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "ON" }, 
  { "OFF" }, 
  { "BACK" }
 };
 // menu thứ 8 
   char control_mode_FORCE_CONTROL [NUM_ITEMS_FORCE_CONTROL] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "ON" }, 
  { "OFF" }, 
  { "BACK" }
 };
 // thứ 9 
    char control_mode_gesture_control [NUM_ITEMS_GESURE_CONTROL] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "ON" }, 
  { "OFF" }, 
  { "BACK" }
 };
// thứ 10 
      char control_mode_sensors_text [NUM_ITEMS_sensors_text] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "CHECK SENSOR" }, 
  { "CHECK MOTOR" }, 
  { "BACK" }
 };
  // thứ 11 
       char control_mode_check_sensor [NUM_ITEMS_check_sensor] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "SENSOR 1 " }, 
  { "SENSOR 2 " }, 
  { "SENSOR 3 " }, 
  { "SENSOR 4 " }, 
  { "SENSOR 5 " }, 
  { "SENSOR 6 " }, 
  { "BACK" }
 };
// THỨ 12 
       char control_mode_check_MOTOR [NUM_ITEMS_check_MOTOR] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
   {"MOTOR 1 "} , 
   {"MOTOR 2 "} ,  
   {"MOTOR 3 "} ,  
   {"MOTOR 4 "} ,  
   {"MOTOR 5 "} ,  
   {"MOTOR 6 "} ,  
  { "BACK" }
 };
 // THỨ 13 
      char control_mode_HANDMADE [NUM_ITEMS_HANDMADE] [MAX_ITEM_LENGTH] = {  //mảng có tên mục
  { "LEFT" }, 
  { "RIGHT" }, 
  { "ABOVE" } ,
  {"BELOW"} ,
  {"BACK"}
 };


//------------------phần menu đầu 
// lưu ý - khi thay đổi thứ tự các mục ở trên, hãy đảm bảo các mảng khác tham chiếu bitmap
// cũng có thứ tự tương tự, ví dụ mảng "bitmap_icons" cho biểu tượng và các mảng khác cho ảnh chụp màn hình và mã QR
#define BUTTON_UP_PIN 12 //ghim cho nút LÊN 
#define BUTTON_SELECT_PIN 8 // ghim cho nút CHỌN
#define BUTTON_DOWN_PIN 4 // ghim cho nút XUỐNG

#define DEMO_PIN 13 // ghim cho chế độ demo, sử dụng công tắc hoặc dây để bật hoặc tắt chế độ demo, xem thêm chi tiết bên dưới

int a = 0 ; 
// thực đơn 1 
int button_up_clicked = 0; // chỉ thực hiện hành động khi nhấp vào nút và đợi cho đến khi nhấn nút khác
int button_select_clicked = 0; // giống như trên
int button_down_clicked = 0; // giống như trên
int item_selected = 0; //mục nào trong menu 1  được chọn 
int item_sel_previous; // mục trước - được sử dụng trong màn hình menu để vẽ mục trước mục đã chọn
int item_sel_next; // mục tiếp theo - được sử dụng trong màn hình menu để vẽ mục tiếp theo sau mục đã chọn
int current_screen = 0;   //
int demo_mode = 0; // khi chế độ demo được đặt thành 1, nó sẽ tự động đi qua tất cả các màn hình, 0 = menu điều khiển bằng các nút
int demo_mode_state = 0; // trạng thái chế độ demo = màn hình và mục menu nào sẽ hiển thị
int demo_mode_delay = 0; // độ trễ chế độ demo = được sử dụng để làm chậm quá trình chuyển đổi màn hình


void setup() {
  u8g.setColorIndex(1);  //đặt màu thành màu trắng

// xác định chân cho các nút
  // INPUT_PULLUP có nghĩa là nút ở mức CAO khi không được nhấn và THẤP khi được nhấn
  // vì nó được kết nối giữa một số chân và GND
  pinMode(BUTTON_UP_PIN, INPUT_PULLUP); // up button
  pinMode(BUTTON_SELECT_PIN, INPUT_PULLUP); // select button
  pinMode(BUTTON_DOWN_PIN, INPUT_PULLUP); // down button

  pinMode(DEMO_PIN, INPUT_PULLUP);
  
}


void loop() {


 // MÀN HÌNH THỰC ĐƠN 1      
if(current_screen == 0 ) {

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 

      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

 
  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0 ) {item_sel_previous = NUM_ITEMS -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }

   // nhấn nút của menu 
  if ((digitalRead(BUTTON_SELECT_PIN) == LOW) && (button_select_clicked == 0)) { // nhấp vào nút chọn, chuyển giữa các màn hình
     button_select_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
     if (item_selected == 1 && current_screen == 0   ) {   // khi nhấn vào glove mode sẽ chuyển đến mục có glove mode 
      current_screen = 1;
      item_selected = 0 ; 
     } // màn hình mục menu -> màn hình ảnh chụp màn hình
     else if (item_selected == 3 && current_screen == 1  ) {   
      current_screen = 0;
      item_selected = 1 ; 
     }

     else if( item_selected == 0 && current_screen == 1  ) {
       current_screen = 2 ; 
     } 
     else if( item_selected == 2 && current_screen == 2) {
         current_screen = 1 ;
         item_selected = 0 ; 
     }

     else if(item_selected == 1 && current_screen == 1   ) {
           current_screen = 3 ; 
           item_selected = 0 ; 
     } 
     else if( item_selected == 2 && current_screen == 3 ) {
          current_screen = 1 ; 
          item_selected = 1 ; 
     }
     //thứ 5 
    else if(item_selected == 0 && current_screen == 0  ) {
      current_screen = 4 ; 
     }
         else if (item_selected == 4 && current_screen == 4 ) {
       current_screen = 0 ; 
       item_selected = 0 ;
     }
   //thứ 6   
     else if(item_selected == 0 && current_screen == 4   ) {
       current_screen = 5 ; 
     }
     else if( item_selected == 2 && current_screen == 5 ) {
          current_screen = 4 ;
          item_selected = 0;

     }
  //   thứ 7 
     else if(item_selected == 1 && current_screen == 4  ) {
       current_screen = 6 ;
       item_selected = 0 ; 

     } 
     else if(item_selected == 2 && current_screen == 6  ) {
        current_screen = 4 ; 
        item_selected = 1 ; 
     }
     // thứ 8 
      else if(item_selected == 2 && current_screen == 4  ) {
      current_screen = 7 ; 
      item_selected = 0 ; 
    } 
      else if (item_selected ==2 && current_screen == 7 ) {
      current_screen = 4 ;
      item_selected = 2 ; 
    }
    // thứ 9 
     else if( item_selected == 3 && current_screen == 4 ) {
      current_screen = 8 ; 
      item_selected = 0 ;
     }
     else if( item_selected == 2 && current_screen == 8  ) {
      current_screen = 4 ;
      item_selected = 3 ;
     }
       // thứ 10 
        else if (item_selected == 3 &&  current_screen == 0) {
      current_screen = 9 ; 
      item_selected = 0 ; 
    }
    else if( item_selected == 2 && current_screen == 9) {
      current_screen = 0 ;
      item_selected = 3 ; 
    }
   // THỨ 11 
   else if( item_selected == 0 && current_screen == 9  ) {
    current_screen = 10 ;
    item_selected = 0 ; 
   } 
   else if(item_selected == 6 && current_screen == 10  ) {
    current_screen = 9 ;
    item_selected = 0 ; 
   }
   // thứ 12 
   else if( item_selected == 1 && current_screen == 9  ) {
    current_screen = 11 ; 
    item_selected = 0 ;
   }
   else if( item_selected == 6 && current_screen == 11  ) {
    current_screen = 9 ;
    item_selected = 1 ; 
   }
   // thứ 13 
   else if( item_selected == 2 && current_screen == 1 ) {
    current_screen = 12 ;
    item_selected = 0 ; 
   } 
   else if(item_selected == 4 &&  current_screen == 12 ) {
    current_screen = 1 ;
    item_selected = 2 ; 
   }



  }
   if ((digitalRead(BUTTON_SELECT_PIN) == HIGH) && (button_select_clicked == 1)) { // bỏ bấm 
    button_select_clicked = 0;
  }

// MÀN HÌNH THỰC ĐƠN 2
  if (current_screen == 1  ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_CONTROL -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_CONTROL) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }
  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_CONTROL -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_CONTROL ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
  

 
 // THỨC ĐƠN 3 
 
  if (current_screen == 2  ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_WIRELESS -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_WIRELESS) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }


  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_WIRELESS -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_WIRELESS ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
// menu thứ 4 
 
  if (current_screen == 3  ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_classic -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_classic) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }


  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_classic -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_classic ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
// menu thứ 5 
  if (current_screen == 4  ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_GLOVE -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_GLOVE) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }


  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_GLOVE -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_GLOVE ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
  // menu thứ 6 
    if (current_screen == 5 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_classic_automatic -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_classic_automatic) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }


  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_classic_automatic -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_classic_automatic ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
  
  // menu thứ 7 
      if (current_screen == 6 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_voice_control -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_voice_control) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }


  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_voice_control -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_voice_control ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
  // menu thứ 8 
       if (current_screen == 7 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_FORCE_CONTROL -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_FORCE_CONTROL) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_FORCE_CONTROL -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_FORCE_CONTROL ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
  // MENU THỨ 9 
       if (current_screen == 8 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_GESURE_CONTROL -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_GESURE_CONTROL) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_GESURE_CONTROL -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_GESURE_CONTROL ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }

  // MUNU THỨ 10 
    if (current_screen == 9 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_sensors_text -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_sensors_text) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_sensors_text -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_sensors_text ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
    // MUNU THỨ 11
    if (current_screen == 10 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_check_sensor -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_check_sensor) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_check_sensor -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_check_sensor ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }

  // MENU THỨ 12 
      if (current_screen == 11 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_check_MOTOR -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_check_MOTOR) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_check_MOTOR -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_check_MOTOR ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }

  // thứ 13 
        if (current_screen == 12 ) { 

      // nút lên xuống chỉ dùng được cho màn hình menu
      if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0)) { // đã nhấp vào nút lên - chuyển đến mục menu trước đó
        item_selected = item_selected - 1; // chọn mục trước đó
        button_up_clicked = 1; //nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected < 0) { //nếu mục đầu tiên được chọn, hãy chuyển đến mục cuối cùng    ------------
          item_selected = NUM_ITEMS_HANDMADE -1;
        }
      }
      else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0) ) { // đã nhấp vào nút xuống - chuyển sang mục menu tiếp theo
        item_selected = item_selected + 1; // chọn mục tiếp theo
        button_down_clicked = 1; // nút đặt thành nhấp để chỉ thực hiện hành động một lần
        if (item_selected >= NUM_ITEMS_HANDMADE) { //mục cuối cùng đã được chọn, chuyển tới mục menu đầu tiên
          item_selected = 0;
          }
      } 
      if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1)) { // bỏ bấm 
        button_up_clicked = 0;
      }
      if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1)) { // bỏ bấm 
        button_down_clicked = 0;
      }

  // đặt giá trị chính xác cho các mục trước và tiếp theo
  item_sel_previous = item_selected -1;
  if (item_sel_previous < 0  ) {item_sel_previous =NUM_ITEMS_HANDMADE -1;} // mục trước sẽ ở dưới đầu tiên = đặt nó ở mục cuối cùng
  item_sel_next = item_selected + 1;  
  if (item_sel_next >= NUM_ITEMS_HANDMADE ) {item_sel_next = 0;} //mục tiếp theo sẽ ở sau mục cuối cùng = đặt nó làm mục đầu tiên
  }
  u8g.firstPage(); // rcần thiết cho chế độ vẽ trang cho thư viện u8g
  do {

    if (current_screen == 0) { // MENU SCREEN

      //nền mục đã chọn
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, menu_items[item_sel_previous]); 
      u8g.drawBitmapP( 4, 2, 16/8, 16, bitmap_icons[item_sel_previous]);          


      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, menu_items[item_selected]);   
      u8g.drawBitmapP( 4, 24, 16/8, 16, bitmap_icons[item_selected]);     

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, menu_items[item_sel_next]);   
      u8g.drawBitmapP( 4, 46, 16/8, 16, bitmap_icons[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS * item_selected, 3, 64/NUM_ITEMS); 

      // vẽ logo upir
      u8g.drawBitmapP(128-16-4, 64-4, 16/8, 4, epd_bitmap_m_c_____1_);               

    } 
    else if (current_screen == 1) { // mennu 2 của GLOVE MODE 
        
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode[item_sel_previous]); 
      u8g.drawBitmapP( 4, 2, 16/8, 16, epd_bitmap_allArray[item_sel_previous]);          


      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode[item_selected]);   
      u8g.drawBitmapP( 4, 24, 16/8, 16, epd_bitmap_allArray[item_selected]);     

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode[item_sel_next]);   
      u8g.drawBitmapP( 4, 46, 16/8, 16, epd_bitmap_allArray[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_CONTROL * item_selected, 3, 64/NUM_ITEMS_CONTROL); 

    } 
    else if (current_screen == 2) { 
           
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_wireless[item_sel_previous]); 
      u8g.drawBitmapP( 4, 2, 16/8, 16, menu_on_of_back[item_sel_previous]);          


      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_wireless[item_selected]);   
      u8g.drawBitmapP( 4, 24, 16/8, 16, menu_on_of_back[item_selected]);     

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_wireless[item_sel_next]);   
      u8g.drawBitmapP( 4, 46, 16/8, 16, menu_on_of_back[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_CONTROL * item_selected, 3, 64/NUM_ITEMS_CONTROL); 
    }
    else if(current_screen == 3 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_classic[item_sel_previous]); 
      u8g.drawBitmapP( 4, 2, 16/8, 16, menu_on_of_back[item_sel_previous]);          


      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_classic[item_selected]);   
      u8g.drawBitmapP( 4, 24, 16/8, 16, menu_on_of_back[item_selected]);     

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_classic[item_sel_next]);   
      u8g.drawBitmapP( 4, 46, 16/8, 16, menu_on_of_back[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_CONTROL * item_selected, 3, 64/NUM_ITEMS_CONTROL); 
    }
    else if(current_screen == 4 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(15, 15, glove_mode[item_sel_previous]);          


      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(15, 15+20+2, glove_mode[item_selected]);   
      

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(15, 15+20+20+2+2, glove_mode[item_sel_next]);   
      

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_GLOVE * item_selected, 3, 64/NUM_ITEMS_GLOVE); 
    }

       else if(current_screen == 5 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_automatic[item_sel_previous]);          
       u8g.drawBitmapP( 4, 2, 16/8, 16, menu_on_of_back[item_sel_previous]);  

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_automatic[item_selected]);   
       u8g.drawBitmapP( 4, 24, 16/8, 16, menu_on_of_back[item_selected]);  

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_automatic[item_sel_next]);   
       u8g.drawBitmapP( 4, 46, 16/8, 16, menu_on_of_back[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_classic_automatic * item_selected, 3, 64/NUM_ITEMS_classic_automatic); 
    }
    
       else if(current_screen == 6 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_voice_control[item_sel_previous]);          
       u8g.drawBitmapP( 4, 2, 16/8, 16, menu_on_of_back[item_sel_previous]);  

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_voice_control[item_selected]);   
       u8g.drawBitmapP( 4, 24, 16/8, 16, menu_on_of_back[item_selected]);  

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_voice_control[item_sel_next]);   
       u8g.drawBitmapP( 4, 46, 16/8, 16, menu_on_of_back[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_voice_control * item_selected, 3, 64/NUM_ITEMS_voice_control); 
    }

        else if(current_screen == 7 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_FORCE_CONTROL[item_sel_previous]);          
       u8g.drawBitmapP( 4, 2, 16/8, 16, menu_on_of_back[item_sel_previous]);  

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_FORCE_CONTROL[item_selected]);   
       u8g.drawBitmapP( 4, 24, 16/8, 16, menu_on_of_back[item_selected]);  

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_FORCE_CONTROL[item_sel_next]);   
       u8g.drawBitmapP( 4, 46, 16/8, 16, menu_on_of_back[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_FORCE_CONTROL * item_selected, 3, 64/NUM_ITEMS_FORCE_CONTROL); 
    }
      else if(current_screen == 8 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_gesture_control[item_sel_previous]);          
       u8g.drawBitmapP( 4, 2, 16/8, 16, menu_on_of_back[item_sel_previous]);  

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_gesture_control[item_selected]);   
       u8g.drawBitmapP( 4, 24, 16/8, 16, menu_on_of_back[item_selected]);  

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_gesture_control[item_sel_next]);   
       u8g.drawBitmapP( 4, 46, 16/8, 16, menu_on_of_back[item_sel_next]);  

      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_GESURE_CONTROL * item_selected, 3, 64/NUM_ITEMS_GESURE_CONTROL); 
    }
       else if(current_screen == 9 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_sensors_text[item_sel_previous]);          
       u8g.drawBitmapP( 4, 2, 16/8, 16, menu_test[item_sel_previous]);  
      

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_sensors_text[item_selected]);   
       u8g.drawBitmapP( 4, 24, 16/8, 16, menu_test[item_selected]);  
      

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_sensors_text[item_sel_next]);
       u8g.drawBitmapP( 4, 46, 16/8, 16, menu_test[item_sel_next]);  
      
      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_sensors_text * item_selected, 3, 64/NUM_ITEMS_sensors_text); 
    }
           else if(current_screen == 10 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_check_sensor[item_sel_previous]);          
      

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_check_sensor[item_selected]);   
   
      

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_check_sensor[item_sel_next]);
      
      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_check_sensor * item_selected, 3, 64/NUM_ITEMS_check_sensor); 
    }
               else if(current_screen == 11 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_check_MOTOR[item_sel_previous]);          
      

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_check_MOTOR[item_selected]);   
   
      

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_check_MOTOR[item_sel_next]);
      
      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_check_MOTOR * item_selected, 3, 64/NUM_ITEMS_check_MOTOR); 
    }
                 else if(current_screen == 12 ) {
 
      // nền mục đã chọn            
      u8g.drawBitmapP(0, 22, 128/8, 21, bitmap_item_sel_outline);

      // vẽ mục trước dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);
      u8g.drawStr(25, 15, control_mode_HANDMADE[item_sel_previous]);          
       u8g.drawBitmapP( 4, 2, 16/8, 16, handmede[item_sel_previous]);  
      

      // vẽ mục đã chọn dưới dạng biểu tượng + nhãn bằng phông chữ đậm
      u8g.setFont(u8g_font_7x14B);    
      u8g.drawStr(25, 15+20+2, control_mode_HANDMADE[item_selected]);   
       u8g.drawBitmapP( 4, 24, 16/8, 16, handmede[item_selected]);  
   
      

      // vẽ mục tiếp theo dưới dạng biểu tượng + nhãn
      u8g.setFont(u8g_font_7x14);     
      u8g.drawStr(25, 15+20+20+2+2, control_mode_HANDMADE[item_sel_next]);
       u8g.drawBitmapP( 4, 46, 16/8, 16, handmede[item_sel_next]);  
      
      // vẽ nền thanh cuộn
      u8g.drawBitmapP(128-8, 0, 8/8, 64, bitmap_scrollbar_background);

      // vẽ tay cầm thanh cuộn
      u8g.drawBox(125, 64/NUM_ITEMS_HANDMADE * item_selected, 3, 64/NUM_ITEMS_HANDMADE); 
    }
  } while ( u8g.nextPage() ); //cần thiết cho chế độ vẽ trang với thư viện u8g


}