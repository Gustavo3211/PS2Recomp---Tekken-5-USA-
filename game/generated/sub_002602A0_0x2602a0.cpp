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

// Function: sub_002602A0
// Address: 0x2602a0 - 0x2603c0
void sub_002602A0_0x2602a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002602A0_0x2602a0");
#endif

    switch (ctx->pc) {
        case 0x260318u: goto label_260318;
        case 0x260338u: goto label_260338;
        default: break;
    }

    ctx->pc = 0x2602a0u;

    // 0x2602a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2602a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2602a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2602a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2602a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2602a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2602ac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2602acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2602b0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2602b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2602b4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2602b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2602b8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2602b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2602bc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2602bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2602c0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2602c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2602c4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2602c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2602c8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2602c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2602cc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2602ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2602d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2602d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2602d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2602d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2602d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2602d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2602dc: 0x24ab32c0  addiu       $t3, $a1, 0x32C0
    ctx->pc = 0x2602dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12992));
    // 0x2602e0: 0x69660007  ldl         $a2, 0x7($t3)
    ctx->pc = 0x2602e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2602e4: 0x6d660000  ldr         $a2, 0x0($t3)
    ctx->pc = 0x2602e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2602e8: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x2602e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2602ec: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x2602ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2602f0: 0x246a32b0  addiu       $t2, $v1, 0x32B0
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 12976));
    // 0x2602f4: 0x69450007  ldl         $a1, 0x7($t2)
    ctx->pc = 0x2602f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2602f8: 0x6d450000  ldr         $a1, 0x0($t2)
    ctx->pc = 0x2602f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2602fc: 0xb0450027  sdl         $a1, 0x27($v0)
    ctx->pc = 0x2602fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x260300: 0xb4450020  sdr         $a1, 0x20($v0)
    ctx->pc = 0x260300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x260304: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x260304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260308: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26030c: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26030Cu;
    {
        const bool branch_taken_0x26030c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x260310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26030Cu;
        // 0x260310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26030c) {
            ctx->pc = 0x260374u;
            goto label_260374;
        }
    }
    ctx->pc = 0x260314u;
    // 0x260314: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_260318:
    // 0x260318: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x260318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26031c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x26031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x260320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260328: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x260328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26032c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260330: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x260330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260334: 0x0  nop
    ctx->pc = 0x260334u;
    // NOP
label_260338:
    // 0x260338: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x260338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26033c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x260340: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x260344: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x260344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x260348: 0x0  nop
    ctx->pc = 0x260348u;
    // NOP
    // 0x26034c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26034Cu;
    {
        const bool branch_taken_0x26034c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26034Cu;
        // 0x260350: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26034c) {
            ctx->pc = 0x260338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260338;
        }
    }
    ctx->pc = 0x260354u;
    // 0x260354: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x260354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x260358: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x26035c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x26035cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x260360: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x260360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x260364: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x260364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x260368: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x260368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26036c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x26036Cu;
    {
        const bool branch_taken_0x26036c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26036c) {
            ctx->pc = 0x260370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26036Cu;
            // 0x260370: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260318;
        }
    }
    ctx->pc = 0x260374u;
label_260374:
    // 0x260374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x260374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260378: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x260378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x26037c: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x26037cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x260380: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x260384: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x260384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x260388: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x260388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x26038c: 0x248732c8  addiu       $a3, $a0, 0x32C8
    ctx->pc = 0x26038cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 13000));
    // 0x260390: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x260390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x260394: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x260394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x260398: 0xb10b013f  sdl         $t3, 0x13F($t0)
    ctx->pc = 0x260398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26039c: 0xb50b0138  sdr         $t3, 0x138($t0)
    ctx->pc = 0x26039cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2603a0: 0x246432b8  addiu       $a0, $v1, 0x32B8
    ctx->pc = 0x2603a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12984));
    // 0x2603a4: 0x68890007  ldl         $t1, 0x7($a0)
    ctx->pc = 0x2603a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2603a8: 0x6c890000  ldr         $t1, 0x0($a0)
    ctx->pc = 0x2603a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2603ac: 0xb1090147  sdl         $t1, 0x147($t0)
    ctx->pc = 0x2603acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2603b0: 0xb5090140  sdr         $t1, 0x140($t0)
    ctx->pc = 0x2603b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2603b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2603B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2603B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603B4u;
        // 0x2603b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2603B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2603BCu;
    // 0x2603bc: 0x0  nop
    ctx->pc = 0x2603bcu;
    // NOP
    ctx->pc = 0x2603c0u;
}
