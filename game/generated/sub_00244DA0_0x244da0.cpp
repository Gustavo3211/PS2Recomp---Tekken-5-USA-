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

// Function: sub_00244DA0
// Address: 0x244da0 - 0x2450e0
void sub_00244DA0_0x244da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244DA0_0x244da0");
#endif

    switch (ctx->pc) {
        case 0x244dc4u: goto label_244dc4;
        case 0x244de4u: goto label_244de4;
        case 0x244e40u: goto label_244e40;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eccu: goto label_244ecc;
        case 0x244f28u: goto label_244f28;
        case 0x244fa0u: goto label_244fa0;
        case 0x245004u: goto label_245004;
        case 0x245080u: goto label_245080;
        case 0x245088u: goto label_245088;
        case 0x2450a0u: goto label_2450a0;
        case 0x2450c0u: goto label_2450c0;
        default: break;
    }

    ctx->pc = 0x244da0u;

    // 0x244da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244dac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x244dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x244db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244db4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244db8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x244dbc: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x244DBCu;
    SET_GPR_U32(ctx, 31, 0x244DC4u);
    ctx->pc = 0x244DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244DBCu;
    // 0x244dc0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x244DBCu, 0x244DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DC4u;
label_244dc4:
    // 0x244dc4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x244DC4u;
    {
        const bool branch_taken_0x244dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC4u;
        // 0x244dc8: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dc4) {
            ctx->pc = 0x244EA0u;
            goto label_244ea0;
        }
    }
    ctx->pc = 0x244DCCu;
    // 0x244dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244dd0: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x244dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x244dd4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x244dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x244dd8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x244dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x244ddc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x244DDCu;
    {
        const bool branch_taken_0x244ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DDCu;
        // 0x244de0: 0x24620080  addiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ddc) {
            ctx->pc = 0x244E40u;
            goto label_244e40;
        }
    }
    ctx->pc = 0x244DE4u;
label_244de4:
    // 0x244de4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x244de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x244de8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x244de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244dec: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x244decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x244df0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x244df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x244df4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x244df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x244df8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x244df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244dfc: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x244dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x244e00: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x244e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x244e04: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x244e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e08: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x244e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e0c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x244e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e10: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x244e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e14: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x244e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e18: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x244e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e1c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x244e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e20: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x244e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x244e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x244e28: 0x0  nop
    ctx->pc = 0x244e28u;
    // NOP
    // 0x244e2c: 0x0  nop
    ctx->pc = 0x244e2cu;
    // NOP
    // 0x244e30: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x244E30u;
    {
        const bool branch_taken_0x244e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E30u;
        // 0x244e34: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e30) {
            ctx->pc = 0x244DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244de4;
        }
    }
    ctx->pc = 0x244E38u;
    // 0x244e38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x244E38u;
    {
        const bool branch_taken_0x244e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e38) {
            ctx->pc = 0x244E74u;
            goto label_244e74;
        }
    }
    ctx->pc = 0x244E40u;
label_244e40:
    // 0x244e40: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x244e40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244e44: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x244e44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x244e48: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x244e48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244e4c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x244e4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x244e50: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x244e50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x244e54: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x244e54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x244e58: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x244e58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x244e5c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x244e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x244e60: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x244e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x244e64: 0x0  nop
    ctx->pc = 0x244e64u;
    // NOP
    // 0x244e68: 0x0  nop
    ctx->pc = 0x244e68u;
    // NOP
    // 0x244e6c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x244E6Cu;
    {
        const bool branch_taken_0x244e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E6Cu;
        // 0x244e70: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e6c) {
            ctx->pc = 0x244E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244e40;
        }
    }
    ctx->pc = 0x244E74u;
