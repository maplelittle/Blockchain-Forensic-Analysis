#include <iostream>
#include <string>
using namespace std;

//��־��Ϣ����
class Log_information_table
{
private:
	string Log_Filename; 
	int Log_Pid;
	string Log_Starttime;
	string Log_Operation;
	string Log_Path;
	string Log_Result;
	string Log_Detail;

public:
	void int_Log_information_table() {
		//������־��Ϣ��ĳ�ʼ��
	}
	void Pretreatment() {
		//���ݸ�ʽԤ������������ת��Ϊ�����ϵ��
	}
	void table_compress(compress_method cm) {
		//ֱ�ӽ���ѹ�����ο�deepzip��ELISE
	}
	string get_Filename() {
		//��ȡ������Ϣ
	}
	int get_Pid() {
		//ͬ�ϣ�֮���ȡ�������Է��������ظ�
	}

};

//�����������
class Causality_Table 
{
private:
	string Field;
	int Starttime;
	int Srcid;
	int Dstid;
	string Operation;
	string Result;
	int Agentid;
public:
	string get_Field() {
		//��ȡ��ϵ���ļ�����
	}
	int get_Starttime() {
		//��ȡ��ϵ��ʼʱ�������
	}
	int get_Srcid() {
		//��ȡ��ϵ��Դ�ļ�id����
	}
	int get_Dstid() {
		//��ȡ��ϵ��Ŀ���ļ�id����
	}
	string get_Operation() {
		//��ȡ��ϵ��������ԣ������ȡ���Է��������ظ�
	}

};

//�������ͼ��
class Causality_diagram
{
private:
	class node_table{};
	class edge_node{};
public:
	//����ͼ�ĳ��淽������ѯ����������ӱߡ�ɾ���ߵȷ������ٱ�д
	void create_graph(Causality_Table ct) {
		//ʹ�����������ʵ��ͼ�Ĵ���
	}

	void select_Graph(int se_starttime, int se_endtime, int se_srcid) {
		//�����ѯ��ʼʱ�䡢����ʱ�䡢Ŀ���ѯ�ڵ�id���Թ���ͼ���������ѯ�������ʽ�ݶ�
	}
};

//ѹ�������ӿ���
class Graph_structure_compression_method {
private:
	string method_name; //��������
public:
	virtual void graph_compress() = 0;//ѹ��ԭ���麯��
	virtual void graph_compress_select() = 0;//ѹ����ѯԭ���麯��
};
	
//SEALѹ��������
class SEAL :public Graph_structure_compression_method {
private:
	class SEAL_node_map{}; //SEAL������ѹ���ڵ�ͼ�����ڲ�ѯ
	class SEAL_new_node_table{};//SEAL���¾ɽڵ������
public:
	bool Compression_Estimation(Causality_diagram cd) {
		//����Ŀ��ͼ�Ƿ񳬹���ֵ��Ҫѹ������Ҫѹ������1������Ҫѹ������0
	}
	void graph_compress(Causality_diagram) {
		//ʹ��SEAL������ϵͼ����ѹ��
		void SEAL_Structure_compression(){
			//SEAL�ṹѹ����������
		}
		void SEAL_Node_compression(){
			//SEAK�ڵ�ѹ����������
		}
		
	}
	void graph_compress_select(Causality_compress_diagram ccd, int se_starttime_2, int se_endtime_2, int se_node) {
		//��ѹ��ͼ����ֱ�Ӳ�ѯ��������ݴ���
	}
};

//ѹ�����ͼ��
class Causality_compress_diagram {
private: 
	class node_table{};
	class edge_node{};
public:
	void shownode() {
		//չʾ�ڵ�
	}
	void showgraph() {
		//չʾ����ͼ
	}

};