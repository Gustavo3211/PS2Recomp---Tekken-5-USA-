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

// Function: sub_0050CB60
// Address: 0x50cb60 - 0x50cc50
void sub_0050CB60_0x50cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050CB60_0x50cb60");
#endif

    switch (ctx->pc) {
        case 0x50cc18u: goto label_50cc18;
        case 0x50cc20u: goto label_50cc20;
        default: break;
    }

    ctx->pc = 0x50cb60u;

    // 0x50cb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50cb64: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x50cb64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cb68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50cb6c: 0x250600e4  addiu       $a2, $t0, 0xE4
    ctx->pc = 0x50cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 228));
    // 0x50cb70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50cb74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50cb78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x50cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x50cb7c: 0x850200fa  lh          $v0, 0xFA($t0)
    ctx->pc = 0x50cb7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 250)));
    // 0x50cb80: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x50CB80u;
    {
        const bool branch_taken_0x50cb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CB80u;
        // 0x50cb84: 0x250700e8  addiu       $a3, $t0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cb80) {
            ctx->pc = 0x50CBD0u;
            goto label_50cbd0;
        }
    }
    ctx->pc = 0x50CB88u;
    // 0x50cb88: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x50cb88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x50cb8c: 0x850200ec  lh          $v0, 0xEC($t0)
    ctx->pc = 0x50cb8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 236)));
    // 0x50cb90: 0x2645c650  addiu       $a1, $s2, -0x39B0
    ctx->pc = 0x50cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952528));
    // 0x50cb94: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50cb94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50cb98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC650u));
    // 0x50cb9c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50cba0: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x50cba0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x50cba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cba8: 0x2626c654  addiu       $a2, $s1, -0x39AC
    ctx->pc = 0x50cba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952532));
    // 0x50cbac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50cbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50cbb0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x50cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50cbb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50cbb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50cbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50cbbc: 0x850200ee  lh          $v0, 0xEE($t0)
    ctx->pc = 0x50cbbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 238)));
    // 0x50cbc0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50cbc4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50cbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50cbc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x50CBC8u;
    {
        const bool branch_taken_0x50cbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CBC8u;
        // 0x50cbcc: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cbc8) {
            ctx->pc = 0x50CC20u;
            goto label_50cc20;
        }
    }
    ctx->pc = 0x50CBD0u;
label_50cbd0:
    // 0x50cbd0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50cbd4: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x50cbd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x50cbd8: 0x2645c650  addiu       $a1, $s2, -0x39B0
    ctx->pc = 0x50cbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952528));
    // 0x50cbdc: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x50cbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x50cbe0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50cbe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC650u, _value); } while (0);
    // 0x50cbe4: 0x2630c654  addiu       $s0, $s1, -0x39AC
    ctx->pc = 0x50cbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952532));
    // 0x50cbe8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x50cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cbec: 0x8d0200f0  lw          $v0, 0xF0($t0)
    ctx->pc = 0x50cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x50cbf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50cbf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50cbf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC650u, _value); } while (0);
    // 0x50cbf8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50cbfc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50cc00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50cc00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC654u, _value); } while (0);
    // 0x50cc04: 0x8d0300f4  lw          $v1, 0xF4($t0)
    ctx->pc = 0x50cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 244)));
    // 0x50cc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50cc0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50cc0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC654u, _value); } while (0);
    // 0x50cc10: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50CC10u;
    SET_GPR_U32(ctx, 31, 0x50CC18u);
    ctx->pc = 0x50CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CC10u;
    // 0x50cc14: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50CC10u, 0x50CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CC18u;
label_50cc18:
    // 0x50cc18: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50CC18u;
    SET_GPR_U32(ctx, 31, 0x50CC20u);
    ctx->pc = 0x50CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CC18u;
    // 0x50cc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50CC18u, 0x50CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CC20u;
label_50cc20:
    // 0x50cc20: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50cc24: 0x8646c650  lh          $a2, -0x39B0($s2)
    ctx->pc = 0x50cc24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294952528)));
    // 0x50cc28: 0x8627c654  lh          $a3, -0x39AC($s1)
    ctx->pc = 0x50cc28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294952532)));
    // 0x50cc2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50cc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cc30: 0x8445c658  lh          $a1, -0x39A8($v0)
    ctx->pc = 0x50cc30u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x8EC658u));
    // 0x50cc34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50cc34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50cc38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50cc38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50cc3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50cc3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50cc40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x50cc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50cc44: 0x8144526  j           func_511498
    ctx->pc = 0x50CC44u;
    ctx->pc = 0x50CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CC44u;
    // 0x50cc48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511498u, 0x50CC44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50CC4Cu;
    // 0x50cc4c: 0x0  nop
    ctx->pc = 0x50cc4cu;
    // NOP
    ctx->pc = 0x50cc50u;
}