label_244e74:
    // 0x244e74: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x244e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x244e78: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x244e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x244e7c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x244e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x244e80: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x244e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244e84: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x244e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244e88: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x244e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e8c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x244e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e90: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x244e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e94: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x244e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244e98: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x244E98u;
    {
        const bool branch_taken_0x244e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E98u;
        // 0x244e9c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e98) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x244EA0u;
label_244ea0:
    // 0x244ea0: 0xc090f96  jal         func_243E58
    ctx->pc = 0x244EA0u;
    SET_GPR_U32(ctx, 31, 0x244EA8u);
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x244EA0u, 0x244EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EA8u;
label_244ea8:
    // 0x244ea8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x244EA8u;
    {
        const bool branch_taken_0x244ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EA8u;
        // 0x244eac: 0x3c030016  lui         $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ea8) {
            ctx->pc = 0x244F88u;
            goto label_244f88;
        }
    }
    ctx->pc = 0x244EB0u;
    // 0x244eb0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x244eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x244eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244eb8: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x244eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x244ebc: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x244ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x244ec0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x244ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x244ec4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x244EC4u;
    {
        const bool branch_taken_0x244ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EC4u;
        // 0x244ec8: 0x24620080  addiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ec4) {
            ctx->pc = 0x244F28u;
            goto label_244f28;
        }
    }
    ctx->pc = 0x244ECCu;
label_244ecc:
    // 0x244ecc: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x244eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x244ed0: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x244ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x244ed4: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x244ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x244ed8: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x244ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244edc: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x244edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x244ee0: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x244ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x244ee4: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x244ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x244ee8: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x244ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244eec: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x244eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244ef0: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x244ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244ef4: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x244ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244ef8: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x244ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244efc: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x244efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f00: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x244f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f04: 0xb087001f  sdl         $a3, 0x1F($a0)
    ctx->pc = 0x244f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f08: 0xb4870018  sdr         $a3, 0x18($a0)
    ctx->pc = 0x244f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f0c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x244f10: 0x0  nop
    ctx->pc = 0x244f10u;
    // NOP
    // 0x244f14: 0x0  nop
    ctx->pc = 0x244f14u;
    // NOP
    // 0x244f18: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x244F18u;
    {
        const bool branch_taken_0x244f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F18u;
        // 0x244f1c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f18) {
            ctx->pc = 0x244ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244ecc;
        }
    }
    ctx->pc = 0x244F20u;
    // 0x244f20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x244F20u;
    {
        const bool branch_taken_0x244f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244f20) {
            ctx->pc = 0x244F5Cu;
            goto label_244f5c;
        }
    }
    ctx->pc = 0x244F28u;
label_244f28:
    // 0x244f28: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x244f28u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244f2c: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x244f2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x244f30: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x244f30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244f34: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x244f34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x244f38: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x244f38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x244f3c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x244f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x244f40: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x244f40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x244f44: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x244f44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x244f48: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x244f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x244f4c: 0x0  nop
    ctx->pc = 0x244f4cu;
    // NOP
    // 0x244f50: 0x0  nop
    ctx->pc = 0x244f50u;
    // NOP
    // 0x244f54: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x244F54u;
    {
        const bool branch_taken_0x244f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F54u;
        // 0x244f58: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f54) {
            ctx->pc = 0x244F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244f28;
        }
    }
    ctx->pc = 0x244F5Cu;
label_244f5c:
    // 0x244f5c: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x244f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x244f60: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x244f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x244f64: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x244f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x244f68: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x244f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x244f6c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x244f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244f70: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x244f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f74: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x244f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f78: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x244f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f7c: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x244f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244f80: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x244F80u;
    {
        const bool branch_taken_0x244f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F80u;
        // 0x244f84: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f80) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x244F88u;
label_244f88:
    // 0x244f88: 0x2463683c  addiu       $v1, $v1, 0x683C
    ctx->pc = 0x244f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26684));
    // 0x244f8c: 0x2231025  or          $v0, $s1, $v1
    ctx->pc = 0x244f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x244f90: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x244f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x244f94: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x244F94u;
    {
        const bool branch_taken_0x244f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F94u;
        // 0x244f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f94) {
            ctx->pc = 0x245000u;
            goto label_245000;
        }
    }
    ctx->pc = 0x244F9Cu;
    // 0x244f9c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_244fa0:
    // 0x244fa0: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x244fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x244fa4: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x244fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x244fa8: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x244fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x244fac: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x244facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x244fb0: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x244fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x244fb4: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x244fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x244fb8: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x244fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x244fbc: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x244fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x244fc0: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x244fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fc4: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x244fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fc8: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x244fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fcc: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x244fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fd0: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x244fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fd4: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x244fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fd8: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x244fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fdc: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x244fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244fe0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x244fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x244fe4: 0x0  nop
    ctx->pc = 0x244fe4u;
    // NOP
    // 0x244fe8: 0x0  nop
    ctx->pc = 0x244fe8u;
    // NOP
    // 0x244fec: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x244FECu;
    {
        const bool branch_taken_0x244fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FECu;
        // 0x244ff0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fec) {
            ctx->pc = 0x244FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244fa0;
        }
    }
    ctx->pc = 0x244FF4u;
    // 0x244ff4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x244FF4u;
    {
        const bool branch_taken_0x244ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ff4) {
            ctx->pc = 0x245038u;
            goto label_245038;
        }
    }
    ctx->pc = 0x244FFCu;
    // 0x244ffc: 0x0  nop
    ctx->pc = 0x244ffcu;
    // NOP
