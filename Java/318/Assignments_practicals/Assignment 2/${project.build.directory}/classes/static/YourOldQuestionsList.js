class List extends React.Component{

    render(){

        return (
            <div>
            <table >
                <thead>
                <tr>
                    <th scope="col">Question</th>

                </tr>
                </thead>
                <tbody>
                {this.props.questions.map(o => (
                    <tr>
                        <td> {o.oldQuestion}</td>
                    </tr>
                ))}
                </tbody>

            </table>
            </div>
        );
    }
}
class YourOldQuestionsList extends React.Component{
    constructor(props) {
        super(props)
        this.state = {
            questions : []
        }
    }
    componentDidMount() {
        fetch("/yourOldQuestions")
            .then(res => res.json())
            .then(
                (response) => {
                    this.setState({
                        questions: response
                    });
                },
                (error) => {
                    alert(error);
                }
            )
    }

    render() {

        return (
            <div>
                <List questions={this.state.questions}/>
            </div>
        );
    }

}
ReactDOM.render(
    <YourOldQuestionsList />
    ,document.getElementById('YourOldQuestions-list')
)