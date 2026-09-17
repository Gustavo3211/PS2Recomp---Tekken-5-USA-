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

// Function: sub_002B7AB8
// Address: 0x2b7ab8 - 0x2b7b78
void sub_002B7AB8_0x2b7ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7AB8_0x2b7ab8");
#endif

    switch (ctx->pc) {
        case 0x2b7ae4u: goto label_2b7ae4;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b10u: goto label_2b7b10;
        case 0x2b7b28u: goto label_2b7b28;
        case 0x2b7b40u: goto label_2b7b40;
        default: break;
    }

    ctx->pc = 0x2b7ab8u;

    // 0x2b7ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b7abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7ac8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b7acc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b7accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ad0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b7ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b7ad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7ad8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b7ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b7adc: 0xc0ade98  jal         func_2B7A60
    ctx->pc = 0x2B7ADCu;
    SET_GPR_U32(ctx, 31, 0x2B7AE4u);
    ctx->pc = 0x2B7AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7ADCu;
    // 0x2b7ae0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A60u, 0x2B7ADCu, 0x2B7AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AE4u;
label_2b7ae4:
    // 0x2b7ae4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7ae8: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2b7ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b7aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7af0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b7af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7af4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2b7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b7af8: 0xc0adf30  jal         func_2B7CC0
    ctx->pc = 0x2B7AF8u;
    SET_GPR_U32(ctx, 31, 0x2B7B00u);
    ctx->pc = 0x2B7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7AF8u;
    // 0x2b7afc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7CC0u, 0x2B7AF8u, 0x2B7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B00u;
label_2b7b00:
    // 0x2b7b00: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B7B00u;
    {
        const bool branch_taken_0x2b7b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B00u;
        // 0x2b7b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b00) {
            ctx->pc = 0x2B7B54u;
            goto label_2b7b54;
        }
    }
    ctx->pc = 0x2B7B08u;
    // 0x2b7b08: 0xc0adefe  jal         func_2B7BF8
    ctx->pc = 0x2B7B08u;
    SET_GPR_U32(ctx, 31, 0x2B7B10u);
    ctx->pc = 0x2B7BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7BF8u, 0x2B7B08u, 0x2B7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B10u;
label_2b7b10:
    // 0x2b7b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b7b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b7b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b20: 0xc0adf04  jal         func_2B7C10
    ctx->pc = 0x2B7B20u;
    SET_GPR_U32(ctx, 31, 0x2B7B28u);
    ctx->pc = 0x2B7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B20u;
    // 0x2b7b24: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C10u, 0x2B7B20u, 0x2B7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B28u;
label_2b7b28:
    // 0x2b7b28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b7b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b7b38: 0xc0adf20  jal         func_2B7C80
    ctx->pc = 0x2B7B38u;
    SET_GPR_U32(ctx, 31, 0x2B7B40u);
    ctx->pc = 0x2B7B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B38u;
    // 0x2b7b3c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C80u, 0x2B7B38u, 0x2B7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B40u;
label_2b7b40:
    // 0x2b7b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7b44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b7b48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7b4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7B4Cu;
    {
        const bool branch_taken_0x2b7b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7b4c) {
            ctx->pc = 0x2B7B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7B4Cu;
            // 0x2b7b50: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7B54u;
            goto label_2b7b54;
        }
    }
    ctx->pc = 0x2B7B54u;
label_2b7b54:
    // 0x2b7b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7b5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b7b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b7b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7b68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b7b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B6Cu;
        // 0x2b7b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7B74u;
    // 0x2b7b74: 0x0  nop
    ctx->pc = 0x2b7b74u;
    // NOP
    ctx->pc = 0x2b7b78u;
}
