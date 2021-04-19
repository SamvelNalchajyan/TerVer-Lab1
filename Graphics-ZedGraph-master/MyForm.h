#pragma once
#include <math.h>
//de "../ЧМ з. 11/ЧМ з. 11/RK4.h"
#include "../TerVer Lab 1 test/TerVer Lab 1 test/Algorithm.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^ button_Draw;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u_i;
	private: System::Windows::Forms::TextBox^ textBox_N;
	private: System::Windows::Forms::TextBox^ textBox_M;
	private: System::Windows::Forms::TextBox^ textBox_p;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;






























































































































	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button_Draw = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_N = (gcnew System::Windows::Forms::TextBox());
			this->textBox_M = (gcnew System::Windows::Forms::TextBox());
			this->textBox_p = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button_Draw
			// 
			this->button_Draw->Location = System::Drawing::Point(38, 554);
			this->button_Draw->Name = L"button_Draw";
			this->button_Draw->Size = System::Drawing::Size(142, 29);
			this->button_Draw->TabIndex = 1;
			this->button_Draw->Text = L"Вычислить";
			this->button_Draw->UseVisualStyleBackColor = true;
			this->button_Draw->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->i, this->x_i,
					this->u_i
			});
			this->dataGridView1->Location = System::Drawing::Point(549, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(417, 327);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"y_i";
			this->i->Name = L"i";
			this->i->Width = 120;
			// 
			// x_i
			// 
			this->x_i->HeaderText = L"n_i";
			this->x_i->Name = L"x_i";
			this->x_i->Width = 120;
			// 
			// u_i
			// 
			this->u_i->HeaderText = L"n_i / n";
			this->u_i->Name = L"u_i";
			this->u_i->Width = 120;
			// 
			// textBox_N
			// 
			this->textBox_N->Location = System::Drawing::Point(38, 372);
			this->textBox_N->Name = L"textBox_N";
			this->textBox_N->Size = System::Drawing::Size(100, 20);
			this->textBox_N->TabIndex = 3;
			this->textBox_N->Text = L"10";
			// 
			// textBox_M
			// 
			this->textBox_M->Location = System::Drawing::Point(38, 398);
			this->textBox_M->Name = L"textBox_M";
			this->textBox_M->Size = System::Drawing::Size(100, 20);
			this->textBox_M->TabIndex = 4;
			this->textBox_M->Text = L"2";
			// 
			// textBox_p
			// 
			this->textBox_p->Location = System::Drawing::Point(38, 424);
			this->textBox_p->Name = L"textBox_p";
			this->textBox_p->Size = System::Drawing::Size(100, 20);
			this->textBox_p->TabIndex = 5;
			this->textBox_p->Text = L"0,5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(144, 375);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"N";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 401);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"M";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(144, 427);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"p";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 498);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 498);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(250, 498);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(356, 498);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(462, 498);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(568, 498);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(674, 498);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(780, 498);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 482);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Eksi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(185, 482);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"x_";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(274, 482);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"|Eksi - x_|";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(391, 482);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Dksi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(500, 482);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"S2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(593, 482);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"|Dksi - S2|";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(708, 482);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Me_";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(821, 482);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"R_";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 618);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_p);
			this->Controls->Add(this->textBox_M);
			this->Controls->Add(this->textBox_N);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button_Draw);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Самвел Налчаджян Лаб 1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		
		panel->CurveList->Clear();
		//panel2->CurveList->Clear();
		//panel3->CurveList->Clear();
		panel->XAxis->Title->Text = "Ось x";
		panel->YAxis->Title->Text = "Ось y";
		panel->Title->Text = "График";
		
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		//PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		//PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		/*
		double x_0 = Convert::ToDouble(textBox_x_0->Text);
		double xmax = Convert::ToDouble(textBox_x_max->Text);

		double h = Convert::ToDouble(textBox_h->Text);


		double xmin_limit = x_0 - 0.1;
		double xmax_limit = xmax + 0.1;
		*/
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		//int n = Convert::ToInt32(textBox_N_max->Text);
		//double u_0 = Convert::ToDouble(textBox_u_0->Text);
		//double z_0 = Convert::ToDouble(textBox_z_0->Text);
		//double epsilon = Convert::ToDouble(textBox_epsilon->Text);

		//double m = Convert::ToDouble(textBox_m->Text);
		//double c = Convert::ToDouble(textBox_c->Text);
		//double k = Convert::ToDouble(textBox_k->Text);
		//double k_ = Convert::ToDouble(textBox_k_->Text);

		//double RBC = Convert::ToDouble(textBox_RBC->Text);

		int N = Convert::ToInt64(textBox_N->Text);
		int M = Convert::ToInt64(textBox_M->Text);
		double p = Convert::ToDouble(textBox_p->Text);

		//std::vector<int> n = Vector_n_Generator(N, M, p);
		std::vector<int> n;
		for (int i = 0; i <= M; i++)
		{
			n.push_back(0);
		}
		std::vector<int> x; //выборочные значения
		for (int i = 0; i < N; i++)
		{
			x.push_back(0);
		}
		for (int i = 0; i < N; i++)
		{
			int count = 0;
			for (int k = 0; k < M; k++)
			{
				double tmp = FRand(0.0, 1.0);
				if (tmp <= p)
				{
					count++;
					x[i]++;
				}
			}
			n[count]++;
		}
		//выборочное среднее 
		double Vib_Eksi = 0;
		for (int i = 0; i < N; i++)
		{
			Vib_Eksi += x[i];
		}
		Vib_Eksi /= (double)N;
		//выборочная дисперсия
		double Vib_Dksi = 0;
		for (int i = 0; i < N; i++)
		{
			Vib_Dksi += (x[i] - Vib_Eksi) * (x[i] - Vib_Eksi);
		}
		Vib_Dksi /= (double)N;
		//размах (упорядочим x_i)
		std::vector<int> x_sort = x;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N - 1; j++) {
				if (x_sort[j] > x_sort[j + 1]) {
					int b = x_sort[j]; // создали дополнительную переменную
					x_sort[j] = x_sort[j + 1]; // меняем местами
					x_sort[j + 1] = b; // значения элементов
				}
			}
		}
		double R = (double)(x_sort[N - 1] - x_sort[0]);
		//выборочная медиана
		double Me;
		int k_mid = N / 2;
		if (N == 2 * k_mid + 1)
		{
			Me = (double)x_sort[k_mid];
		}
		else
		{
			Me = (x_sort[k_mid - 1] + x_sort[k_mid]) / 2.0;
		}

		textBox1->Text = Convert::ToString(Get_Eksi(N, M, p));
		textBox2->Text = Convert::ToString(Vib_Eksi);
		textBox3->Text = Convert::ToString(std::abs(Get_Eksi(N, M, p) - Vib_Eksi));
		textBox4->Text = Convert::ToString(Get_Dksi(N, M, p));
		textBox5->Text = Convert::ToString(Vib_Dksi);
		textBox6->Text = Convert::ToString(std::abs(Get_Dksi(N, M, p) - Vib_Dksi));
		textBox7->Text = Convert::ToString(Me);
		textBox8->Text = Convert::ToString(R);

		//std::list<std::vector<double>> num_func = numerical_function_task11(x_0, u_0, z_0, h, xmax, n);
		//std::list<std::vector<double>> num_func = numerical_function_control_task11(x_0, u_0, z_0, h, xmax, n, epsilon, m, c, k, k_, RBC);
		// Список точек
		dataGridView1->Rows->Clear(); 
		//std::list<std::vector<double>> ::iterator it;
		//int i = 0;
		//double x = x_0;
		/*
		double global_error = 0;
		double global_error_max = 0;
		double global_error_max_x = x_0;
		*/
		//double max_local_error = 0;
		//double max_h = 0;
		//int C1_count = 0, C2_count = 0;

		for (int i = 0; i <= M; i++)
		{
			//Печать таблицы
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = n[i];
			dataGridView1->Rows[i]->Cells[2]->Value = n[i] / static_cast<double>(N);
		}

		/*
		for (it = num_func.begin(); it != num_func.end(); it++)
		{
			x = it->at(0);
			//Добавление на график
			f1_list->Add(it->at(1), it->at(2));
			f2_list->Add(x, it->at(1));
			f3_list->Add(x, it->at(2));
			//Поиск максимальной глобальной ошибки
			/*
			global_error = abs(analytical_test_function(x, x_0, u_0) - it->at(1));
			if (global_error > global_error_max) {
				global_error_max = global_error;
				global_error_max_x = x;
			}
			/*
			
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = it->at(1);
			dataGridView1->Rows[i]->Cells[3]->Value = it->at(2);
			dataGridView1->Rows[i]->Cells[4]->Value = it->at(3);
			dataGridView1->Rows[i]->Cells[5]->Value = it->at(4);
			dataGridView1->Rows[i]->Cells[6]->Value = it->at(5);
			dataGridView1->Rows[i]->Cells[7]->Value = it->at(6);
			dataGridView1->Rows[i]->Cells[8]->Value = it->at(7);
			dataGridView1->Rows[i]->Cells[9]->Value = it->at(8);
			dataGridView1->Rows[i]->Cells[10]->Value = it->at(9);
			dataGridView1->Rows[i]->Cells[11]->Value = it->at(10);
			//Поиск максимальной локальной ошибки
			if (it->at(7) > max_local_error)
			{
				max_local_error = it->at(7);
			}
			//Поиск максимального шага
			if (it->at(8) > max_h)
			{
				max_h = it->at(8);
			}
			C1_count = it->at(9);
			C2_count = it->at(10);
			
			i++;
		}
		*/
		
		//textBox_max_GE->Text = Convert::ToString(global_error_max);
		//textBox_max_GE_x->Text = Convert::ToString(global_error_max_x);

		LineItem Curve1 = panel->AddCurve("", f1_list, Color::Blue,SymbolType::None);
		//LineItem Curve2 = panel2->AddCurve("", f2_list, Color::Red, SymbolType::None);
		//LineItem Curve3 = panel3->AddCurve("", f3_list, Color::Black, SymbolType::None);

		//textBox_max_LE->Text = Convert::ToString(max_local_error);
		//textBox_max_h->Text = Convert::ToString(max_h);
		//textBox_C1->Text = Convert::ToString(C1_count);
		//textBox_C2->Text = Convert::ToString(C2_count);

		//textBox_max_LE->Text = Convert::ToString(max_local_error);

		// Устанавливаем интересующий нас интервал по оси X
		//panel->XAxis->Scale->Min = xmin_limit;
		//panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
		// которая умещается в интервалы по осям, установленные по умолчанию
		//zedGraphControl2->AxisChange();
		// Обновляем график
		//zedGraphControl2->Invalidate();
		// которая умещается в интервалы по осям, установленные по умолчанию
		//zedGraphControl3->AxisChange();
		// Обновляем график
		//zedGraphControl3->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	//double xmin = Convert::ToDouble(textBox_x_0->Text);
	//double xmax = Convert::ToDouble(textBox_x_max->Text);
	// Устанавливаем интересующий нас интервал по оси X
	//panel->XAxis->Scale->Min = xmin;
	//panel->XAxis->Scale->Max = xmax;
	//panel->YAxis->Scale->Min = xmin;
	//panel->YAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	//GraphPane^ panel2 = zedGraphControl2->GraphPane;
	//GraphPane^ panel3 = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	//panel2->CurveList->Clear();
	//panel3->CurveList->Clear();
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();
	// которая умещается в интервалы по осям, установленные по умолчанию
	//zedGraphControl2->AxisChange();
	// Обновляем график
	//zedGraphControl2->Invalidate();
	// которая умещается в интервалы по осям, установленные по умолчанию
	//zedGraphControl3->AxisChange();
	// Обновляем график
	//zedGraphControl3->Invalidate();
}
};
}