/* eslint-disable @typescript-eslint/no-unused-vars */
"use client"
import { Input } from "@/components/ui/input"
import { v4 as uuidv4 } from "uuid"
import ProcessTable from "@/components/ui/ProcessTable"
import { Label } from "@/components/ui/label"
import { useState } from "react"
import { Button } from "@/components/ui/button"
import { Process } from "@/lib/Process"
import { Separator } from "@/components/ui/separator"
import Banner from "@/components/own/Banner"
import calcSJF from "@/lib/calcProcessSJF"
import {CalculatorGraph} from "@/components/own/CalculatorGraph"

export default function Home() {
    const mockedProcesses: Process[] = [
        {
            processId: uuidv4(),
            processName: "P1",
            startTime: 0,
            executionTime: 8,
			waitingTime: 0,
			turnaroundTime: 0,
			responseTime: 0,
        },
        {
            processId: uuidv4(),
            processName: "P2",
            startTime: 5,
            executionTime: 4,
			waitingTime: 0,
			turnaroundTime: 0,
			responseTime: 0,
        },
        {
            processId: uuidv4(),
            processName: "P3",
            startTime: 9,
            executionTime: 2,
			waitingTime: 0,
			turnaroundTime: 0,
			responseTime: 0,
        },
        {
            processId: uuidv4(),
            processName: "P4",
            startTime: 3,
            executionTime: 3,
			waitingTime: 0,
			turnaroundTime: 0,
			responseTime: 0,
        },
        {
            processId: uuidv4(),
            processName: "P5",
            startTime: 6,
            executionTime: 5,
			waitingTime: 0,
			turnaroundTime: 0,
			responseTime: 0,
        },
    ]
    const [processes, setProcesses] = useState<Process[]>(mockedProcesses)
    const [processName, setProcessName] = useState("P6")
    const [startTime, setStartTime] = useState(10)
    const [executionTime, setExecutionTime] = useState(4)
    const [quantum, setQuantum] = useState(1)
	const [chartProcesses, setChartProcesses] = useState<Process[]>()

    const handleCreateProcess = (event: React.FormEvent) => {
        event.preventDefault()

        const newProcess: Process = {
            processId: uuidv4(),
            processName,
            startTime,
            executionTime,
			waitingTime: 0,
			turnaroundTime: 0,
			responseTime: 0,
        }
        setProcessName("")
        setStartTime(0)
        setExecutionTime(1)

        setProcesses([...processes, newProcess])
    }

    const handleProcessDelete = (currentProcess: Process) => {
        const updatedProcesses = processes.filter((process) => process.processId !== currentProcess.processId)
        setProcesses(updatedProcesses)
    }

	calcSJF(processes)


    return (
        <div className="flex flex-col">
            <Banner />

            <div className="mt-4 flex flex-col justify-center gap-4 px-4 md:flex-row ">
                <div className="flex items-center rounded-xl border border-border p-4">
                    <form onSubmit={handleCreateProcess}>
                        <div className="w-full">
                            <div className="flex flex-col gap-3">
                                <Label>Nome do processo</Label>
                                <Input value={processName} placeholder="Process Name" required defaultChecked={false} type={"text"} onChange={(event) => setProcessName(event.target.value)} />
                                <Label>Tempo de chegada</Label>
                                <Input value={startTime} min={0} placeholder="Start Time" required max={100} type={"number"} onChange={(event) => setStartTime(Number(event.target.value))} />
                                <Label>Tempo de execução</Label>
                                <Input value={executionTime} required min={1} max={100} type={"number"} onChange={(event) => setExecutionTime(Number(event.target.value))} />
                                <Button className="bg-green-600 hover:bg-green-700" type="submit">
                                    Cadastrar processo
                                </Button>
                            </div>
                        </div>
                    </form>
                </div>
                <div className="rounded-xl border border-border p-4">
                    <ProcessTable processes={processes} onDelete={handleProcessDelete} />
                </div>
            </div>
			<div className="flex justify-center">

            <div className="p-5 container">
			<Separator className="" />
			</div>
			</div>
			<CalculatorGraph processes={processes} />
        </div>
    )
}
