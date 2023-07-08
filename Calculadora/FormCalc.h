#pragma once
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
			this->SuspendLayout();
			// 
			// display
			// 
			this->display->BackColor = System::Drawing::SystemColors::Window;
			this->display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->display->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->display->Location = System::Drawing::Point(17, 11);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(380, 44);
			this->display->TabIndex = 0;
			this->display->Text = L"0";
			this->display->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_res
			// 
			this->btn_res->BackColor = System::Drawing::Color::Azure;
			this->btn_res->Font = (gcnew System::Drawing::Font(L"Symbol", 10.18868F, System::Drawing::FontStyle::Bold));
			this->btn_res->Location = System::Drawing::Point(347, 325);
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
			this->btn_pm->Location = System::Drawing::Point(179, 325);
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
			this->btn_0->Location = System::Drawing::Point(235, 325);
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
			this->btn_dot->Location = System::Drawing::Point(291, 325);
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
			this->btn_div->Location = System::Drawing::Point(347, 273);
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
			this->btn_1->Location = System::Drawing::Point(179, 273);
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
			this->btn_2->Location = System::Drawing::Point(235, 273);
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
			this->btn_3->Location = System::Drawing::Point(291, 273);
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
			this->btn_mul->Location = System::Drawing::Point(347, 221);
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
			this->btn_4->Location = System::Drawing::Point(179, 221);
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
			this->btn_5->Location = System::Drawing::Point(235, 221);
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
			this->btn_6->Location = System::Drawing::Point(291, 221);
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
			this->btn_min->Location = System::Drawing::Point(347, 169);
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
			this->btn_7->Location = System::Drawing::Point(179, 169);
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
			this->btn_8->Location = System::Drawing::Point(235, 169);
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
			this->btn_9->Location = System::Drawing::Point(291, 169);
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
			this->btn_plus->Location = System::Drawing::Point(347, 117);
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
			this->btn_perc->Location = System::Drawing::Point(291, 117);
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
			this->btn_sqrt->Location = System::Drawing::Point(235, 117);
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
			this->btn_del->Location = System::Drawing::Point(291, 65);
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
			this->btn_back->Location = System::Drawing::Point(347, 65);
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
			this->btn_pi->Location = System::Drawing::Point(179, 117);
			this->btn_pi->Name = L"btn_pi";
			this->btn_pi->Size = System::Drawing::Size(50, 50);
			this->btn_pi->TabIndex = 22;
			this->btn_pi->Text = L"p";
			this->btn_pi->UseVisualStyleBackColor = false;
			this->btn_pi->Click += gcnew System::EventHandler(this, &FormCalc::btn_pi_Click);
			// 
			// FormCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 389);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"FormCalc";
			this->Opacity = 0.98;
			this->Text = L"Calculadora";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Load += gcnew System::EventHandler(this, &FormCalc::FormCalc_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		/*!
		\brief Métodos a serem implementados por fora aqui
		*/
		void setDisplay(const char* str);

	private: 
		System::Void FormCalc_Load(System::Object^  sender, System::EventArgs^  e) {
			aviso("Hello, Binha!");
		}
		System::Void btn_1_Click(System::Object^  sender, System::EventArgs^  e) {
			display->Text = "1";
		}
		System::Void btn_res_Click(System::Object^  sender, System::EventArgs^  e) {
			setDisplay("Binha");
		}
		System::Void btn_pi_Click(System::Object^  sender, System::EventArgs^  e) {
			erro("A binha não permite o uso do número Pi ainda!");
		}
	};
}

