#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FF88
// Address: 0x21ff88 - 0x220068
void sub_0021FF88_0x21ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FF88_0x21ff88");
#endif

    switch (ctx->pc) {
        case 0x21ff98u: goto label_21ff98;
        case 0x21ffc0u: goto label_21ffc0;
        default: break;
    }

    ctx->pc = 0x21ff88u;

    // 0x21ff88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ff8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ff90: 0xc087fca  jal         func_21FF28
    ctx->pc = 0x21FF90u;
    SET_GPR_U32(ctx, 31, 0x21FF98u);
    ctx->pc = 0x21FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF90u;
    // 0x21ff94: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF28u, 0x21FF90u, 0x21FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF98u;
label_21ff98:
    // 0x21ff98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ff98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff9c: 0x4a0002f  bltz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x21FF9Cu;
    {
        const bool branch_taken_0x21ff9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x21FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF9Cu;
        // 0x21ffa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff9c) {
            ctx->pc = 0x22005Cu;
            goto label_22005c;
        }
    }
    ctx->pc = 0x21FFA4u;
    // 0x21ffa4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x21ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21ffa8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x21ffa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21ffac: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x21FFACu;
    {
        const bool branch_taken_0x21ffac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFACu;
        // 0x21ffb0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffac) {
            ctx->pc = 0x220060u;
            goto label_220060;
        }
    }
    ctx->pc = 0x21FFB4u;
    // 0x21ffb4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21ffb8: 0x24468e30  addiu       $a2, $v0, -0x71D0
    ctx->pc = 0x21ffb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
    // 0x21ffbc: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x21ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_21ffc0:
    // 0x21ffc0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21ffc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21ffc8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x21ffc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21ffcc: 0x68470747  ldl         $a3, 0x747($v0)
    ctx->pc = 0x21ffccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x21ffd0: 0x6c470740  ldr         $a3, 0x740($v0)
    ctx->pc = 0x21ffd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1856); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x21ffd4: 0x6848074f  ldl         $t0, 0x74F($v0)
    ctx->pc = 0x21ffd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1871); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x21ffd8: 0x6c480748  ldr         $t0, 0x748($v0)
    ctx->pc = 0x21ffd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x21ffdc: 0x68490757  ldl         $t1, 0x757($v0)
    ctx->pc = 0x21ffdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x21ffe0: 0x6c490750  ldr         $t1, 0x750($v0)
    ctx->pc = 0x21ffe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x21ffe4: 0x684a075f  ldl         $t2, 0x75F($v0)
    ctx->pc = 0x21ffe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1887); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x21ffe8: 0x6c4a0758  ldr         $t2, 0x758($v0)
    ctx->pc = 0x21ffe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1880); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x21ffec: 0xb0470787  sdl         $a3, 0x787($v0)
    ctx->pc = 0x21ffecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21fff0: 0xb4470780  sdr         $a3, 0x780($v0)
    ctx->pc = 0x21fff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1920); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21fff4: 0xb048078f  sdl         $t0, 0x78F($v0)
    ctx->pc = 0x21fff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21fff8: 0xb4480788  sdr         $t0, 0x788($v0)
    ctx->pc = 0x21fff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21fffc: 0xb0490797  sdl         $t1, 0x797($v0)
    ctx->pc = 0x21fffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1943); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220000: 0xb4490790  sdr         $t1, 0x790($v0)
    ctx->pc = 0x220000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220004: 0xb04a079f  sdl         $t2, 0x79F($v0)
    ctx->pc = 0x220004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220008: 0xb44a0798  sdr         $t2, 0x798($v0)
    ctx->pc = 0x220008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1944); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22000c: 0x68470767  ldl         $a3, 0x767($v0)
    ctx->pc = 0x22000cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1895); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x220010: 0x6c470760  ldr         $a3, 0x760($v0)
    ctx->pc = 0x220010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1888); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x220014: 0x6848076f  ldl         $t0, 0x76F($v0)
    ctx->pc = 0x220014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1903); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x220018: 0x6c480768  ldr         $t0, 0x768($v0)
    ctx->pc = 0x220018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22001c: 0x68490777  ldl         $t1, 0x777($v0)
    ctx->pc = 0x22001cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1911); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x220020: 0x6c490770  ldr         $t1, 0x770($v0)
    ctx->pc = 0x220020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1904); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x220024: 0x684a077f  ldl         $t2, 0x77F($v0)
    ctx->pc = 0x220024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x220028: 0x6c4a0778  ldr         $t2, 0x778($v0)
    ctx->pc = 0x220028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x22002c: 0xb04707a7  sdl         $a3, 0x7A7($v0)
    ctx->pc = 0x22002cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1959); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220030: 0xb44707a0  sdr         $a3, 0x7A0($v0)
    ctx->pc = 0x220030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220034: 0xb04807af  sdl         $t0, 0x7AF($v0)
    ctx->pc = 0x220034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220038: 0xb44807a8  sdr         $t0, 0x7A8($v0)
    ctx->pc = 0x220038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22003c: 0xb04907b7  sdl         $t1, 0x7B7($v0)
    ctx->pc = 0x22003cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1975); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220040: 0xb44907b0  sdr         $t1, 0x7B0($v0)
    ctx->pc = 0x220040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220044: 0xb04a07bf  sdl         $t2, 0x7BF($v0)
    ctx->pc = 0x220044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1983); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x220048: 0xb44a07b8  sdr         $t2, 0x7B8($v0)
    ctx->pc = 0x220048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1976); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22004c: 0x0  nop
    ctx->pc = 0x22004cu;
    // NOP
    // 0x220050: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x220050u;
    {
        const bool branch_taken_0x220050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220050u;
        // 0x220054: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220050) {
            ctx->pc = 0x21FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ffc0;
        }
    }
    ctx->pc = 0x220058u;
    // 0x220058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22005c:
    // 0x22005c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22005cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220060:
    // 0x220060: 0x3e00008  jr          $ra
    ctx->pc = 0x220060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220060u;
        // 0x220064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220068u;
}
