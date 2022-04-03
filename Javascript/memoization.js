

export function memoize(callback){
    const memo = new Map()
    return(...args) => {
        const key = JSON.stringify(args)
        
        if(memo.has(key)) return memo.get(key)
        
        const result = callback(...args)
        memo.set(key, result)
        return result
    }
}