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

// Function: sub_0031AE48
// Address: 0x31ae48 - 0x31aee0
void sub_0031AE48_0x31ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AE48_0x31ae48");
#endif

    switch (ctx->pc) {
        case 0x31ae98u: goto label_31ae98;
        case 0x31aea8u: goto label_31aea8;
        default: break;
    }

    ctx->pc = 0x31ae48u;

    // 0x31ae48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ae48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ae4c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31ae50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ae54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ae54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31ae5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31ae5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31ae64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31ae64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae68: 0x244212d8  addiu       $v0, $v0, 0x12D8
    ctx->pc = 0x31ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4824));
    // 0x31ae6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31ae70: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x31ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x31ae74: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x31ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x31ae78: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x31ae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae7c: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x31ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x31ae80: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x31ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x31ae84: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x31ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x31ae88: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31ae8c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x31ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x31ae90: 0xc0c6c2c  jal         func_31B0B0
    ctx->pc = 0x31AE90u;
    SET_GPR_U32(ctx, 31, 0x31AE98u);
    ctx->pc = 0x31AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE90u;
    // 0x31ae94: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0B0u, 0x31AE90u, 0x31AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE98u;
label_31ae98:
    // 0x31ae98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ae9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aea0: 0xc0c6ce2  jal         func_31B388
    ctx->pc = 0x31AEA0u;
    SET_GPR_U32(ctx, 31, 0x31AEA8u);
    ctx->pc = 0x31AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AEA0u;
    // 0x31aea4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B388u, 0x31AEA0u, 0x31AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AEA8u;
label_31aea8:
    // 0x31aea8: 0xfe000028  sd          $zero, 0x28($s0)
    ctx->pc = 0x31aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 0));
    // 0x31aeac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31aeb0: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x31aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x31aeb4: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x31aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x31aeb8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x31aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x31aebc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x31aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x31aec0: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x31aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x31aec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31aec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31aec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31aec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31aecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31aeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aed0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31aed4: 0x3e00008  jr          $ra
    ctx->pc = 0x31AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AED4u;
        // 0x31aed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AEDCu;
    // 0x31aedc: 0x0  nop
    ctx->pc = 0x31aedcu;
    // NOP
    ctx->pc = 0x31aee0u;
}
