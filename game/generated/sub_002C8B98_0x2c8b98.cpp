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

// Function: sub_002C8B98
// Address: 0x2c8b98 - 0x2c8c10
void sub_002C8B98_0x2c8b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8B98_0x2c8b98");
#endif

    switch (ctx->pc) {
        case 0x2c8bc0u: goto label_2c8bc0;
        default: break;
    }

    ctx->pc = 0x2c8b98u;

    // 0x2c8b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8b9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c8b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c8ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8ba8: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x2c8ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c8bac: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2c8bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2c8bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c8bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c8bb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c8bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2c8bb8: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8BB8u;
    SET_GPR_U32(ctx, 31, 0x2C8BC0u);
    ctx->pc = 0x2C8BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8BB8u;
    // 0x2c8bbc: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8BB8u, 0x2C8BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BC0u;
label_2c8bc0:
    // 0x2c8bc0: 0x3c120018  lui         $s2, 0x18
    ctx->pc = 0x2c8bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)24 << 16));
    // 0x2c8bc4: 0x26528dc8  addiu       $s2, $s2, -0x7238
    ctx->pc = 0x2c8bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938056));
    // 0x2c8bc8: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2c8bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2c8bcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8BCCu;
    {
        const bool branch_taken_0x2c8bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BCCu;
        // 0x2c8bd0: 0x2111823  subu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bcc) {
            ctx->pc = 0x2C8BE0u;
            goto label_2c8be0;
        }
    }
    ctx->pc = 0x2C8BD4u;
    // 0x2c8bd4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2c8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2c8bd8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8BD8u;
    {
        const bool branch_taken_0x2c8bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bd8) {
            ctx->pc = 0x2C8BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BD8u;
            // 0x2c8bdc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8BF8u;
            goto label_2c8bf8;
        }
    }
    ctx->pc = 0x2C8BE0u;
label_2c8be0:
    // 0x2c8be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8be4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c8be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8bec: 0x90428d4e  lbu         $v0, -0x72B2($v0)
    ctx->pc = 0x2c8becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294937934)));
    // 0x2c8bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8BF0u;
    {
        const bool branch_taken_0x2c8bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BF0u;
        // 0x2c8bf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bf0) {
            ctx->pc = 0x2C8BFCu;
            goto label_2c8bfc;
        }
    }
    ctx->pc = 0x2C8BF8u;
label_2c8bf8:
    // 0x2c8bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8bfc:
    // 0x2c8bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c8bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c8c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8c04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c8c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c8c08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C08u;
        // 0x2c8c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8C10u;
}
