import * as React from "react";
import { useState } from "react";
import BasicTable from "./components/EscalationTable";
import SJFForm from "./components/SJFForm";

import SJFResults from "./components/SJFResults";

function App() {
	const [escalationData, setEscalationData] = useState([])

	const handleEscalationChange = (newEscalation) =>{
		setEscalationData(newEscalation);
	}
	

  function SortSJF(){
	const sortedList = escalationData.sort((a, b) => a.execTime - b.execTime)
	console.log(escalationData)
	return sortedList
  }

	return (
		<div className="App">
			<BasicTable data={handleEscalationChange}/>
			<SJFForm data={handleEscalationChange}/>
			<button onClick={SortSJF}>sort</button>

			<SJFResults data={SortSJF()}/>
		</div>
	);
}

export default App;
