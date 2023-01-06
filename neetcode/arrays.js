/**
 * 217 # contains duplicates
 * O(N) space and time
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  let set = new Set();
  for (let i = 0; i < nums.length; i++) {
    if (set.has(nums[i])) {
      return true;
    }
    set.add(nums[i]);
  }
  return false;
};

/**
 * 242 # valid anagrams
 * O(N log N) time, O(N) space
 * .sort() takes N log N time, .join() takes O(N) space
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
// var isAnagram = function (s, t) {
//   s = s.split("").sort().join("");
//   t = t.split("").sort().join("");
//   return s === t;
// };

/**
 * O(N) time, O(N) space
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  let map = new Map();
  for (const ss of s) {
    map.set(ss, 1 + (map.has(ss) ? map.get(ss) : 0));
  }
  for (const tt of t) {
    if (!map.has(tt)) {
      return false;
    }
    map.set(tt, map.get(tt) - 1);
  }
  for (const [k, v] of map) {
    if (v !== 0) {
      return false;
    }
  }
  return true;
};

/**
 * 1 # two sum
 * O(N) time and space
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  let map = new Map();
  for (let i = 0; i < nums.length; i++) {
    if (map.has(target - nums[i])) {
      return [i, map.get(target - nums[i])];
    }
    map.set(nums[i], i);
  }
  return [];
};

/**
 * 49 # group anagrams
 * O(N) time and space
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  let map = new Map();
  for (const str of strs) {
    let sortedStr = str.split("").sort().join("");
    if (!map.has(sortedStr)) {
      map.set(sortedStr, map.size);
    }
  }
  let res = [];
  for (let i = 0; i < map.size; i++) {
    res[i] = [];
  }
  for (const str of strs) {
    let sortedStr = str.split("").sort().join("");
    res[map.get(sortedStr)].push(str);
  }
  return res;
};

/**
 * 347 # top k frequent elements
 * O(N) time and space
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
  let map = new Map();
  for (const num of nums) {
    map.set(num, 1 + (map.has(num) ? map.get(num) : 0));
  }
  res = [];
  for (let i = 0; i <= nums.length; i++) {
    res[i] = [];
  }
  for (const [key, val] of map) {
    res[val].push(key);
  }
  console.log(res);
  console.log(map);
  return flatten(res).splice(-k);
};

const flatten = (nums) => {
  let res = [];
  for (const num of nums) {
    for (const n of num) {
      res.push(n);
    }
  }
  return res;
};