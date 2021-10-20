#include <iostream>
#include <string>
using namespace std;

//日志信息表类
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
		//进行日志信息表的初始化
	}
	void Pretreatment() {
		//数据格式预处理函数，便于转换为因果关系表
	}
	void table_compress(compress_method cm) {
		//直接进行压缩，参看deepzip和ELISE
	}
	string get_Filename() {
		//获取属性信息
	}
	int get_Pid() {
		//同上，之后获取对象属性方法不再重复
	}

};

//因果关联表类
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
		//获取关系表文件属性
	}
	int get_Starttime() {
		//获取关系表开始时间戳属性
	}
	int get_Srcid() {
		//获取关系表源文件id属性
	}
	int get_Dstid() {
		//获取关系表目标文件id属性
	}
	string get_Operation() {
		//获取关系表操作属性，后面获取属性方法不再重复
	}

};

//因果关联图类
class Causality_diagram
{
private:
	class node_table{};
	class edge_node{};
public:
	//遍历图的常规方法：查询、遍历、添加边、删除边等方法不再编写
	void create_graph(Causality_Table ct) {
		//使用因果关联表实现图的创建
	}

	void select_Graph(int se_starttime, int se_endtime, int se_srcid) {
		//输入查询起始时间、结束时间、目标查询节点id，对关联图进行因果查询，输出形式暂定
	}
};

//压缩方法接口类
class Graph_structure_compression_method {
private:
	string method_name; //方法名称
public:
	virtual void graph_compress() = 0;//压缩原理纯虚函数
	virtual void graph_compress_select() = 0;//压缩查询原理纯虚函数
};
	
//SEAL压缩方法类
class SEAL :public Graph_structure_compression_method {
private:
	class SEAL_node_map{}; //SEAL的无向压缩节点图，便于查询
	class SEAL_new_node_table{};//SEAL的新旧节点关联表
public:
	bool Compression_Estimation(Causality_diagram cd) {
		//计算目标图是否超过阈值需要压缩，需要压缩返回1，不需要压缩返回0
	}
	void graph_compress(Causality_diagram) {
		//使用SEAL关联关系图进行压缩
		void SEAL_Structure_compression(){
			//SEAL结构压缩方法函数
		}
		void SEAL_Node_compression(){
			//SEAK节点压缩方法函数
		}
		
	}
	void graph_compress_select(Causality_compress_diagram ccd, int se_starttime_2, int se_endtime_2, int se_node) {
		//对压缩图进行直接查询，输出内容待定
	}
};

//压缩因果图类
class Causality_compress_diagram {
private: 
	class node_table{};
	class edge_node{};
public:
	void shownode() {
		//展示节点
	}
	void showgraph() {
		//展示整个图
	}

};