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

// Function: sub_00233B18
// Address: 0x233b18 - 0x233bb0
void sub_00233B18_0x233b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233B18_0x233b18");
#endif

    switch (ctx->pc) {
        case 0x233b4cu: goto label_233b4c;
        case 0x233b78u: goto label_233b78;
        default: break;
    }

    ctx->pc = 0x233b18u;

    // 0x233b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x233b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x233b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233b28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x233b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233b30: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x233b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x233b38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x233b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x233b40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x233b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x233b44: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x233B44u;
    SET_GPR_U32(ctx, 31, 0x233B4Cu);
    ctx->pc = 0x233B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B44u;
    // 0x233b48: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x233B44u, 0x233B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B4Cu;
label_233b4c:
    // 0x233b4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x233b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233b50: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x233b50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
    // 0x233b54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x233b54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x233b58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b5c: 0xae920028  sw          $s2, 0x28($s4)
    ctx->pc = 0x233b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 18));
    // 0x233b60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x233b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b68: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x233b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x233b6c: 0xae90002c  sw          $s0, 0x2C($s4)
    ctx->pc = 0x233b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 16));
    // 0x233b70: 0xc08cb7a  jal         func_232DE8
    ctx->pc = 0x233B70u;
    SET_GPR_U32(ctx, 31, 0x233B78u);
    ctx->pc = 0x233B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B70u;
    // 0x233b74: 0xae820030  sw          $v0, 0x30($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DE8u, 0x233B70u, 0x233B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B78u;
label_233b78:
    // 0x233b78: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x233b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x233b7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x233b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x233b80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x233B80u;
    {
        const bool branch_taken_0x233b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B80u;
        // 0x233b84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b80) {
            ctx->pc = 0x233B8Cu;
            goto label_233b8c;
        }
    }
    ctx->pc = 0x233B88u;
    // 0x233b88: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x233b88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_233b8c:
    // 0x233b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233b94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233b98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233b9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233ba0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x233BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BA4u;
        // 0x233ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233BACu;
    // 0x233bac: 0x0  nop
    ctx->pc = 0x233bacu;
    // NOP
    ctx->pc = 0x233bb0u;
}
