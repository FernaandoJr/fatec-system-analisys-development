function SJFResults({ data }) {
	let time = 0;
	let waitTime = 0;
    let tournaround = 0;
	const SJFResult = data.map((content) => content);

	console.log("SFJ: " + JSON.stringify(SJFResult, null, 2));

	function TotalProcess() {
		let total = 0;
		SJFResult.map((eachProcess) => {
			total += parseInt(eachProcess.execTime);
		});
		return total;
	}

	if (!data || data.length === 0) {
        return <div>No data available</div>;
    }

	return (
		<div className="">
			<h1 className="title-sjf">tempo de turnaround</h1>
			{SJFResult.map((eachProcess) => {
				time += parseInt(eachProcess.execTime);
                
				return (
					<div className="">
						<p>
							Turnaround do {eachProcess.process} = {time}
						</p>
					</div>
				);
			})}
			<h1>tempo médio de espera</h1>
			{<p>{((TotalProcess() - SJFResult[0].execTime) / SJFResult.length).toFixed(2)}</p>}
			<h1>tempo de espera de cada processo</h1>
			{SJFResult.map((eachProcess) => {
            const currentWaitTime = waitTime;
            waitTime += parseInt(eachProcess.execTime);
            return (
            <div className="">
                <p>Tempo de espera do {eachProcess.process} = {currentWaitTime}</p>
            </div>
            );
        })}
			<h1>tempo de retorno</h1>
            {((time + SJFResult[0].execTime) / SJFResult.length).toFixed(2)}
			<h1>tempo total de processador</h1>
            <p>{TotalProcess()}</p>
		</div>
	);
}

export default SJFResults;
