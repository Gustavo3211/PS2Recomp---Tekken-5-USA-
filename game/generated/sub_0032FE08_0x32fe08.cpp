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

// Function: sub_0032FE08
// Address: 0x32fe08 - 0x32fe60
void sub_0032FE08_0x32fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FE08_0x32fe08");
#endif

    switch (ctx->pc) {
        case 0x32fe08u: goto label_32fe08;
        case 0x32fe0cu: goto label_32fe0c;
        case 0x32fe10u: goto label_32fe10;
        case 0x32fe14u: goto label_32fe14;
        case 0x32fe18u: goto label_32fe18;
        case 0x32fe1cu: goto label_32fe1c;
        case 0x32fe20u: goto label_32fe20;
        case 0x32fe24u: goto label_32fe24;
        case 0x32fe28u: goto label_32fe28;
        case 0x32fe2cu: goto label_32fe2c;
        case 0x32fe30u: goto label_32fe30;
        case 0x32fe34u: goto label_32fe34;
        case 0x32fe38u: goto label_32fe38;
        case 0x32fe3cu: goto label_32fe3c;
        case 0x32fe40u: goto label_32fe40;
        case 0x32fe44u: goto label_32fe44;
        case 0x32fe48u: goto label_32fe48;
        case 0x32fe4cu: goto label_32fe4c;
        case 0x32fe50u: goto label_32fe50;
        case 0x32fe54u: goto label_32fe54;
        case 0x32fe58u: goto label_32fe58;
        case 0x32fe5cu: goto label_32fe5c;
        default: break;
    }

    ctx->pc = 0x32fe08u;

label_32fe08:
    // 0x32fe08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32fe0c:
    // 0x32fe0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32fe10:
    // 0x32fe10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_32fe14:
    // 0x32fe14: 0xc0c8864  jal         func_322190
label_32fe18:
    if (ctx->pc == 0x32FE18u) {
        ctx->pc = 0x32FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE14u;
        // 0x32fe18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE1Cu;
        goto label_32fe1c;
    }
    ctx->pc = 0x32FE14u;
    SET_GPR_U32(ctx, 31, 0x32FE1Cu);
    ctx->pc = 0x32FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE14u;
    // 0x32fe18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x32FE14u, 0x32FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE1Cu;
label_32fe1c:
    // 0x32fe1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32fe1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32fe20:
    // 0x32fe20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32fe24:
    // 0x32fe24: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x32fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32fe28:
    // 0x32fe28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32fe28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32fe2c:
    // 0x32fe2c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x32fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_32fe30:
    // 0x32fe30: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32fe30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32fe34:
    // 0x32fe34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32fe38:
    // 0x32fe38: 0x40f809  jalr        $v0
label_32fe3c:
    if (ctx->pc == 0x32FE3Cu) {
        ctx->pc = 0x32FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE38u;
        // 0x32fe3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE40u;
        goto label_32fe40;
    }
    ctx->pc = 0x32FE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32FE40u);
        ctx->pc = 0x32FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE38u;
        // 0x32fe3c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE38u, 0x32FE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32FE40u;
label_32fe40:
    // 0x32fe40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32fe44:
    if (ctx->pc == 0x32FE44u) {
        ctx->pc = 0x32FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE40u;
        // 0x32fe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE48u;
        goto label_32fe48;
    }
    ctx->pc = 0x32FE40u;
    {
        const bool branch_taken_0x32fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE40u;
        // 0x32fe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe40) {
            ctx->pc = 0x32FE50u;
            goto label_32fe50;
        }
    }
    ctx->pc = 0x32FE48u;
label_32fe48:
    // 0x32fe48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32fe4c:
    // 0x32fe4c: 0xdc620038  ld          $v0, 0x38($v1)
    ctx->pc = 0x32fe4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
label_32fe50:
    // 0x32fe50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32fe50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32fe54:
    // 0x32fe54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32fe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32fe58:
    // 0x32fe58: 0x3e00008  jr          $ra
label_32fe5c:
    if (ctx->pc == 0x32FE5Cu) {
        ctx->pc = 0x32FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE58u;
        // 0x32fe5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32FE60u;
        goto label_fallthrough_0x32fe58;
    }
    ctx->pc = 0x32FE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE58u;
        // 0x32fe5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32fe58:
    ctx->pc = 0x32FE60u;
}
