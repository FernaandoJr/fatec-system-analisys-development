import * as React from "react";
import { useState } from "react";
import BasicTable from "./components/EscalationTable";
import SJFForm from "./components/SJFForm";
import SJFResults from "./components/SJFResults";

function App() {
    const [escalationData, setEscalationData] = useState([]);

    const handleEscalationChange = (newEscalation) => {
        setEscalationData(newEscalation);
    };

    const handleDelete = (id) => {
        const updatedData = escalationData.filter(item => item.id !== id);
        setEscalationData(updatedData);
    };

    function SortSJF() {
        const sortedList = [...escalationData].sort((a, b) => a.execTime - b.execTime);
        console.log(sortedList);
        return sortedList;
    }

    return (
        <div className="App">
            <BasicTable data={escalationData} onDelete={handleDelete} />
            <SJFForm onEscalationChange={handleEscalationChange} />
            <button onClick={SortSJF}>Sort</button>
            <SJFResults data={SortSJF()} />
        </div>
    );
}

export default App;