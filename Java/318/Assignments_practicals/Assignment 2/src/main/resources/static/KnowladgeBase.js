class DeleteButton extends React.Component{
    constructor(props) {
        super(props);
    }
    render(){

        return (
            <div>
            <form action="/deleteKnowQuestion" method="get">
                <input name="id" type="hidden" value={this.props.id} readOnly/>
                <button type="submit" className="btn btn-danger"> DELETE</button>
            </form>
            </div>
        )
    };
}

class KnowladgeBaseList extends React.Component {

    render() {

            return (
                <div>
                    <div>
                        You have {this.props.questions.length} Questions!
                     </div>
                    <table id="question-list" className="table">
                        <thead>
                        <tr>
                            <th scope="col">#id</th>
                            <th scope="col">keywords</th>
                            <th scope="col">response</th>
                            <th scope="col">Delete</th>

                        </tr>
                        </thead>
                        <tbody>
                        {this.props.questions.map(question => (
                            <tr>
                                <td> {question.id}</td>
                                <td> {question.keywords}</td>
                                <td>{question.answer}</td>
                                <td><DeleteButton id={question.id}/></td>

                            </tr>
                        ))}
                        </tbody>
                    </table>
                </div>
                );
        }
}


class KnowladgeBase extends React.Component {
        constructor(props) {
            super(props)
            this.state = {
                questions : []
            }
        }

        componentDidMount() {
            fetch("/knowledgeBaseList")// perni oti ginetai sto "/" dld  repositoryKnow.findAll se Iterable<Question>
                .then(res => res.json())//metatropi se json
                .then(//me to apotelesma tou json kane to pio katw
                    (response) => { //response =to apotelesma tou json  filakse to sto question
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
                    <KnowladgeBaseList questions={this.state.questions}/>
                   </div>
                        );
        }


}


ReactDOM.render(
    <KnowladgeBase />,
    document.getElementById('knowladgeBase-list')
);