label_245000:
    // 0x245000: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_245004:
    // 0x245004: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x245004u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245008: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x245008u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24500c: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x24500cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x245010: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x245010u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x245014: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x245014u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x245018: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x245018u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x24501c: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x24501cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x245020: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x245020u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x245024: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x245028: 0x0  nop
    ctx->pc = 0x245028u;
    // NOP
    // 0x24502c: 0x0  nop
    ctx->pc = 0x24502cu;
    // NOP
    // 0x245030: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x245030u;
    {
        const bool branch_taken_0x245030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x245034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245030u;
        // 0x245034: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245030) {
            ctx->pc = 0x245004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245004;
        }
    }
    ctx->pc = 0x245038u;
label_245038:
    // 0x245038: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x245038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24503c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x24503cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x245040: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x245040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x245044: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x245044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x245048: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x245048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24504c: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x24504cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245050: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x245050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245054: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x245054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x245058: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x245058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24505c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x24505cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x245060: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x245060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x245064: 0x24436690  addiu       $v1, $v0, 0x6690
    ctx->pc = 0x245064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x245068: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x245068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1667ACu));
    // 0x24506c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24506Cu;
    {
        const bool branch_taken_0x24506c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x245070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24506Cu;
        // 0x245070: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24506c) {
            ctx->pc = 0x2450B0u;
            goto label_2450b0;
        }
    }
    ctx->pc = 0x245074u;
    // 0x245074: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x245074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24507c: 0x0  nop
    ctx->pc = 0x24507cu;
    // NOP
label_245080:
    // 0x245080: 0xc0911e4  jal         func_244790
    ctx->pc = 0x245080u;
    SET_GPR_U32(ctx, 31, 0x245088u);
    ctx->pc = 0x245084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245080u;
    // 0x245084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244790u, 0x245080u, 0x245088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245088u;
label_245088:
    // 0x245088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24508c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245090: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x245090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x245094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245098: 0xc091282  jal         func_244A08
    ctx->pc = 0x245098u;
    SET_GPR_U32(ctx, 31, 0x2450A0u);
    ctx->pc = 0x24509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245098u;
    // 0x24509c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x244A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244A08u, 0x245098u, 0x2450A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450A0u;
label_2450a0:
    // 0x2450a0: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x2450a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2450a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2450a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2450a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2450A8u;
    {
        const bool branch_taken_0x2450a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A8u;
        // 0x2450ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a8) {
            ctx->pc = 0x245080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245080;
        }
    }
    ctx->pc = 0x2450B0u;
label_2450b0:
    // 0x2450b0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2450B0u;
    {
        const bool branch_taken_0x2450b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B0u;
        // 0x2450b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450b0) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x2450B8u;
    // 0x2450b8: 0xc0912f2  jal         func_244BC8
    ctx->pc = 0x2450B8u;
    SET_GPR_U32(ctx, 31, 0x2450C0u);
    ctx->pc = 0x2450BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450B8u;
    // 0x2450bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244BC8u, 0x2450B8u, 0x2450C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450C0u;
label_2450c0:
    // 0x2450c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2450c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2450c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2450c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2450c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2450c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2450cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2450ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2450d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2450d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2450d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2450D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2450D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450D4u;
        // 0x2450d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2450D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2450DCu;
    // 0x2450dc: 0x0  nop
    ctx->pc = 0x2450dcu;
    // NOP
    ctx->pc = 0x2450e0u;
}
