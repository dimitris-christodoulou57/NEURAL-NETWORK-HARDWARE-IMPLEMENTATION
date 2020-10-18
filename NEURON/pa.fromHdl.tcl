
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name MULTIPLIER -dir "C:/Users/dimit/Documents/FPGA/MULTIPLIER/planAhead_run_4" -part xc3s200ft256-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "NEURON.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {MULTIPLY6BIT.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {tanh.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {sigmoid.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ReLu.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ADDER.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {NEURON.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top NEURON $srcset
add_files [list {NEURON.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s200ft256-4
