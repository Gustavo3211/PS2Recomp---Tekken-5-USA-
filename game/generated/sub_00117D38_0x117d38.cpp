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

// Function: sub_00117D38
// Address: 0x117d38 - 0x117f40
void sub_00117D38_0x117d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D38_0x117d38");
#endif

    switch (ctx->pc) {
        case 0x117d70u: goto label_117d70;
        case 0x117d80u: goto label_117d80;
        case 0x117dccu: goto label_117dcc;
        case 0x117e30u: goto label_117e30;
        case 0x117ec0u: goto label_117ec0;
        case 0x117efcu: goto label_117efc;
        default: break;
    }

    ctx->pc = 0x117d38u;

    // 0x117d38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x117d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x117d3c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x117d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x117d40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x117d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x117d44: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x117d44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x117d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x117d4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x117d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x117d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x117d54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x117d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x117d5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x117d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d60: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x117d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x117d64: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x117d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x117d68: 0xc045e5a  jal         func_117968
    ctx->pc = 0x117D68u;
    SET_GPR_U32(ctx, 31, 0x117D70u);
    ctx->pc = 0x117D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D68u;
    // 0x117d6c: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117968u, 0x117D68u, 0x117D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D70u;
label_117d70:
    // 0x117d70: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x117D70u;
    {
        const bool branch_taken_0x117d70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x117D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D70u;
        // 0x117d74: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d70) {
            ctx->pc = 0x117F18u;
            goto label_117f18;
        }
    }
    ctx->pc = 0x117D78u;
    // 0x117d78: 0xc045e9a  jal         func_117A68
    ctx->pc = 0x117D78u;
    SET_GPR_U32(ctx, 31, 0x117D80u);
    ctx->pc = 0x117A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A68u, 0x117D78u, 0x117D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D80u;
label_117d80:
    // 0x117d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117D80u;
    {
        const bool branch_taken_0x117d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D80u;
        // 0x117d84: 0x3c14001f  lui         $s4, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d80) {
            ctx->pc = 0x117D94u;
            goto label_117d94;
        }
    }
    ctx->pc = 0x117D88u;
    // 0x117d88: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x117d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x117d8c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x117D8Cu;
    {
        const bool branch_taken_0x117d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D8Cu;
        // 0x117d90: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d8c) {
            ctx->pc = 0x117F18u;
            goto label_117f18;
        }
    }
    ctx->pc = 0x117D94u;
label_117d94:
    // 0x117d94: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x117d94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d98: 0x2692bd00  addiu       $s2, $s4, -0x4300
    ctx->pc = 0x117d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950144));
    // 0x117d9c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x117D9Cu;
    {
        const bool branch_taken_0x117d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D9Cu;
        // 0x117da0: 0xae93bd00  sw          $s3, -0x4300($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294950144), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d9c) {
            ctx->pc = 0x117EC8u;
            goto label_117ec8;
        }
    }
    ctx->pc = 0x117DA4u;
    // 0x117da4: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x117da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x117da8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x117DA8u;
    {
        const bool branch_taken_0x117da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DA8u;
        // 0x117dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117da8) {
            ctx->pc = 0x117EB4u;
            goto label_117eb4;
        }
    }
    ctx->pc = 0x117DB0u;
    // 0x117db0: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x117db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x117db4: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x117db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x117db8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x117db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x117dbc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x117DBCu;
    {
        const bool branch_taken_0x117dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DBCu;
        // 0x117dc0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117dbc) {
            ctx->pc = 0x117E28u;
            goto label_117e28;
        }
    }
    ctx->pc = 0x117DC4u;
    // 0x117dc4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x117dc8: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x117dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_117dcc:
    // 0x117dcc: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x117dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x117dd0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x117dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x117dd4: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x117dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x117dd8: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x117dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x117ddc: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x117ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x117de0: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x117de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x117de4: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x117de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x117de8: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x117de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x117dec: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x117decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117df0: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x117df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117df4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x117df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117df8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x117df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117dfc: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x117dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e00: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x117e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e04: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x117e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e08: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x117e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e0c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x117e10: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x117e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x117e14: 0x0  nop
    ctx->pc = 0x117e14u;
    // NOP
    // 0x117e18: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x117E18u;
    {
        const bool branch_taken_0x117e18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x117e18) {
            ctx->pc = 0x117DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117dcc;
        }
    }
    ctx->pc = 0x117E20u;
    // 0x117e20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x117E20u;
    {
        const bool branch_taken_0x117e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117e20) {
            ctx->pc = 0x117E64u;
            goto label_117e64;
        }
    }
    ctx->pc = 0x117E28u;
