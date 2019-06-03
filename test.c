this.test.sort((a, b) => {
      if(a.rola === 'WSPOLPRACUJACY') {
        return -1;
      }
      else if(a.rola === 'KONSULTUJACY' && b.rola !== 'WSPOLPRACUJACY') {
        return -1;
      }
      else if(a.rola === 'PRAWNY' &&  b.rola !== 'WSPOLPRACUJACY' && b.rola !== 'KONSULTUJACY') {
        return -1;
      }
      else if(a.rola === 'DOS' && b.rola === 'ZARZAD') {
        return -1;
      }
      else if (a.rola === 'ZARZAD') {
        return 1;
      }
    })
