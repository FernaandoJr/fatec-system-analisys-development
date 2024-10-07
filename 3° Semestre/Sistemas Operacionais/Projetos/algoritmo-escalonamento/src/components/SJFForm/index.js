import { useState } from "react";
import React from "react";
import { v4 as uuidv4 } from "uuid";

function SJFForm({onEscalationChange}) {

    //Array principal com todos os processo
	const [escalationData, setEscalationData] = useState([
		CreateFormData(1, "A", 6, 4),
		CreateFormData(2, "B", 8, 5),
		CreateFormData(3, "C", 4, 2),
	]);

    //variaveis do objeto 
	const [order, setOrder] = useState("");
	const [process, setProcess] = useState("");
	const [execTime, setExecTime] = useState("");
	const [priority, setPriority] = useState("");

    //função criar dados fáceis
	function CreateFormData(order, process, execTime, priority) {
		return { id: uuidv4(), order, process, execTime, priority };
	}

    // cadastrar processo
	const handleSubmit = (event) => {
		event.preventDefault();

		const newFormData = CreateFormData(order, process, execTime, priority);
		setEscalationData((prevData) => [...prevData, newFormData]);
		console.log(escalationData);

		setOrder("");
		setProcess("");
		setExecTime("");
		setPriority("");
        onEscalationChange(escalationData)
	};

    //excluir processo
  const handleDelete = (id) =>{
    setEscalationData((rows) => rows.filter((row) => row.id !== id))
  }

  


	return (
		<div className="FORM">
			<form onSubmit={handleSubmit}>
				<label>Ordem:</label>
				<input
					type="number"
					value={order}
					required
					onChange={(e) => setOrder(e.target.value)}
				/>
				<label>Processo:</label>
				<input
					type="text"
					value={process}
					required
					onChange={(e) => setProcess(e.target.value)}
				/>
				<label>Tempo Execução:</label>
				<input
					type="number"
					value={execTime}
					required
					onChange={(e) => setExecTime(e.target.value)}
				/>
				<label>Prioridade:</label>
				<input
					type="number"
					value={priority}
					required
					onChange={(e) => setPriority(e.target.value)}
				/>
				<input type="submit" />
			</form>
		</div>
	);
}

export default SJFForm;
