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

// Function: sub_00117968
// Address: 0x117968 - 0x117a68
void sub_00117968_0x117968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117968_0x117968");
#endif

    switch (ctx->pc) {
        case 0x117990u: goto label_117990;
        case 0x1179a4u: goto label_1179a4;
        case 0x1179e8u: goto label_1179e8;
        case 0x117a28u: goto label_117a28;
        default: break;
    }

    ctx->pc = 0x117968u;

    // 0x117968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11796c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x117970: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x117970u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x117974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x117978: 0x8e4211b0  lw          $v0, 0x11B0($s2)
    ctx->pc = 0x117978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1311B0u));
    // 0x11797c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x117980: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x117980u;
    {
        const bool branch_taken_0x117980 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117980u;
        // 0x117984: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117980) {
            ctx->pc = 0x117A4Cu;
            goto label_117a4c;
        }
    }
    ctx->pc = 0x117988u;
    // 0x117988: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x117988u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x11798c: 0x2630bf00  addiu       $s0, $s1, -0x4100
    ctx->pc = 0x11798cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950656));
label_117990:
    // 0x117990: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x117990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x117994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117998: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x117998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x11799c: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x11799Cu;
    SET_GPR_U32(ctx, 31, 0x1179A4u);
    ctx->pc = 0x1179A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11799Cu;
    // 0x1179a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x11799Cu, 0x1179A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179A4u;
label_1179a4:
    // 0x1179a4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1179A4u;
    {
        const bool branch_taken_0x1179a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1179a4) {
            ctx->pc = 0x1179A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179A4u;
            // 0x1179a8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179B4u;
            goto label_1179b4;
        }
    }
    ctx->pc = 0x1179ACu;
    // 0x1179ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1179ACu;
    {
        const bool branch_taken_0x1179ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179ACu;
        // 0x1179b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179ac) {
            ctx->pc = 0x117A50u;
            goto label_117a50;
        }
    }
    ctx->pc = 0x1179B4u;
label_1179b4:
    // 0x1179b4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1179B4u;
    {
        const bool branch_taken_0x1179b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B4u;
        // 0x1179b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179b4) {
            ctx->pc = 0x117A1Cu;
            goto label_117a1c;
        }
    }
    ctx->pc = 0x1179BCu;
    // 0x1179bc: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x1179bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x1179c0: 0xae4011b0  sw          $zero, 0x11B0($s2)
    ctx->pc = 0x1179c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4528), GPR_U32(ctx, 0));
    // 0x1179c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1179c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1179c8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1179c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1179cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1179ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1179d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d8: 0x2629bd00  addiu       $t1, $s1, -0x4300
    ctx->pc = 0x1179d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950144));
    // 0x1179dc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1179dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1179e0: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1179E0u;
    SET_GPR_U32(ctx, 31, 0x1179E8u);
    ctx->pc = 0x1179E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179E0u;
    // 0x1179e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1179E0u, 0x1179E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179E8u;
label_1179e8:
    // 0x1179e8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1179E8u;
    {
        const bool branch_taken_0x1179e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179E8u;
        // 0x1179ec: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179e8) {
            ctx->pc = 0x1179FCu;
            goto label_1179fc;
        }
    }
    ctx->pc = 0x1179F0u;
    // 0x1179f0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1179f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1179f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1179F4u;
    {
        const bool branch_taken_0x1179f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179F4u;
        // 0x1179f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179f4) {
            ctx->pc = 0x117A50u;
            goto label_117a50;
        }
    }
    ctx->pc = 0x1179FCu;
label_1179fc:
    // 0x1179fc: 0x2627bd00  addiu       $a3, $s1, -0x4300
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950144));
    // 0x117a00: 0x2466bf28  addiu       $a2, $v1, -0x40D8
    ctx->pc = 0x117a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950696));
    // 0x117a04: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x117a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x117a08: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x117a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x117a0c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x117a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x117a10: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x117a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x117a14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x117A14u;
    {
        const bool branch_taken_0x117a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A14u;
        // 0x117a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a14) {
            ctx->pc = 0x117A50u;
            goto label_117a50;
        }
    }
    ctx->pc = 0x117A1Cu;
label_117a1c:
    // 0x117a1c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x117a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x117a20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117a24: 0x0  nop
    ctx->pc = 0x117a24u;
    // NOP
label_117a28:
    // 0x117a28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117a2c: 0x0  nop
    ctx->pc = 0x117a2cu;
    // NOP
    // 0x117a30: 0x0  nop
    ctx->pc = 0x117a30u;
    // NOP
    // 0x117a34: 0x0  nop
    ctx->pc = 0x117a34u;
    // NOP
    // 0x117a38: 0x0  nop
    ctx->pc = 0x117a38u;
    // NOP
    // 0x117a3c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117A3Cu;
    {
        const bool branch_taken_0x117a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x117a3c) {
            ctx->pc = 0x117A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117a28;
        }
    }
    ctx->pc = 0x117A44u;
    // 0x117a44: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x117A44u;
    {
        const bool branch_taken_0x117a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A44u;
        // 0x117a48: 0x2630bf00  addiu       $s0, $s1, -0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a44) {
            ctx->pc = 0x117990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117990;
        }
    }
    ctx->pc = 0x117A4Cu;
label_117a4c:
    // 0x117a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117a50:
    // 0x117a50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117a54: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a58: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a60: 0x3e00008  jr          $ra
    ctx->pc = 0x117A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A60u;
        // 0x117a64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A68u;
}
