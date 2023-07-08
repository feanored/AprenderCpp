#pragma once
#define _CRT_SECURE_NO_DEPRECATE
#include "stdafx.h"

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	void aviso(const char* texto);
	void erro(const char* texto);

	/// <summary>
	/// Summary for FormCalc
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class FormCalc : public System::Windows::Forms::Form
	{
	public:
		FormCalc(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCalc()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  display;
	private: System::Windows::Forms::Button^  btn_res;
	private: System::Windows::Forms::Button^  btn_pm;
	private: System::Windows::Forms::Button^  btn_dot;
	private: System::Windows::Forms::Button^  btn_0;
	private: System::Windows::Forms::Button^  btn_1;
	private: System::Windows::Forms::Button^  btn_2;
	private: System::Windows::Forms::Button^  btn_3;
	private: System::Windows::Forms::Button^  btn_4;
	private: System::Windows::Forms::Button^  btn_5;
	private: System::Windows::Forms::Button^  btn_6;
	private: System::Windows::Forms::Button^  btn_7;
	private: System::Windows::Forms::Button^  btn_8;
	private: System::Windows::Forms::Button^  btn_9;
	private: System::Windows::Forms::Button^  btn_plus;
	private: System::Windows::Forms::Button^  btn_min;
	private: System::Windows::Forms::Button^  btn_mul;
	private: System::Windows::Forms::Button^  btn_div;
	private: System::Windows::Forms::Button^  btn_perc;
	private: System::Windows::Forms::Button^  btn_sqrt;
	private: System::Windows::Forms::Button^  btn_del;
	private: System::Windows::Forms::Button^  btn_back;
	private: System::Windows::Forms::Button^  btn_pi;
	private: System::Windows::Forms::Button^  btn_cos;
	private: System::Windows::Forms::Button^  btn_sin;
	private: System::Windows::Forms::Button^  btn_tan;
	private: System::Windows::Forms::Button^  btn_cleare;
	private: System::Windows::Forms::Button^  btn_clear;
	private: System::Windows::Forms::Button^  btn_asin;
	private: System::Windows::Forms::Button^  btn_atan;
	private: System::Windows::Forms::Button^  btn_acos;
	private: System::Windows::Forms::Button^  btn_exp;
	private: System::Windows::Forms::Button^  btn_log;
	private: System::Windows::Forms::Button^  btn_sqr;
	private: System::Windows::Forms::Button^  btn_pot;
	private: System::Windows::Forms::RadioButton^  rb_rad;
	private: System::Windows::Forms::RadioButton^  rb_deg;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->display = (gcnew System::Windows::Forms::Label());
			this->btn_res = (gcnew System::Windows::Forms::Button());
			this->btn_pm = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_perc = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_pi = (gcnew System::Windows::Forms::Button());
			this->btn_cos = (gcnew System::Windows::Forms::Button());
			this->btn_sin = (gcnew System::Windows::Forms::Button());
			this->btn_tan = (gcnew System::Windows::Forms::Button());
			this->btn_cleare = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_asin = (gcnew System::Windows::Forms::Button());
			this->btn_atan = (gcnew System::Windows::Forms::Button());
			this->btn_acos = (gcnew System::Windows::Forms::Button());
			this->btn_exp = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->btn_sqr = (gcnew System::Windows::Forms::Button());
			this->btn_pot = (gcnew System::Windows::Forms::Button());
			this->rb_rad = (gcnew System::Windows::Forms::RadioButton());
			this->rb_deg = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::SystemColors::Window;
			this->display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->display->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->display->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(13, 9);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(335, 44);
			this->display->TabIndex = 0;
			this->display->Text = L"0";
			this->display->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_res
			// 
			this->btn_res->BackColor = System::Drawing::Color::Azure;
			this->btn_res->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_res->Location = System::Drawing::Point(298, 325);
			this->btn_res->Name = L"btn_res";
			this->btn_res->Size = System::Drawing::Size(50, 50);
			this->btn_res->TabIndex = 1;
			this->btn_res->Text = L"=";
			this->btn_res->UseVisualStyleBackColor = false;
			this->btn_res->Click += gcnew System::EventHandler(this, &FormCalc::btn_res_Click);
			// 
			// btn_pm
			// 
			this->btn_pm->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_pm->Font = (gcnew System::Drawing::Font(L"Symbol", 9.18868F, System::Drawing::FontStyle::Bold));
			this->btn_pm->Location = System::Drawing::Point(130, 325);
			this->btn_pm->Name = L"btn_pm";
			this->btn_pm->Size = System::Drawing::Size(50, 50);
			this->btn_pm->TabIndex = 2;
			this->btn_pm->Text = L"+/-";
			this->btn_pm->UseVisualStyleBackColor = false;
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::Color::Azure;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_0->Location = System::Drawing::Point(186, 325);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(50, 50);
			this->btn_0->TabIndex = 3;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::Azure;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_dot->Location = System::Drawing::Point(242, 325);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(50, 50);
			this->btn_dot->TabIndex = 4;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::Azure;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_div->Location = System::Drawing::Point(298, 273);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(50, 50);
			this->btn_div->TabIndex = 5;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::Azure;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_1->Location = System::Drawing::Point(130, 273);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(50, 50);
			this->btn_1->TabIndex = 6;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &FormCalc::btn_1_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::Color::Azure;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_2->Location = System::Drawing::Point(186, 273);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(50, 50);
			this->btn_2->TabIndex = 7;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::Color::Azure;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_3->Location = System::Drawing::Point(242, 273);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(50, 50);
			this->btn_3->TabIndex = 8;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			// 
			// btn_mul
			// 
			this->btn_mul->BackColor = System::Drawing::Color::Azure;
			this->btn_mul->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_mul->Location = System::Drawing::Point(298, 221);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(50, 50);
			this->btn_mul->TabIndex = 9;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = false;
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::Color::Azure;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_4->Location = System::Drawing::Point(130, 221);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(50, 50);
			this->btn_4->TabIndex = 10;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::Color::Azure;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_5->Location = System::Drawing::Point(186, 221);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(50, 50);
			this->btn_5->TabIndex = 11;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::Color::Azure;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_6->Location = System::Drawing::Point(242, 221);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(50, 50);
			this->btn_6->TabIndex = 12;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::Azure;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_min->Location = System::Drawing::Point(298, 169);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(50, 50);
			this->btn_min->TabIndex = 13;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::Color::Azure;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_7->Location = System::Drawing::Point(130, 169);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(50, 50);
			this->btn_7->TabIndex = 14;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::Color::Azure;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_8->Location = System::Drawing::Point(186, 169);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(50, 50);
			this->btn_8->TabIndex = 15;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::Color::Azure;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_9->Location = System::Drawing::Point(242, 169);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(50, 50);
			this->btn_9->TabIndex = 16;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::Azure;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_plus->Location = System::Drawing::Point(298, 117);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(50, 50);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			// 
			// btn_perc
			// 
			this->btn_perc->BackColor = System::Drawing::Color::Azure;
			this->btn_perc->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_perc->Location = System::Drawing::Point(242, 117);
			this->btn_perc->Name = L"btn_perc";
			this->btn_perc->Size = System::Drawing::Size(50, 50);
			this->btn_perc->TabIndex = 18;
			this->btn_perc->Text = L"%";
			this->btn_perc->UseVisualStyleBackColor = false;
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(2)));
			this->btn_sqrt->Location = System::Drawing::Point(186, 117);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(50, 50);
			this->btn_sqrt->TabIndex = 19;
			this->btn_sqrt->Text = L"Ö";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::Azure;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_del->Location = System::Drawing::Point(242, 65);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(50, 50);
			this->btn_del->TabIndex = 20;
			this->btn_del->Text = L"®";
			this->btn_del->UseVisualStyleBackColor = false;
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::Azure;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_back->Location = System::Drawing::Point(298, 65);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(50, 50);
			this->btn_back->TabIndex = 21;
			this->btn_back->Text = L"¬";
			this->btn_back->UseVisualStyleBackColor = false;
			// 
			// btn_pi
			// 
			this->btn_pi->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_pi->Font = (gcnew System::Drawing::Font(L"Symbol", 14.18868F, System::Drawing::FontStyle::Bold));
			this->btn_pi->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_pi->Location = System::Drawing::Point(130, 117);
			this->btn_pi->Name = L"btn_pi";
			this->btn_pi->Size = System::Drawing::Size(50, 50);
			this->btn_pi->TabIndex = 22;
			this->btn_pi->Text = L"p";
			this->btn_pi->UseVisualStyleBackColor = false;
			this->btn_pi->Click += gcnew System::EventHandler(this, &FormCalc::btn_pi_Click);
			// 
			// btn_cos
			// 
			this->btn_cos->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_cos->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_cos->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_cos->Location = System::Drawing::Point(74, 221);
			this->btn_cos->Name = L"btn_cos";
			this->btn_cos->Size = System::Drawing::Size(50, 50);
			this->btn_cos->TabIndex = 23;
			this->btn_cos->Text = L"cos";
			this->btn_cos->UseVisualStyleBackColor = false;
			// 
			// btn_sin
			// 
			this->btn_sin->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_sin->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_sin->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_sin->Location = System::Drawing::Point(74, 169);
			this->btn_sin->Name = L"btn_sin";
			this->btn_sin->Size = System::Drawing::Size(50, 50);
			this->btn_sin->TabIndex = 24;
			this->btn_sin->Text = L"sin";
			this->btn_sin->UseVisualStyleBackColor = false;
			// 
			// btn_tan
			// 
			this->btn_tan->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_tan->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_tan->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_tan->Location = System::Drawing::Point(74, 273);
			this->btn_tan->Name = L"btn_tan";
			this->btn_tan->Size = System::Drawing::Size(50, 50);
			this->btn_tan->TabIndex = 25;
			this->btn_tan->Text = L"tan";
			this->btn_tan->UseVisualStyleBackColor = false;
			// 
			// btn_cleare
			// 
			this->btn_cleare->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_cleare->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_cleare->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_cleare->Location = System::Drawing::Point(186, 65);
			this->btn_cleare->Name = L"btn_cleare";
			this->btn_cleare->Size = System::Drawing::Size(50, 50);
			this->btn_cleare->TabIndex = 26;
			this->btn_cleare->Text = L"CE";
			this->btn_cleare->UseVisualStyleBackColor = false;
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_clear->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_clear->Location = System::Drawing::Point(130, 65);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(50, 50);
			this->btn_clear->TabIndex = 27;
			this->btn_clear->Text = L"C";
			this->btn_clear->UseVisualStyleBackColor = false;
			// 
			// btn_asin
			// 
			this->btn_asin->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_asin->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.18868F, System::Drawing::FontStyle::Bold));
			this->btn_asin->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_asin->Location = System::Drawing::Point(13, 169);
			this->btn_asin->Name = L"btn_asin";
			this->btn_asin->Size = System::Drawing::Size(55, 50);
			this->btn_asin->TabIndex = 28;
			this->btn_asin->Text = L"asin";
			this->btn_asin->UseVisualStyleBackColor = false;
			this->btn_asin->Click += gcnew System::EventHandler(this, &FormCalc::button8_Click);
			// 
			// btn_atan
			// 
			this->btn_atan->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_atan->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.18868F, System::Drawing::FontStyle::Bold));
			this->btn_atan->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_atan->Location = System::Drawing::Point(13, 273);
			this->btn_atan->Name = L"btn_atan";
			this->btn_atan->Size = System::Drawing::Size(55, 50);
			this->btn_atan->TabIndex = 29;
			this->btn_atan->Text = L"atan";
			this->btn_atan->UseVisualStyleBackColor = false;
			// 
			// btn_acos
			// 
			this->btn_acos->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_acos->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.18868F, System::Drawing::FontStyle::Bold));
			this->btn_acos->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_acos->Location = System::Drawing::Point(13, 221);
			this->btn_acos->Name = L"btn_acos";
			this->btn_acos->Size = System::Drawing::Size(55, 50);
			this->btn_acos->TabIndex = 30;
			this->btn_acos->Text = L"acos";
			this->btn_acos->UseVisualStyleBackColor = false;
			// 
			// btn_exp
			// 
			this->btn_exp->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_exp->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_exp->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_exp->Location = System::Drawing::Point(74, 117);
			this->btn_exp->Name = L"btn_exp";
			this->btn_exp->Size = System::Drawing::Size(50, 50);
			this->btn_exp->TabIndex = 31;
			this->btn_exp->Text = L"e";
			this->btn_exp->UseVisualStyleBackColor = false;
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_log->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.18868F, System::Drawing::FontStyle::Bold));
			this->btn_log->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_log->Location = System::Drawing::Point(13, 117);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(55, 50);
			this->btn_log->TabIndex = 32;
			this->btn_log->Text = L"log";
			this->btn_log->UseVisualStyleBackColor = false;
			// 
			// btn_sqr
			// 
			this->btn_sqr->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_sqr->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_sqr->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_sqr->Location = System::Drawing::Point(74, 325);
			this->btn_sqr->Name = L"btn_sqr";
			this->btn_sqr->Size = System::Drawing::Size(50, 50);
			this->btn_sqr->TabIndex = 33;
			this->btn_sqr->Text = L"x²";
			this->btn_sqr->UseVisualStyleBackColor = false;
			// 
			// btn_pot
			// 
			this->btn_pot->BackColor = System::Drawing::Color::AliceBlue;
			this->btn_pot->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.18868F, System::Drawing::FontStyle::Bold));
			this->btn_pot->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_pot->Location = System::Drawing::Point(13, 325);
			this->btn_pot->Name = L"btn_pot";
			this->btn_pot->Size = System::Drawing::Size(55, 50);
			this->btn_pot->TabIndex = 34;
			this->btn_pot->Text = L"x^y";
			this->btn_pot->UseVisualStyleBackColor = false;
			// 
			// rb_rad
			// 
			this->rb_rad->AutoSize = true;
			this->rb_rad->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.4717F));
			this->rb_rad->Location = System::Drawing::Point(13, 65);
			this->rb_rad->Name = L"rb_rad";
			this->rb_rad->Size = System::Drawing::Size(89, 18);
			this->rb_rad->TabIndex = 35;
			this->rb_rad->TabStop = true;
			this->rb_rad->Text = L"radianos";
			this->rb_rad->UseVisualStyleBackColor = true;
			// 
			// rb_deg
			// 
			this->rb_deg->AutoSize = true;
			this->rb_deg->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.4717F));
			this->rb_deg->Location = System::Drawing::Point(13, 90);
			this->rb_deg->Name = L"rb_deg";
			this->rb_deg->Size = System::Drawing::Size(65, 18);
			this->rb_deg->TabIndex = 36;
			this->rb_deg->TabStop = true;
			this->rb_deg->Text = L"graus";
			this->rb_deg->UseVisualStyleBackColor = true;
			// 
			// FormCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 389);
			this->Controls->Add(this->rb_deg);
			this->Controls->Add(this->rb_rad);
			this->Controls->Add(this->btn_pot);
			this->Controls->Add(this->btn_sqr);
			this->Controls->Add(this->btn_log);
			this->Controls->Add(this->btn_exp);
			this->Controls->Add(this->btn_acos);
			this->Controls->Add(this->btn_atan);
			this->Controls->Add(this->btn_asin);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_cleare);
			this->Controls->Add(this->btn_tan);
			this->Controls->Add(this->btn_sin);
			this->Controls->Add(this->btn_cos);
			this->Controls->Add(this->btn_pi);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->btn_perc);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_pm);
			this->Controls->Add(this->btn_res);
			this->Controls->Add(this->display);
			this->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"FormCalc";
			this->Text = L"Calculadora";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Load += gcnew System::EventHandler(this, &FormCalc::FormCalc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		/*!
		\brief Métodos a serem implementados por fora aqui
		*/
		void setDisplay(const char* str);

	private: 
		System::Void FormCalc_Load(System::Object^  sender, System::EventArgs^  e) {
			this->rb_rad->Select();
		}
		System::Void btn_1_Click(System::Object^  sender, System::EventArgs^  e) {
			setDisplay("1");
		}
		System::Void btn_res_Click(System::Object^  sender, System::EventArgs^  e) {
			setDisplay("Binha");
		}
		System::Void btn_pi_Click(System::Object^  sender, System::EventArgs^  e) {
			char buffer[20];
			std::sprintf(buffer, "%.16lf", M_PI);
			setDisplay(buffer);
		}
		System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		}
	};
}
