#include <iostream>
#include "colors.h"

#ifdef __linux__
#define CLR_SCREEN "clear"
#endif // __linux__

#ifdef __MINGW32__
#define CLR_SCREEN "CLS"
#endif // __MINGW32__

#include <cstdlib>


using namespace std;

/********************************************************/
//-------------------------------------------------------
void show_instructions();
void print_formats();
//-------------------------------------------------------
void print_bgnd_red();
void print_bgnd_green();
void print_bgnd_blue();
void print_bgnd_yellow();
void print_bgnd_orange();
void print_bgnd_brown();
void print_bgnd_aqua();
void print_bgnd_purple();
void print_bgnd_pink();
void print_bgnd_gray();
//-------------------------------------------------------
void print_txt_red();
void print_txt_green();
void print_txt_blue();
void print_txt_yellow();
void print_txt_orange();
void print_txt_brown();
void print_txt_aqua();
void print_txt_purple();
void print_txt_pink();
void print_txt_gray();
//-------------------------------------------------------
void ask_what_to_show();
int ask_color_shade();
void show(int option, int shade);
//-------------------------------------------------------
bool valid_options_1(int option);
bool valid_options_2(int option);
/*******************************************************/

int main()
{
	ask_what_to_show();
	return 0;
}

void ask_what_to_show()
{
	int option = 1;
	int color_shade = 1;

	system(CLR_SCREEN);
	cout << "       Enter one of these options" << endl;
	cout << "       ╔════════════════════════╗" << endl;
    cout << "       ║ 1. Text formats        ║" << endl;
    cout << "       ║ 2. Background colors   ║" << endl;
    cout << "       ║ 3. Text colors         ║" << endl;
    cout << "       ║ 0. Exit                ║" << endl;
    cout << "       ╚════════════════════════╝" << endl;
	cout << "> ";
	cin >> option;
	cout << endl;

    while(option != 0)
    {
    	color_shade = 0;
    	
    	if(option != 1)
    		color_shade = ask_color_shade();
    	show(option, color_shade);
    	cout << "\nENTER to continue..." << endl;
    	cin.get();
    	cin.get();
    	system(CLR_SCREEN);
		cout << "       Enter one of these options" << endl;
		cout << "       ╔════════════════════════╗" << endl;
	    cout << "       ║ 1. Text formats        ║" << endl;
	    cout << "       ║ 2. Background colors   ║" << endl;
	    cout << "       ║ 3. Text colors         ║" << endl;
	    cout << "       ║ 0. Exit                ║" << endl;
	    cout << "       ╚════════════════════════╝" << endl;
    	cout << "> ";
    	cin >> option;
    	cout << endl;    	
    }
    cout << "            Bye bye " << endl;
}

int ask_color_shade()
{
	int color_shade;
	system(CLR_SCREEN);
	cout << "       Enter one of these options" << endl;
	cout << "       ╔═══════════════╗" << endl;
    cout << "       ║  1. Red       ║" << endl;
    cout << "       ║  2. Green     ║" << endl;
    cout << "       ║  3. Blue      ║" << endl;
    cout << "       ║  4. Yellow    ║" << endl;
    cout << "       ║  5. Orange    ║" << endl;
    cout << "       ║  6. Brown     ║" << endl;
    cout << "       ║  7. Aqua      ║" << endl;
    cout << "       ║  8. Purple    ║" << endl;
    cout << "       ║  9. Pink      ║" << endl;
    cout << "       ║ 10. Gray      ║" << endl;
    cout << "       ╚═══════════════╝" << endl;
    cout << "> ";
	cin >> color_shade;
	cout << endl;
	return color_shade;
}

void show_instructions()
{
	cout << "       Please open colors.h and see USAGE to learn how to use these codes." << endl;
	cout << endl;
	cout << "       The texts show the name of the constant." << endl;
	cout << "       To find the scape sequence code open colors.h" << endl;
	cout << "       and look for the selected constant name." << endl;
	cout << endl;
}

