document.addEventListener("DOMContentLoaded", function () {
    const pollForm = document.getElementById("poll-form");
    const yesCount = document.getElementById("yes-count");
    const noCount = document.getElementById("no-count");
    let yesVotes = 0;
    let noVotes = 0;

    pollForm.addEventListener("submit", function (e) {
      e.preventDefault();

      const userVote = document.querySelector('input[name="vote"]:checked');
      if (!userVote) {
        alert("Please select a voting option.");
        return;
      }

      const voteValue = userVote.value;
      if (voteValue === "yes") {
        yesVotes++;
      } else if (voteValue === "no") {
        noVotes++;
      }

      updateResults();
      pollForm.reset();
    });

    function updateResults() {
      yesCount.textContent = yesVotes;
      noCount.textContent = noVotes;
    }
  });
