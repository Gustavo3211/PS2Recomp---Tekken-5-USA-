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

// Function: sub_00346990
// Address: 0x346990 - 0x346a80
void sub_00346990_0x346990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346990_0x346990");
#endif

    switch (ctx->pc) {
        case 0x3469d8u: goto label_3469d8;
        case 0x346a20u: goto label_346a20;
        case 0x346a44u: goto label_346a44;
        case 0x346a60u: goto label_346a60;
        default: break;
    }

    ctx->pc = 0x346990u;

    // 0x346990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x346994: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x346994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x346998: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x346998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x34699c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3469a0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3469a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3469a4: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x3469a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3469a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3469a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3469ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3469acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3469b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3469b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3469b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3469b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3469bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3469bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3469c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3469c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3469c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3469c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3469ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3469d0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3469d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3469d4: 0x0  nop
    ctx->pc = 0x3469d4u;
    // NOP
label_3469d8:
    // 0x3469d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3469d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3469dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3469DCu;
    {
        const bool branch_taken_0x3469dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3469E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469DCu;
        // 0x3469e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469dc) {
            ctx->pc = 0x3469F0u;
            goto label_3469f0;
        }
    }
    ctx->pc = 0x3469E4u;
    // 0x3469e4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3469e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3469e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3469E8u;
    {
        const bool branch_taken_0x3469e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469E8u;
        // 0x3469ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469e8) {
            ctx->pc = 0x346A08u;
            goto label_346a08;
        }
    }
    ctx->pc = 0x3469F0u;
label_3469f0:
    // 0x3469f0: 0x24a50c00  addiu       $a1, $a1, 0xC00
    ctx->pc = 0x3469f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
    // 0x3469f4: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3469f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3469f8: 0x0  nop
    ctx->pc = 0x3469f8u;
    // NOP
    // 0x3469fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3469FCu;
    {
        const bool branch_taken_0x3469fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469FCu;
        // 0x346a00: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469fc) {
            ctx->pc = 0x3469D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3469d8;
        }
    }
    ctx->pc = 0x346A04u;
    // 0x346a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x346a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346a08:
    // 0x346a08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x346a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x346a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a18: 0xc0d25b4  jal         func_3496D0
    ctx->pc = 0x346A18u;
    SET_GPR_U32(ctx, 31, 0x346A20u);
    ctx->pc = 0x346A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A18u;
    // 0x346a1c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496D0u, 0x346A18u, 0x346A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A20u;
label_346a20:
    // 0x346a20: 0x9223001e  lbu         $v1, 0x1E($s1)
    ctx->pc = 0x346a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x346a24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x346a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a28: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x346a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x346a2c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346A2Cu;
    {
        const bool branch_taken_0x346a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x346A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A2Cu;
        // 0x346a30: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a2c) {
            ctx->pc = 0x346A48u;
            goto label_346a48;
        }
    }
    ctx->pc = 0x346A34u;
    // 0x346a34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x346a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a38: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x346a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a3c: 0xc0d242c  jal         func_3490B0
    ctx->pc = 0x346A3Cu;
    SET_GPR_U32(ctx, 31, 0x346A44u);
    ctx->pc = 0x346A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A3Cu;
    // 0x346a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490B0u, 0x346A3Cu, 0x346A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A44u;
label_346a44:
    // 0x346a44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x346a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346a48:
    // 0x346a48: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x346a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a54: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x346a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a58: 0xc0d2d28  jal         func_34B4A0
    ctx->pc = 0x346A58u;
    SET_GPR_U32(ctx, 31, 0x346A60u);
    ctx->pc = 0x346A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A58u;
    // 0x346a5c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B4A0u, 0x346A58u, 0x346A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A60u;
label_346a60:
    // 0x346a60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x346a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346a64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x346a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346a68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x346a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346a6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x346a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346a70: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x346a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346a74: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x346a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x346a78: 0x3e00008  jr          $ra
    ctx->pc = 0x346A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A78u;
        // 0x346a7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346A80u;
}