void show(int option, int color_shade)
{
	system(CLR_SCREEN);
	show_instructions();
	if(option == 1)
	{
		print_formats();
	}
	else if(option == 2)
	{		
		if(color_shade == 1)
			print_bgnd_red();
			
		if(color_shade == 2)
			print_bgnd_green();
			
		if(color_shade == 3)
			print_bgnd_blue();
			
		if(color_shade == 4)
			print_bgnd_yellow();
			
		if(color_shade == 5)
			print_bgnd_orange();
			
		if(color_shade == 6)
			print_bgnd_brown();
			
		if(color_shade == 7)
			print_bgnd_aqua();
			
		if(color_shade == 8)
			print_bgnd_purple();
			
		if(color_shade == 9)
			print_bgnd_pink();
			
		if(color_shade == 10)
			print_bgnd_gray();
	}
	else if(option == 3)
	{	
	
		if(color_shade == 1)
			print_txt_red();
			
		if(color_shade == 2)
			print_txt_green();
			
		if(color_shade == 3)
			print_txt_blue();
			
		if(color_shade == 4)
			print_txt_yellow();
			
		if(color_shade == 5)
			print_txt_orange();
			
		if(color_shade == 6)
			print_txt_brown();
			
		if(color_shade == 7)
			print_txt_aqua();
			
		if(color_shade == 8)
			print_txt_purple();
			
		if(color_shade == 9)
			print_txt_pink();
			
		if(color_shade == 10)
			print_txt_gray();
	}
}

void print_formats()
{
	cout << "    Formats \n" << endl;
	cout << "Normal text" << endl;
	cout << TXT_BOLD << "Bold text TXT_BOLD" << END_COLOR << endl;
	cout << TXT_ITALIC << "Italic text TXT_ITALIC" << END_COLOR << endl;
	cout << TXT_UNDERLINE << "Underlined text TXT_UNDERLINE" << END_COLOR << endl;
	cout << TXT_STRIKE_THROUGH << "Striked-through text TXT_STRIKE_THROUGH" << END_COLOR << endl;
}

