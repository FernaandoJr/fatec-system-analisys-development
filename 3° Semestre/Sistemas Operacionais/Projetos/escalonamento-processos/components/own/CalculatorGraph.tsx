"use client"

import { TrendingUp } from "lucide-react"
import { Bar, BarChart, CartesianGrid, LabelList, XAxis, YAxis } from "recharts"
import { v4 as uuidv4 } from "uuid"
import {
  Card,
  CardContent,
  CardDescription,
  CardFooter,
  CardHeader,
  CardTitle,
} from "@/components/ui/card"
import {
  ChartConfig,
  ChartContainer,
  ChartTooltip,
  ChartTooltipContent,
} from "@/components/ui/chart"
import { Process } from "@/lib/Process"

const mockedProcesses: Process[] = [
    {
        "processId": "ca3766f4-33a6-4ce1-9498-9b5baac373a0",
        "processName": "P3",
        "startTime": 9,
        "executionTime": 2,
        "waitingTime": 0,
        "turnaroundTime": 2,
        "responseTime": 0
    },
    {
        "processId": "0e09b042-48b6-4877-84a5-7877b1d8397c",
        "processName": "P4",
        "startTime": 3,
        "executionTime": 3,
        "waitingTime": 2,
        "turnaroundTime": 5,
        "responseTime": 2
    },
    {
        "processId": "afc7138f-fc19-4227-ad94-b805925b8600",
        "processName": "P2",
        "startTime": 5,
        "executionTime": 4,
        "waitingTime": 5,
        "turnaroundTime": 9,
        "responseTime": 5
    },
    {
        "processId": "58c16b32-b631-47db-a236-9386e59595ca",
        "processName": "P5",
        "startTime": 6,
        "executionTime": 5,
        "waitingTime": 9,
        "turnaroundTime": 14,
        "responseTime": 9
    },
    {
        "processId": "ce158bda-3f3c-4da4-8715-11901cb2a63d",
        "processName": "P1",
        "startTime": 0,
        "executionTime": 8,
        "waitingTime": 14,
        "turnaroundTime": 22,
        "responseTime": 14
    }
]



// const chartData = [
//   { month: "January", desktop: 186, mobile: 1 },
//   { month: "February", desktop: 305, mobile: 200 },
//   { month: "March", desktop: 237, mobile: 120 },
//   { month: "April", desktop: 73, mobile: 190 },
//   { month: "May", desktop: 209, mobile: 130 },
//   { month: "June", desktop: 214, mobile: 140 },
// ]

const chartConfig = {
	processName: {
    label: "Process Name",
    color: "hsl(var(--chart-1))",
  },
  startTime: {
	label: "Start Time",
	color: "hsl(var(--chart-2))",
  },
  label: {
    color: "hsl(var(--background))",
  },
} satisfies ChartConfig

interface GraphProps{
	processes: Process[]
}

export function CalculatorGraph({processes}: GraphProps) {
  return (
    <Card>
      <CardHeader>
        <CardTitle>Bar Chart - Custom Label</CardTitle>
        <CardDescription>January - June 2024</CardDescription>
      </CardHeader>
      <CardContent>
        <ChartContainer config={chartConfig}>
          <BarChart
            accessibilityLayer
            data={processes}
            layout="vertical"
            margin={{
				right: 16,
			  }}
          >
            <CartesianGrid horizontal={false} />
            <YAxis
              dataKey="processName"
              type="category"
              tickLine={true}
              tickMargin={10}
              axisLine={false}
              tickFormatter={(value) => value.slice(0, 3)}
            />
            <XAxis dataKey="turnaroundTime" type="number" offset="waitingTime" />
            <ChartTooltip
              cursor={true}
              content={<ChartTooltipContent indicator="line" />}
            />
			<Bar dataKey="waitingTime" stackId="a" fill="transparent" radius={[4, 4, 0, 0]} />
			<Bar
			  dataKey="executionTime"
			  fill="var(--color-primary)"
			  radius={8}
			  stackId="a"
			>
			</Bar>
          </BarChart>
        </ChartContainer>
      </CardContent>
      <CardFooter className="flex-col items-start gap-2 text-sm">
        <div className="flex gap-2 font-medium leading-none">
          Trending up by 5.2% this month <TrendingUp className="h-4 w-4" />
        </div>
        <div className="leading-none text-muted-foreground">
          Showing total visitors for the last 6 months
        </div>
      </CardFooter>
    </Card>
  )
}
