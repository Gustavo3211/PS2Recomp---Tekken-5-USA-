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

// Function: sub_0022EC08
// Address: 0x22ec08 - 0x22eca0
void sub_0022EC08_0x22ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EC08_0x22ec08");
#endif

    switch (ctx->pc) {
        case 0x22ec34u: goto label_22ec34;
        case 0x22ec6cu: goto label_22ec6c;
        case 0x22ec74u: goto label_22ec74;
        case 0x22ec84u: goto label_22ec84;
        default: break;
    }

    ctx->pc = 0x22ec08u;

    // 0x22ec08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ec0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ec10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ec10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22ec18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22ec18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22ec20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ec20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ec28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ec2c: 0xc09476a  jal         func_251DA8
    ctx->pc = 0x22EC2Cu;
    SET_GPR_U32(ctx, 31, 0x22EC34u);
    ctx->pc = 0x22EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC2Cu;
    // 0x22ec30: 0x9650003c  lhu         $s0, 0x3C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251DA8u, 0x22EC2Cu, 0x22EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC34u;
label_22ec34:
    // 0x22ec34: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EC34u;
    {
        const bool branch_taken_0x22ec34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC34u;
        // 0x22ec38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec34) {
            ctx->pc = 0x22EC50u;
            goto label_22ec50;
        }
    }
    ctx->pc = 0x22EC3Cu;
    // 0x22ec3c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22EC3Cu;
    {
        const bool branch_taken_0x22ec3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC3Cu;
        // 0x22ec40: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec3c) {
            ctx->pc = 0x22EC60u;
            goto label_22ec60;
        }
    }
    ctx->pc = 0x22EC44u;
    // 0x22ec44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22EC44u;
    {
        const bool branch_taken_0x22ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec44) {
            ctx->pc = 0x22EC64u;
            goto label_22ec64;
        }
    }
    ctx->pc = 0x22EC4Cu;
    // 0x22ec4c: 0x0  nop
    ctx->pc = 0x22ec4cu;
    // NOP
label_22ec50:
    // 0x22ec50: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22ec54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22EC54u;
    {
        const bool branch_taken_0x22ec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC54u;
        // 0x22ec58: 0x24519a50  addiu       $s1, $v0, -0x65B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ec54) {
            ctx->pc = 0x22EC64u;
            goto label_22ec64;
        }
    }
    ctx->pc = 0x22EC5Cu;
    // 0x22ec5c: 0x0  nop
    ctx->pc = 0x22ec5cu;
    // NOP
label_22ec60:
    // 0x22ec60: 0x24519a60  addiu       $s1, $v0, -0x65A0
    ctx->pc = 0x22ec60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941280));
label_22ec64:
    // 0x22ec64: 0xc08ba9e  jal         func_22EA78
    ctx->pc = 0x22EC64u;
    SET_GPR_U32(ctx, 31, 0x22EC6Cu);
    ctx->pc = 0x22EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC64u;
    // 0x22ec68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA78u, 0x22EC64u, 0x22EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC6Cu;
label_22ec6c:
    // 0x22ec6c: 0xc086338  jal         func_218CE0
    ctx->pc = 0x22EC6Cu;
    SET_GPR_U32(ctx, 31, 0x22EC74u);
    ctx->pc = 0x22EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC6Cu;
    // 0x22ec70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218CE0u, 0x22EC6Cu, 0x22EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC74u;
label_22ec74:
    // 0x22ec74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22ec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec7c: 0xc08bab0  jal         func_22EAC0
    ctx->pc = 0x22EC7Cu;
    SET_GPR_U32(ctx, 31, 0x22EC84u);
    ctx->pc = 0x22EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EC7Cu;
    // 0x22ec80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EAC0u, 0x22EC7Cu, 0x22EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC84u;
label_22ec84:
    // 0x22ec84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ec84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ec88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ec88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ec8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ec8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ec90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22ec90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ec94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ec98: 0x3e00008  jr          $ra
    ctx->pc = 0x22EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EC98u;
        // 0x22ec9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ECA0u;
}