void print_bgnd_red()
{
	//Red
	cout << BGND_DARK_RED_52 << " BGND_DARK_RED_52 " << END_COLOR << " " << endl;
	cout << BGND_DARK_RED_88 << " BGND_DARK_RED_88 " << END_COLOR << " " << endl;
	cout << BGND_DARK_RED_1 << " BGND_DARK_RED_1 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_RED_124 << " BGND_RED_124 " << END_COLOR << " " << endl;
	cout << BGND_RED_160 << " BGND_RED_160 " << END_COLOR << " " << endl;
	cout << BGND_RED_196 << " BGND_RED_196 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_RED_9 << " BGND_LIGHT_RED_9 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_green()
{
	//Green
	cout << BGND_DARK_GREEN_22 << " BGND_DARK_GREEN_22 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GREEN_28 << " BGND_DARK_GREEN_28 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_GREEN_2 << " BGND_GREEN_2 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_10 << " BGND_GREEN_10 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_34 << " BGND_GREEN_34 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_40 << " BGND_GREEN_40 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_64 << " BGND_GREEN_64 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_70 << " BGND_GREEN_70 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_76 << " BGND_GREEN_76 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_112 << " BGND_GREEN_112 " << END_COLOR << " " << endl;
	cout << BGND_GREEN_118 << " BGND_GREEN_118 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_GREEN_46 << " BGND_LIGHT_GREEN_46 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GREEN_47 << " BGND_LIGHT_GREEN_47 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GREEN_77 << " BGND_LIGHT_GREEN_77 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GREEN_82 << " BGND_LIGHT_GREEN_82 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GREEN_119 << " BGND_LIGHT_GREEN_119 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_blue()
{
	//Blue
	cout << BGND_DARK_BLUE_17 << " BGND_DARK_BLUE_17" << END_COLOR << " " << endl;
	cout << BGND_DARK_BLUE_18 << " BGND_DARK_BLUE_18" << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_BLUE_4 << " BGND_BLUE_4" << END_COLOR << " " << endl;
	cout << BGND_BLUE_12 << " BGND_BLUE_12" << END_COLOR << " " << endl;
	cout << BGND_BLUE_19 << " BGND_BLUE_19" << END_COLOR << " " << endl;
	cout << BGND_BLUE_20 << " BGND_BLUE_20" << END_COLOR << " " << endl;
	cout << BGND_BLUE_21 << " BGND_BLUE_21" << END_COLOR << " " << endl;
	cout << BGND_BLUE_25 << " BGND_BLUE_25" << END_COLOR << " " << endl;
	cout << BGND_BLUE_26 << " BGND_BLUE_26" << END_COLOR << " " << endl;
	cout << BGND_BLUE_27 << " BGND_BLUE_27" << END_COLOR << " " << endl;
	cout << BGND_BLUE_56 << " BGND_BLUE_56" << END_COLOR << " " << endl;
	cout << BGND_BLUE_57 << " BGND_BLUE_57" << END_COLOR << " " << endl;
	cout << BGND_BLUE_63 << " BGND_BLUE_63" << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_BLUE_6 << " BGND_LIGHT_BLUE_6" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_14 << " BGND_LIGHT_BLUE_14" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_32 << " BGND_LIGHT_BLUE_32" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_33 << " BGND_LIGHT_BLUE_33" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_38 << " BGND_LIGHT_BLUE_38" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_39 << " BGND_LIGHT_BLUE_39" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_44 << " BGND_LIGHT_BLUE_44" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_45 << " BGND_LIGHT_BLUE_45" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_50 << " BGND_LIGHT_BLUE_50" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_51 << " BGND_LIGHT_BLUE_51" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_68 << " BGND_LIGHT_BLUE_68" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_69 << " BGND_LIGHT_BLUE_69" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_74 << " BGND_LIGHT_BLUE_74" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_75 << " BGND_LIGHT_BLUE_75" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_80 << " BGND_LIGHT_BLUE_80" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_81 << " BGND_LIGHT_BLUE_81" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_86 << " BGND_LIGHT_BLUE_86" << END_COLOR << " " << endl;
	cout << BGND_LIGHT_BLUE_87 << " BGND_LIGHT_BLUE_87" << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_yellow()
{
	//Yellow
	cout << BGND_DARK_YELLOW_3 << " BGND_DARK_YELLOW_3 " << END_COLOR << " " << endl;
	cout << BGND_DARK_YELLOW_58 << " BGND_DARK_YELLOW_58 " << END_COLOR << " " << endl;
	cout << BGND_DARK_YELLOW_100 << " BGND_DARK_YELLOW_100 " << END_COLOR << " " << endl;
	cout << BGND_DARK_YELLOW_106 << " BGND_DARK_YELLOW_106 " << END_COLOR << " " << endl;
	cout << BGND_DARK_YELLOW_142 << " BGND_DARK_YELLOW_142 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_YELLOW_148 << " BGND_YELLOW_148 " << END_COLOR << " " << endl;
	cout << BGND_YELLOW_154 << " BGND_YELLOW_154 " << END_COLOR << " " << endl;
	cout << BGND_YELLOW_184 << " BGND_YELLOW_184 " << END_COLOR << " " << endl;
	cout << BGND_YELLOW_190 << " BGND_YELLOW_190 " << END_COLOR << " " << endl;
	cout << BGND_YELLOW_220 << " BGND_YELLOW_220 " << END_COLOR << " " << endl;
	cout << BGND_YELLOW_226 << " BGND_YELLOW_226 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_YELLOW_149 << " BGND_LIGHT_YELLOW_149 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_150 << " BGND_LIGHT_YELLOW_150 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_155 << " BGND_LIGHT_YELLOW_155 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_156 << " BGND_LIGHT_YELLOW_156 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_185 << " BGND_LIGHT_YELLOW_185 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_186 << " BGND_LIGHT_YELLOW_186 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_191 << " BGND_LIGHT_YELLOW_191 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_192 << " BGND_LIGHT_YELLOW_192 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_221 << " BGND_LIGHT_YELLOW_221 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_222 << " BGND_LIGHT_YELLOW_222 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_227 << " BGND_LIGHT_YELLOW_227 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_YELLOW_228 << " BGND_LIGHT_YELLOW_228 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_orange()
{
	//Orange
	cout << BGND_ORANGE_130 << " BGND_ORANGE_130 " << END_COLOR << " " << endl;
	cout << BGND_ORANGE_166 << " BGND_ORANGE_166 " << END_COLOR << " " << endl;
	cout << BGND_ORANGE_172 << " BGND_ORANGE_172 " << END_COLOR << " " << endl;
	cout << BGND_ORANGE_202 << " BGND_ORANGE_202 " << END_COLOR << " " << endl;
	cout << BGND_ORANGE_208 << " BGND_ORANGE_208 " << END_COLOR << " " << endl;
	cout << BGND_ORANGE_214 << " BGND_ORANGE_214 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_brown()
{	
	//Brown
	cout << BGND_BROWN_94 << " BGND_BROWN_94 " << END_COLOR << " " << endl;
	cout << BGND_BROWN_136 << " BGND_BROWN_136 " << END_COLOR << " " << endl;
	cout << BGND_BROWN_137 << " BGND_BROWN_137 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_aqua()
{
	//Aqua
	cout << BGND_DARK_AQUA_23 << " BGND_DARK_AQUA_23 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_24 << " BGND_DARK_AQUA_24 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_29 << " BGND_DARK_AQUA_29 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_30 << " BGND_DARK_AQUA_30 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_31 << " BGND_DARK_AQUA_31 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_65 << " BGND_DARK_AQUA_65 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_66 << " BGND_DARK_AQUA_66 " << END_COLOR << " " << endl;
	cout << BGND_DARK_AQUA_67 << " BGND_DARK_AQUA_67 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_AQUA_35 << " BGND_AQUA_35 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_36 << " BGND_AQUA_36 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_37 << " BGND_AQUA_37 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_71 << " BGND_AQUA_71 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_78 << " BGND_AQUA_78 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_83 << " BGND_AQUA_83 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_113 << " BGND_AQUA_113 " << END_COLOR << " " << endl;
	cout << BGND_AQUA_119 << " BGND_AQUA_119 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_AQUA_41 << " BGND_LIGHT_AQUA_41 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_42 << " BGND_LIGHT_AQUA_42 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_43 << " BGND_LIGHT_AQUA_43 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_48 << " BGND_LIGHT_AQUA_48 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_49 << " BGND_LIGHT_AQUA_49 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_72 << " BGND_LIGHT_AQUA_72 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_73 << " BGND_LIGHT_AQUA_73 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_79 << " BGND_LIGHT_AQUA_79 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_84 << " BGND_LIGHT_AQUA_84 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_85 << " BGND_LIGHT_AQUA_85 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_114 << " BGND_LIGHT_AQUA_114 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_120 << " BGND_LIGHT_AQUA_120 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_121 << " BGND_LIGHT_AQUA_121 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_122 << " BGND_LIGHT_AQUA_122 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_AQUA_123 << " BGND_LIGHT_AQUA_123 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_purple()
{
	//Purple
	cout << BGND_DARK_PURPLE_53 << " BGND_DARK_PURPLE_53 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_54 << " BGND_DARK_PURPLE_54 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_55 << " BGND_DARK_PURPLE_55 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_89 << " BGND_DARK_PURPLE_89 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_90 << " BGND_DARK_PURPLE_90 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_96 << " BGND_DARK_PURPLE_96 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_125 << " BGND_DARK_PURPLE_125 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_126 << " BGND_DARK_PURPLE_126 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PURPLE_127 << " BGND_DARK_PURPLE_127 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_PURPLE_5 << " BGND_PURPLE_5 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_13 << " BGND_PURPLE_13 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_91 << " BGND_PURPLE_91 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_92 << " BGND_PURPLE_92 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_93 << " BGND_PURPLE_93 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_97 << " BGND_PURPLE_97 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_98 << " BGND_PURPLE_98 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_99 << " BGND_PURPLE_99 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_128 << " BGND_PURPLE_128 " << END_COLOR << " " << endl;
	cout << BGND_PURPLE_129 << " BGND_PURPLE_129 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_PURPLE_104 << " BGND_LIGHT_PURPLE_104 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_105 << " BGND_LIGHT_PURPLE_105 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_133 << " BGND_LIGHT_PURPLE_133 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_134 << " BGND_LIGHT_PURPLE_134 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_135 << " BGND_LIGHT_PURPLE_135 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_140 << " BGND_LIGHT_PURPLE_140 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_141 << " BGND_LIGHT_PURPLE_141 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_164 << " BGND_LIGHT_PURPLE_164 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_165 << " BGND_LIGHT_PURPLE_165 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_170 << " BGND_LIGHT_PURPLE_170 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_171 << " BGND_LIGHT_PURPLE_171 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_176 << " BGND_LIGHT_PURPLE_176 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PURPLE_177 << " BGND_LIGHT_PURPLE_177 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_pink()
{
	//Pink
	cout << BGND_DARK_PINK_131 << " BGND_DARK_PINK_131 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PINK_132 << " BGND_DARK_PINK_132 " << END_COLOR << " " << endl;
	cout << BGND_DARK_PINK_174 << " BGND_DARK_PINK_174 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_PINK_161 << " BGND_PINK_161 " << END_COLOR << " " << endl;
	cout << BGND_PINK_162 << " BGND_PINK_162 " << END_COLOR << " " << endl;
	cout << BGND_PINK_163 << " BGND_PINK_163 " << END_COLOR << " " << endl;
	cout << BGND_PINK_197 << " BGND_PINK_197 " << END_COLOR << " " << endl;
	cout << BGND_PINK_198 << " BGND_PINK_198 " << END_COLOR << " " << endl;
	cout << BGND_PINK_199 << " BGND_PINK_199 " << END_COLOR << " " << endl;
	cout << BGND_PINK_200 << " BGND_PINK_200 " << END_COLOR << " " << endl;
	cout << BGND_PINK_201 << " BGND_PINK_201 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_PINK_167 << " BGND_LIGHT_PINK_167 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_168 << " BGND_LIGHT_PINK_168 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_169 << " BGND_LIGHT_PINK_169 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_203 << " BGND_LIGHT_PINK_203 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_204 << " BGND_LIGHT_PINK_204 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_205 << " BGND_LIGHT_PINK_205 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_206 << " BGND_LIGHT_PINK_206 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_207 << " BGND_LIGHT_PINK_207 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_209 << " BGND_LIGHT_PINK_209 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_210 << " BGND_LIGHT_PINK_210 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_211 << " BGND_LIGHT_PINK_211 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_212 << " BGND_LIGHT_PINK_212 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_213 << " BGND_LIGHT_PINK_213 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_218 << " BGND_LIGHT_PINK_218 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_PINK_219 << " BGND_LIGHT_PINK_219 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_bgnd_gray()
{
	//Gray
	cout << BGND_BLACK_16 << " BGND_BLACK_16 " << END_COLOR << " " << endl;
	cout << BGND_BLACK_232 << " BGND_BLACK_232 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_DARK_GRAY_59 << " BGND_DARK_GRAY_59 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_233 << " BGND_DARK_GRAY_233 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_234 << " BGND_DARK_GRAY_234 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_235 << " BGND_DARK_GRAY_235 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_236 << " BGND_DARK_GRAY_236 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_237 << " BGND_DARK_GRAY_237 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_238 << " BGND_DARK_GRAY_238 " << END_COLOR << " " << endl;
	cout << BGND_DARK_GRAY_239 << " BGND_DARK_GRAY_239 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_GRAY_8 << " BGND_GRAY_8 " << END_COLOR << " " << endl;
	cout << BGND_GRAY_240 << " BGND_GRAY_240 " << END_COLOR << " " << endl;
	cout << BGND_GRAY_241 << " BGND_GRAY_241 " << END_COLOR << " " << endl;
	cout << BGND_GRAY_242 << " BGND_GRAY_242 " << END_COLOR << " " << endl;
	cout << BGND_GRAY_243 << " BGND_GRAY_243 " << END_COLOR << " " << endl;
	cout << BGND_GRAY_244 << " BGND_GRAY_244 " << END_COLOR << " " << endl;
	cout << BGND_GRAY_245 << " BGND_GRAY_245 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_LIGHT_GRAY_246 << " BGND_LIGHT_GRAY_246 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_247 << " BGND_LIGHT_GRAY_247 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_248 << " BGND_LIGHT_GRAY_248 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_249 << " BGND_LIGHT_GRAY_249 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_250 << " BGND_LIGHT_GRAY_250 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_251 << " BGND_LIGHT_GRAY_251 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_252 << " BGND_LIGHT_GRAY_252 " << END_COLOR << " " << endl;
	cout << BGND_LIGHT_GRAY_263 << " BGND_LIGHT_GRAY_263 " << END_COLOR << " " << endl;
	cout << endl;
	cout << BGND_WHITE_7 << " BGND_WHITE_7 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_15 << " BGND_WHITE_15 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_194 << " BGND_WHITE_194 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_195 << " BGND_WHITE_195 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_230 << " BGND_WHITE_230 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_231 << " BGND_WHITE_231 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_254 << " BGND_WHITE_254 " << END_COLOR << " " << endl;
	cout << BGND_WHITE_255 << " BGND_WHITE_255 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_red()
{
	//Red
	cout << TXT_DARK_RED_52 << " TXT_DARK_RED_52 " << END_COLOR << " " << endl;
	cout << TXT_DARK_RED_88 << " TXT_DARK_RED_88 " << END_COLOR << " " << endl;
	cout << TXT_DARK_RED_1 << " TXT_DARK_RED_1 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_RED_124 << " TXT_RED_124 " << END_COLOR << " " << endl;
	cout << TXT_RED_160 << " TXT_RED_160 " << END_COLOR << " " << endl;
	cout << TXT_RED_196 << " TXT_RED_196 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_RED_9 << " TXT_LIGHT_RED_9 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_green()
{
	//Green
	cout << TXT_DARK_GREEN_22 << " TXT_DARK_GREEN_22 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GREEN_28 << " TXT_DARK_GREEN_28 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_GREEN_2 << " TXT_GREEN_2 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_10 << " TXT_GREEN_10 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_34 << " TXT_GREEN_34 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_40 << " TXT_GREEN_40 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_64 << " TXT_GREEN_64 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_70 << " TXT_GREEN_70 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_76 << " TXT_GREEN_76 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_112 << " TXT_GREEN_112 " << END_COLOR << " " << endl;
	cout << TXT_GREEN_118 << " TXT_GREEN_118 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_GREEN_46 << " TXT_LIGHT_GREEN_46 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GREEN_47 << " TXT_LIGHT_GREEN_47 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GREEN_77 << " TXT_LIGHT_GREEN_77 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GREEN_82 << " TXT_LIGHT_GREEN_82 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GREEN_119 << " TXT_LIGHT_GREEN_119 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_blue()
{
	//Blue
	cout << TXT_DARK_BLUE_17 << " TXT_DARK_BLUE_17 " << END_COLOR << " " << endl;
	cout << TXT_DARK_BLUE_18 << " TXT_DARK_BLUE_18 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_BLUE_4 << " TXT_BLUE_4 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_12 << " TXT_BLUE_12 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_19 << " TXT_BLUE_19 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_20 << " TXT_BLUE_20 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_21 << " TXT_BLUE_21 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_25 << " TXT_BLUE_25 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_26 << " TXT_BLUE_26 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_27 << " TXT_BLUE_27 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_56 << " TXT_BLUE_56 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_57 << " TXT_BLUE_57 " << END_COLOR << " " << endl;
	cout << TXT_BLUE_63 << " TXT_BLUE_63 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_BLUE_6 << " TXT_LIGHT_BLUE_6 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_14 << " TXT_LIGHT_BLUE_14 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_32 << " TXT_LIGHT_BLUE_32 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_33 << " TXT_LIGHT_BLUE_33 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_38 << " TXT_LIGHT_BLUE_38 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_39 << " TXT_LIGHT_BLUE_39 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_44 << " TXT_LIGHT_BLUE_44 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_45 << " TXT_LIGHT_BLUE_45 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_50 << " TXT_LIGHT_BLUE_50 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_51 << " TXT_LIGHT_BLUE_51 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_68 << " TXT_LIGHT_BLUE_68 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_69 << " TXT_LIGHT_BLUE_69 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_74 << " TXT_LIGHT_BLUE_74 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_75 << " TXT_LIGHT_BLUE_75 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_80 << " TXT_LIGHT_BLUE_80 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_81 << " TXT_LIGHT_BLUE_81 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_86 << " TXT_LIGHT_BLUE_86 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_BLUE_87 << " TXT_LIGHT_BLUE_87 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_yellow()
{
	//Yellow
	cout << TXT_DARK_YELLOW_3 << " TXT_DARK_YELLOW_3 " << END_COLOR << " " << endl;
	cout << TXT_DARK_YELLOW_58 << " TXT_DARK_YELLOW_58 " << END_COLOR << " " << endl;
	cout << TXT_DARK_YELLOW_100 << " TXT_DARK_YELLOW_100 " << END_COLOR << " " << endl;
	cout << TXT_DARK_YELLOW_106 << " TXT_DARK_YELLOW_106 " << END_COLOR << " " << endl;
	cout << TXT_DARK_YELLOW_142 << " TXT_DARK_YELLOW_142 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_YELLOW_148 << " TXT_YELLOW_148 " << END_COLOR << " " << endl;
	cout << TXT_YELLOW_154 << " TXT_YELLOW_154 " << END_COLOR << " " << endl;
	cout << TXT_YELLOW_184 << " TXT_YELLOW_184 " << END_COLOR << " " << endl;
	cout << TXT_YELLOW_190 << " TXT_YELLOW_190 " << END_COLOR << " " << endl;
	cout << TXT_YELLOW_220 << " TXT_YELLOW_220 " << END_COLOR << " " << endl;
	cout << TXT_YELLOW_226 << " TXT_YELLOW_226 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_YELLOW_149 << " TXT_LIGHT_YELLOW_149 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_150 << " TXT_LIGHT_YELLOW_150 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_155 << " TXT_LIGHT_YELLOW_155 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_156 << " TXT_LIGHT_YELLOW_156 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_185 << " TXT_LIGHT_YELLOW_185 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_186 << " TXT_LIGHT_YELLOW_186 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_191 << " TXT_LIGHT_YELLOW_191 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_192 << " TXT_LIGHT_YELLOW_192 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_221 << " TXT_LIGHT_YELLOW_221 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_222 << " TXT_LIGHT_YELLOW_222 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_227 << " TXT_LIGHT_YELLOW_227 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_YELLOW_228 << " TXT_LIGHT_YELLOW_228 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_orange()
{
	//Orange
	cout << TXT_ORANGE_130 << " TXT_ORANGE_130 " << END_COLOR << " " << endl;
	cout << TXT_ORANGE_166 << " TXT_ORANGE_166 " << END_COLOR << " " << endl;
	cout << TXT_ORANGE_172 << " TXT_ORANGE_172 " << END_COLOR << " " << endl;
	cout << TXT_ORANGE_202 << " TXT_ORANGE_202 " << END_COLOR << " " << endl;
	cout << TXT_ORANGE_208 << " TXT_ORANGE_208 " << END_COLOR << " " << endl;
	cout << TXT_ORANGE_214 << " TXT_ORANGE_214 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_brown()
{	
	//Brown
	cout << TXT_BROWN_94 << " TXT_BROWN_94 " << END_COLOR << " " << endl;
	cout << TXT_BROWN_136 << " TXT_BROWN_136 " << END_COLOR << " " << endl;
	cout << TXT_BROWN_137 << " TXT_BROWN_137 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_aqua()
{
	//Aqua
	cout << TXT_DARK_AQUA_23 << " TXT_DARK_AQUA_23 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_24 << " TXT_DARK_AQUA_24 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_29 << " TXT_DARK_AQUA_29 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_30 << " TXT_DARK_AQUA_30 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_31 << " TXT_DARK_AQUA_31 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_65 << " TXT_DARK_AQUA_65 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_66 << " TXT_DARK_AQUA_66 " << END_COLOR << " " << endl;
	cout << TXT_DARK_AQUA_67 << " TXT_DARK_AQUA_67 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_AQUA_35 << " TXT_AQUA_35 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_36 << " TXT_AQUA_36 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_37 << " TXT_AQUA_37 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_71 << " TXT_AQUA_71 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_78 << " TXT_AQUA_78 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_83 << " TXT_AQUA_83 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_113 << " TXT_AQUA_113 " << END_COLOR << " " << endl;
	cout << TXT_AQUA_119 << " TXT_AQUA_119 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_AQUA_41 << " TXT_LIGHT_AQUA_41 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_42 << " TXT_LIGHT_AQUA_42 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_43 << " TXT_LIGHT_AQUA_43 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_48 << " TXT_LIGHT_AQUA_48 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_49 << " TXT_LIGHT_AQUA_49 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_72 << " TXT_LIGHT_AQUA_72 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_73 << " TXT_LIGHT_AQUA_73 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_79 << " TXT_LIGHT_AQUA_79 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_84 << " TXT_LIGHT_AQUA_84 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_85 << " TXT_LIGHT_AQUA_85 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_114 << " TXT_LIGHT_AQUA_114 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_120 << " TXT_LIGHT_AQUA_120 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_121 << " TXT_LIGHT_AQUA_121 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_122 << " TXT_LIGHT_AQUA_122 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_AQUA_123 << " TXT_LIGHT_AQUA_123 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_purple()
{
	//Purple
	cout << TXT_DARK_PURPLE_53 << " TXT_DARK_PURPLE_53 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_54 << " TXT_DARK_PURPLE_54 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_55 << " TXT_DARK_PURPLE_55 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_89 << " TXT_DARK_PURPLE_89 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_90 << " TXT_DARK_PURPLE_90 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_96 << " TXT_DARK_PURPLE_96 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_125 << " TXT_DARK_PURPLE_125 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_126 << " TXT_DARK_PURPLE_126 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PURPLE_127 << " TXT_DARK_PURPLE_127 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_PURPLE_5 << " TXT_PURPLE_5 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_13 << " TXT_PURPLE_13 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_91 << " TXT_PURPLE_91 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_92 << " TXT_PURPLE_92 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_93 << " TXT_PURPLE_93 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_97 << " TXT_PURPLE_97 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_98 << " TXT_PURPLE_98 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_99 << " TXT_PURPLE_99 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_128 << " TXT_PURPLE_128 " << END_COLOR << " " << endl;
	cout << TXT_PURPLE_129 << " TXT_PURPLE_129 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_PURPLE_104 << " TXT_LIGHT_PURPLE_104 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_105 << " TXT_LIGHT_PURPLE_105 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_133 << " TXT_LIGHT_PURPLE_133 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_134 << " TXT_LIGHT_PURPLE_134 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_135 << " TXT_LIGHT_PURPLE_135 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_140 << " TXT_LIGHT_PURPLE_140 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_141 << " TXT_LIGHT_PURPLE_141 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_164 << " TXT_LIGHT_PURPLE_164 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_165 << " TXT_LIGHT_PURPLE_165 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_170 << " TXT_LIGHT_PURPLE_170 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_171 << " TXT_LIGHT_PURPLE_171 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_176 << " TXT_LIGHT_PURPLE_176 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PURPLE_177 << " TXT_LIGHT_PURPLE_177 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_pink()
{
	//Pink
	cout << TXT_DARK_PINK_131 << " TXT_DARK_PINK_131 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PINK_132 << " TXT_DARK_PINK_132 " << END_COLOR << " " << endl;
	cout << TXT_DARK_PINK_174 << " TXT_DARK_PINK_174 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_PINK_161 << " TXT_PINK_161 " << END_COLOR << " " << endl;
	cout << TXT_PINK_162 << " TXT_PINK_162 " << END_COLOR << " " << endl;
	cout << TXT_PINK_163 << " TXT_PINK_163 " << END_COLOR << " " << endl;
	cout << TXT_PINK_197 << " TXT_PINK_197 " << END_COLOR << " " << endl;
	cout << TXT_PINK_198 << " TXT_PINK_198 " << END_COLOR << " " << endl;
	cout << TXT_PINK_199 << " TXT_PINK_199 " << END_COLOR << " " << endl;
	cout << TXT_PINK_200 << " TXT_PINK_200 " << END_COLOR << " " << endl;
	cout << TXT_PINK_201 << " TXT_PINK_201 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_PINK_167 << " TXT_LIGHT_PINK_167 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_168 << " TXT_LIGHT_PINK_168 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_169 << " TXT_LIGHT_PINK_169 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_203 << " TXT_LIGHT_PINK_203 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_204 << " TXT_LIGHT_PINK_204 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_205 << " TXT_LIGHT_PINK_205 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_206 << " TXT_LIGHT_PINK_206 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_207 << " TXT_LIGHT_PINK_207 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_209 << " TXT_LIGHT_PINK_209 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_210 << " TXT_LIGHT_PINK_210 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_211 << " TXT_LIGHT_PINK_211 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_212 << " TXT_LIGHT_PINK_212 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_213 << " TXT_LIGHT_PINK_213 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_218 << " TXT_LIGHT_PINK_218 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_PINK_219 << " TXT_LIGHT_PINK_219 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}

void print_txt_gray()
{
	//Gray
	cout << TXT_BLACK_16 << " TXT_BLACK_16 " << END_COLOR << " " << endl;
	cout << TXT_BLACK_232 << " TXT_BLACK_232 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_DARK_GRAY_59 << " TXT_DARK_GRAY_59 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_233 << " TXT_DARK_GRAY_233 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_234 << " TXT_DARK_GRAY_234 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_235 << " TXT_DARK_GRAY_235 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_236 << " TXT_DARK_GRAY_236 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_237 << " TXT_DARK_GRAY_237 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_238 << " TXT_DARK_GRAY_238 " << END_COLOR << " " << endl;
	cout << TXT_DARK_GRAY_239 << " TXT_DARK_GRAY_239 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_GRAY_8 << " TXT_GRAY_8 " << END_COLOR << " " << endl;
	cout << TXT_GRAY_240 << " TXT_GRAY_240 " << END_COLOR << " " << endl;
	cout << TXT_GRAY_241 << " TXT_GRAY_241 " << END_COLOR << " " << endl;
	cout << TXT_GRAY_242 << " TXT_GRAY_242 " << END_COLOR << " " << endl;
	cout << TXT_GRAY_243 << " TXT_GRAY_243 " << END_COLOR << " " << endl;
	cout << TXT_GRAY_244 << " TXT_GRAY_244 " << END_COLOR << " " << endl;
	cout << TXT_GRAY_245 << " TXT_GRAY_245 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_LIGHT_GRAY_246 << " TXT_LIGHT_GRAY_246 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_247 << " TXT_LIGHT_GRAY_247 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_248 << " TXT_LIGHT_GRAY_248 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_249 << " TXT_LIGHT_GRAY_249 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_250 << " TXT_LIGHT_GRAY_250 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_251 << " TXT_LIGHT_GRAY_251 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_252 << " TXT_LIGHT_GRAY_252 " << END_COLOR << " " << endl;
	cout << TXT_LIGHT_GRAY_263 << " TXT_LIGHT_GRAY_263 " << END_COLOR << " " << endl;
	cout << endl;
	cout << TXT_WHITE_7 << " TXT_WHITE_7 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_15 << " TXT_WHITE_15 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_194 << " TXT_WHITE_194 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_195 << " TXT_WHITE_195 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_230 << " TXT_WHITE_230 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_231 << " TXT_WHITE_231 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_254 << " TXT_WHITE_254 " << END_COLOR << " " << endl;
	cout << TXT_WHITE_255 << " TXT_WHITE_255 " << END_COLOR << " " << endl;
	cout << END_COLOR;
}