label_117e28:
    // 0x117e28: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x117e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x117e2c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x117e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_117e30:
    // 0x117e30: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x117e30u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x117e34: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x117e34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x117e38: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x117e3c: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x117e3cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x117e40: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x117e40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x117e44: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x117e44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x117e48: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x117e48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x117e4c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x117e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x117e50: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x117e54: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x117e58: 0x0  nop
    ctx->pc = 0x117e58u;
    // NOP
    // 0x117e5c: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x117E5Cu;
    {
        const bool branch_taken_0x117e5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x117e5c) {
            ctx->pc = 0x117E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117e30;
        }
    }
    ctx->pc = 0x117E64u;
label_117e64:
    // 0x117e64: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x117e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x117e68: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x117e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x117e6c: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x117e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x117e70: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x117e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x117e74: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x117e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x117e78: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x117e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x117e7c: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x117e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x117e80: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x117e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x117e84: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x117e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e88: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x117e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e8c: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x117e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e90: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x117e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e94: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x117e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e98: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x117e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x117e9c: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x117e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x117ea0: 0x26a3bd00  addiu       $v1, $s5, -0x4300
    ctx->pc = 0x117ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950144));
    // 0x117ea4: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x117ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x117ea8: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x117ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x117eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x117EACu;
    {
        const bool branch_taken_0x117eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EACu;
        // 0x117eb0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117eac) {
            ctx->pc = 0x117ED0u;
            goto label_117ed0;
        }
    }
    ctx->pc = 0x117EB4u;
label_117eb4:
    // 0x117eb4: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x117eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x117eb8: 0xc04a125  jal         func_128494
    ctx->pc = 0x117EB8u;
    SET_GPR_U32(ctx, 31, 0x117EC0u);
    ctx->pc = 0x117EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EB8u;
    // 0x117ebc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x117EB8u, 0x117EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EC0u;
label_117ec0:
    // 0x117ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117EC0u;
    {
        const bool branch_taken_0x117ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EC0u;
        // 0x117ec4: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ec0) {
            ctx->pc = 0x117ECCu;
            goto label_117ecc;
        }
    }
    ctx->pc = 0x117EC8u;
label_117ec8:
    // 0x117ec8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x117ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_117ecc:
    // 0x117ecc: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x117eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_117ed0:
    // 0x117ed0: 0x26b0bd00  addiu       $s0, $s5, -0x4300
    ctx->pc = 0x117ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950144));
    // 0x117ed4: 0x24a4bf00  addiu       $a0, $a1, -0x4100
    ctx->pc = 0x117ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950656));
    // 0x117ed8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117edc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x117edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x117ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ee4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x117ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ee8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x117ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x117eec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x117eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ef0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x117ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x117ef4: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x117EF4u;
    SET_GPR_U32(ctx, 31, 0x117EFCu);
    ctx->pc = 0x117EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EF4u;
    // 0x117ef8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x117EF4u, 0x117EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EFCu;
label_117efc:
    // 0x117efc: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117EFCu;
    {
        const bool branch_taken_0x117efc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117efc) {
            ctx->pc = 0x117F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117EFCu;
            // 0x117f00: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117F10u;
            goto label_117f10;
        }
    }
    ctx->pc = 0x117F04u;
    // 0x117f04: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x117f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x117f08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117F08u;
    {
        const bool branch_taken_0x117f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F08u;
        // 0x117f0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f08) {
            ctx->pc = 0x117F18u;
            goto label_117f18;
        }
    }
    ctx->pc = 0x117F10u;
label_117f10:
    // 0x117f10: 0x8e82bd00  lw          $v0, -0x4300($s4)
    ctx->pc = 0x117f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950144)));
    // 0x117f14: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x117f14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_117f18:
    // 0x117f18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x117f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117f1c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x117f1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117f20: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x117f20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117f24: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x117f24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117f28: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x117f28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117f2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117f30: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117f34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117f38: 0x3e00008  jr          $ra
    ctx->pc = 0x117F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F38u;
        // 0x117f3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F40u;
}
