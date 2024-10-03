import * as React from "react";
import { useState } from "react";
import BasicTable from "./components/EscalationTable";
import { v4 as uuidv4 } from "uuid";

function App() {
	const [escalationData, setEscalationData] = useState([
		CreateFormData(1, "P1", 6, 4),
		CreateFormData(2, "P2", 8, 5),
		CreateFormData(3, "P3", 4, 2),
		CreateFormData(4, "P4", 2, 1),
		CreateFormData(5, "P5", 1, 3),
	]);
	const [order, setOrder] = useState("");
	const [process, setProcess] = useState("");
	const [execTime, setExecTime] = useState("");
	const [priority, setPriority] = useState("");

	function CreateFormData(order, process, execTime, priority) {
		return { id: uuidv4(), order, process, execTime, priority };
	}

	const handleSubmit = (event) => {
		event.preventDefault();

		const newFormData = CreateFormData(order, process, execTime, priority);
		setEscalationData((prevData) => [...prevData, newFormData]);
		console.log(escalationData);

		setOrder("");
		setProcess("");
		setExecTime("");
		setPriority("");
	};

  const handleDelete = (id) =>{
    setEscalationData((rows) => rows.filter((row) => row.id !== id))
  }


	return (
		<div className="App">
			<BasicTable data={escalationData} delete={handleDelete}/>

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
						type="text"
						value={execTime}
						required
						onChange={(e) => setExecTime(e.target.value)}
					/>
					<label>Prioridade:</label>
					<input
						type="text"
						value={priority}
						required
						onChange={(e) => setPriority(e.target.value)}
					/>
					<input type="submit" />
				</form>
			</div>
      
		</div>
	);
}

export default App;
