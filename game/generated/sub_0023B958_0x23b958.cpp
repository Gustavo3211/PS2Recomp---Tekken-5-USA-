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

// Function: sub_0023B958
// Address: 0x23b958 - 0x23ba10
void sub_0023B958_0x23b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B958_0x23b958");
#endif

    switch (ctx->pc) {
        case 0x23b990u: goto label_23b990;
        case 0x23b9a4u: goto label_23b9a4;
        default: break;
    }

    ctx->pc = 0x23b958u;

    // 0x23b958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b964: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23b964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b968: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23b96c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b970: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23b974: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x23b974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23b978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23b97c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23b980: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b984: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x23b984u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x23b988: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x23b98c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x23b98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_23b990:
    // 0x23b990: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B990u;
    {
        const bool branch_taken_0x23b990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b990) {
            ctx->pc = 0x23B9B0u;
            goto label_23b9b0;
        }
    }
    ctx->pc = 0x23B998u;
    // 0x23b998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b99c: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x23B99Cu;
    SET_GPR_U32(ctx, 31, 0x23B9A4u);
    ctx->pc = 0x23B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B99Cu;
    // 0x23b9a0: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x23B99Cu, 0x23B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9A4u;
label_23b9a4:
    // 0x23b9a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B9A4u;
    {
        const bool branch_taken_0x23b9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A4u;
        // 0x23b9a8: 0x233102a  slt         $v0, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9a4) {
            ctx->pc = 0x23B990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b990;
        }
    }
    ctx->pc = 0x23B9ACu;
    // 0x23b9ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23b9acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b9b0:
    // 0x23b9b0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x23b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x23b9b4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x23B9B4u;
    {
        const bool branch_taken_0x23b9b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9B4u;
        // 0x23b9b8: 0xae540008  sw          $s4, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9b4) {
            ctx->pc = 0x23B9E0u;
            goto label_23b9e0;
        }
    }
    ctx->pc = 0x23B9BCu;
    // 0x23b9bc: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x23b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b9c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b9c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b9c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x23B9C8u;
    {
        const bool branch_taken_0x23b9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9c8) {
            ctx->pc = 0x23B9F0u;
            goto label_23b9f0;
        }
    }
    ctx->pc = 0x23B9D0u;
    // 0x23b9d0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23b9d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B9D4u;
    {
        const bool branch_taken_0x23b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9D4u;
        // 0x23b9d8: 0xc440d754  lwc1        $f0, -0x28AC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9d4) {
            ctx->pc = 0x23B9E8u;
            goto label_23b9e8;
        }
    }
    ctx->pc = 0x23B9DCu;
    // 0x23b9dc: 0x0  nop
    ctx->pc = 0x23b9dcu;
    // NOP
label_23b9e0:
    // 0x23b9e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23b9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b9e8:
    // 0x23b9e8: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x23b9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x23b9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b9f0:
    // 0x23b9f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b9f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b9f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b9fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ba00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23ba00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ba04: 0x3e00008  jr          $ra
    ctx->pc = 0x23BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA04u;
        // 0x23ba08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BA0Cu;
    // 0x23ba0c: 0x0  nop
    ctx->pc = 0x23ba0cu;
    // NOP
    ctx->pc = 0x23ba10u;
}
