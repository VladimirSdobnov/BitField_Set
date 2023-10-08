#pragma once
#include "../Set/set.h"

namespace ApplicationSet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::ListBox^ SetAList;




	private: System::Windows::Forms::RichTextBox^ SetAText;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ LoadfiormFileAButton;
	private: System::Windows::Forms::Button^ SaveToFileAButton;



	private: System::Windows::Forms::Button^ CleanAButton;
	private: System::Windows::Forms::Button^ AddSetAButton;
	private: System::Windows::Forms::Button^ DelElementsAButton;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ LoadfiormFileBButton;
	private: System::Windows::Forms::Button^ SaveToFileBButton;



	private: System::Windows::Forms::Button^ CleanBButton;
	private: System::Windows::Forms::Button^ AddSetBButton;
	private: System::Windows::Forms::Button^ DelElementsBButton;
	private: System::Windows::Forms::RichTextBox^ SetBText;





	private: System::Windows::Forms::ListBox^ SetBList;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
















	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->LoadfiormFileAButton = (gcnew System::Windows::Forms::Button());
			this->SaveToFileAButton = (gcnew System::Windows::Forms::Button());
			this->CleanAButton = (gcnew System::Windows::Forms::Button());
			this->AddSetAButton = (gcnew System::Windows::Forms::Button());
			this->DelElementsAButton = (gcnew System::Windows::Forms::Button());
			this->SetAText = (gcnew System::Windows::Forms::RichTextBox());
			this->SetAList = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->LoadfiormFileBButton = (gcnew System::Windows::Forms::Button());
			this->SaveToFileBButton = (gcnew System::Windows::Forms::Button());
			this->CleanBButton = (gcnew System::Windows::Forms::Button());
			this->AddSetBButton = (gcnew System::Windows::Forms::Button());
			this->DelElementsBButton = (gcnew System::Windows::Forms::Button());
			this->SetBText = (gcnew System::Windows::Forms::RichTextBox());
			this->SetBList = (gcnew System::Windows::Forms::ListBox());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel2->AutoSize = true;
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->SetAText);
			this->panel2->Controls->Add(this->SetAList);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->MaximumSize = System::Drawing::Size(1000, 1000);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(269, 527);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->LoadfiormFileAButton);
			this->panel3->Controls->Add(this->SaveToFileAButton);
			this->panel3->Controls->Add(this->CleanAButton);
			this->panel3->Controls->Add(this->AddSetAButton);
			this->panel3->Controls->Add(this->DelElementsAButton);
			this->panel3->Location = System::Drawing::Point(4, 182);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(262, 93);
			this->panel3->TabIndex = 9;
			// 
			// LoadfiormFileAButton
			// 
			this->LoadfiormFileAButton->Location = System::Drawing::Point(0, 3);
			this->LoadfiormFileAButton->Name = L"LoadfiormFileAButton";
			this->LoadfiormFileAButton->Size = System::Drawing::Size(114, 23);
			this->LoadfiormFileAButton->TabIndex = 0;
			this->LoadfiormFileAButton->Text = L"LoadFile";
			this->LoadfiormFileAButton->UseVisualStyleBackColor = true;
			// 
			// SaveToFileAButton
			// 
			this->SaveToFileAButton->Location = System::Drawing::Point(120, 3);
			this->SaveToFileAButton->Name = L"SaveToFileAButton";
			this->SaveToFileAButton->Size = System::Drawing::Size(125, 23);
			this->SaveToFileAButton->TabIndex = 4;
			this->SaveToFileAButton->Text = L"SaveFile";
			this->SaveToFileAButton->UseVisualStyleBackColor = true;
			// 
			// CleanAButton
			// 
			this->CleanAButton->Location = System::Drawing::Point(56, 61);
			this->CleanAButton->Name = L"CleanAButton";
			this->CleanAButton->Size = System::Drawing::Size(121, 23);
			this->CleanAButton->TabIndex = 7;
			this->CleanAButton->Text = L"Clean";
			this->CleanAButton->UseVisualStyleBackColor = true;
			// 
			// AddSetAButton
			// 
			this->AddSetAButton->Location = System::Drawing::Point(0, 32);
			this->AddSetAButton->Name = L"AddSetAButton";
			this->AddSetAButton->Size = System::Drawing::Size(114, 23);
			this->AddSetAButton->TabIndex = 5;
			this->AddSetAButton->Text = L"AddSet";
			this->AddSetAButton->UseVisualStyleBackColor = true;
			// 
			// DelElementsAButton
			// 
			this->DelElementsAButton->Location = System::Drawing::Point(120, 32);
			this->DelElementsAButton->Name = L"DelElementsAButton";
			this->DelElementsAButton->Size = System::Drawing::Size(125, 23);
			this->DelElementsAButton->TabIndex = 6;
			this->DelElementsAButton->Text = L"DelButton";
			this->DelElementsAButton->UseVisualStyleBackColor = true;
			// 
			// SetAText
			// 
			this->SetAText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SetAText->Location = System::Drawing::Point(4, 279);
			this->SetAText->Name = L"SetAText";
			this->SetAText->Size = System::Drawing::Size(259, 236);
			this->SetAText->TabIndex = 8;
			this->SetAText->Text = L"";
			// 
			// SetAList
			// 
			this->SetAList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SetAList->FormattingEnabled = true;
			this->SetAList->Location = System::Drawing::Point(4, 3);
			this->SetAList->Name = L"SetAList";
			this->SetAList->Size = System::Drawing::Size(259, 173);
			this->SetAList->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 10);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(812, 524);
			this->panel1->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel6->AutoSize = true;
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->richTextBox1);
			this->panel6->Controls->Add(this->listBox1);
			this->panel6->Location = System::Drawing::Point(547, 2);
			this->panel6->MaximumSize = System::Drawing::Size(1000, 1000);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(255, 527);
			this->panel6->TabIndex = 10;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->Controls->Add(this->button1);
			this->panel7->Controls->Add(this->button2);
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->button4);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Location = System::Drawing::Point(4, 182);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(248, 93);
			this->panel7->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LoadFile";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"SaveFile";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(56, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Clean";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(0, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"AddSet";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(120, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"DelButton";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(4, 279);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(245, 236);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(7, 6);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(245, 173);
			this->listBox1->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel4->AutoSize = true;
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->SetBText);
			this->panel4->Controls->Add(this->SetBList);
			this->panel4->Location = System::Drawing::Point(278, 3);
			this->panel4->MaximumSize = System::Drawing::Size(1000, 1000);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(263, 527);
			this->panel4->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->Controls->Add(this->LoadfiormFileBButton);
			this->panel5->Controls->Add(this->SaveToFileBButton);
			this->panel5->Controls->Add(this->CleanBButton);
			this->panel5->Controls->Add(this->AddSetBButton);
			this->panel5->Controls->Add(this->DelElementsBButton);
			this->panel5->Location = System::Drawing::Point(4, 182);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(256, 93);
			this->panel5->TabIndex = 9;
			// 
			// LoadfiormFileBButton
			// 
			this->LoadfiormFileBButton->Location = System::Drawing::Point(0, 3);
			this->LoadfiormFileBButton->Name = L"LoadfiormFileBButton";
			this->LoadfiormFileBButton->Size = System::Drawing::Size(114, 23);
			this->LoadfiormFileBButton->TabIndex = 0;
			this->LoadfiormFileBButton->Text = L"LoadFile";
			this->LoadfiormFileBButton->UseVisualStyleBackColor = true;
			// 
			// SaveToFileBButton
			// 
			this->SaveToFileBButton->Location = System::Drawing::Point(120, 3);
			this->SaveToFileBButton->Name = L"SaveToFileBButton";
			this->SaveToFileBButton->Size = System::Drawing::Size(125, 23);
			this->SaveToFileBButton->TabIndex = 4;
			this->SaveToFileBButton->Text = L"SaveFile";
			this->SaveToFileBButton->UseVisualStyleBackColor = true;
			// 
			// CleanBButton
			// 
			this->CleanBButton->Location = System::Drawing::Point(56, 61);
			this->CleanBButton->Name = L"CleanBButton";
			this->CleanBButton->Size = System::Drawing::Size(121, 23);
			this->CleanBButton->TabIndex = 7;
			this->CleanBButton->Text = L"Clean";
			this->CleanBButton->UseVisualStyleBackColor = true;
			// 
			// AddSetBButton
			// 
			this->AddSetBButton->Location = System::Drawing::Point(0, 32);
			this->AddSetBButton->Name = L"AddSetBButton";
			this->AddSetBButton->Size = System::Drawing::Size(114, 23);
			this->AddSetBButton->TabIndex = 5;
			this->AddSetBButton->Text = L"AddSet";
			this->AddSetBButton->UseVisualStyleBackColor = true;
			// 
			// DelElementsBButton
			// 
			this->DelElementsBButton->Location = System::Drawing::Point(120, 32);
			this->DelElementsBButton->Name = L"DelElementsBButton";
			this->DelElementsBButton->Size = System::Drawing::Size(125, 23);
			this->DelElementsBButton->TabIndex = 6;
			this->DelElementsBButton->Text = L"DelButton";
			this->DelElementsBButton->UseVisualStyleBackColor = true;
			// 
			// SetBText
			// 
			this->SetBText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SetBText->Location = System::Drawing::Point(4, 279);
			this->SetBText->Name = L"SetBText";
			this->SetBText->Size = System::Drawing::Size(253, 236);
			this->SetBText->TabIndex = 8;
			this->SetBText->Text = L"";
			// 
			// SetBList
			// 
			this->SetBList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SetBList->FormattingEnabled = true;
			this->SetBList->Location = System::Drawing::Point(7, 6);
			this->SetBList->Name = L"SetBList";
			this->SetBList->Size = System::Drawing::Size(253, 173);
			this->SetBList->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 540);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Location = System::Drawing::Point(720, 579);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
//System::Drawing::Size box_size_list(((panel2->Size.Width - 10)), ((panel2->Size.Height / 3)));
//SetAList->Size = box_size_list;