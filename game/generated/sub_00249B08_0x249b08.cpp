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

// Function: sub_00249B08
// Address: 0x249b08 - 0x249b58
void sub_00249B08_0x249b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249B08_0x249b08");
#endif

    switch (ctx->pc) {
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        default: break;
    }

    ctx->pc = 0x249b08u;

label_249b08:
    // 0x249b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249b0c:
    // 0x249b0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x249b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249b10:
    // 0x249b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249b14:
    // 0x249b14: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x249b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_249b18:
    // 0x249b18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x249b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_249b1c:
    // 0x249b1c: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_249b20:
    if (ctx->pc == 0x249B20u) {
        ctx->pc = 0x249B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B1Cu;
        // 0x249b20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B24u;
        goto label_249b24;
    }
    ctx->pc = 0x249B1Cu;
    {
        const bool branch_taken_0x249b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x249b1c) {
            ctx->pc = 0x249B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B1Cu;
            // 0x249b20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B4Cu;
            goto label_249b4c;
        }
    }
    ctx->pc = 0x249B24u;
label_249b24:
    // 0x249b24: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x249b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_249b28:
    // 0x249b28: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_249b2c:
    if (ctx->pc == 0x249B2Cu) {
        ctx->pc = 0x249B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B28u;
        // 0x249b2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B30u;
        goto label_249b30;
    }
    ctx->pc = 0x249B28u;
    {
        const bool branch_taken_0x249b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b28) {
            ctx->pc = 0x249B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B28u;
            // 0x249b2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B4Cu;
            goto label_249b4c;
        }
    }
    ctx->pc = 0x249B30u;
label_249b30:
    // 0x249b30: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x249b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_249b34:
    // 0x249b34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_249b38:
    if (ctx->pc == 0x249B38u) {
        ctx->pc = 0x249B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B34u;
        // 0x249b38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B3Cu;
        goto label_249b3c;
    }
    ctx->pc = 0x249B34u;
    {
        const bool branch_taken_0x249b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249b34) {
            ctx->pc = 0x249B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B34u;
            // 0x249b38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B4Cu;
            goto label_249b4c;
        }
    }
    ctx->pc = 0x249B3Cu;
label_249b3c:
    // 0x249b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249b40:
    // 0x249b40: 0x60f809  jalr        $v1
label_249b44:
    if (ctx->pc == 0x249B44u) {
        ctx->pc = 0x249B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B40u;
        // 0x249b44: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B48u;
        goto label_249b48;
    }
    ctx->pc = 0x249B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249B48u);
        ctx->pc = 0x249B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B40u;
        // 0x249b44: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B40u, 0x249B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249B48u;
label_249b48:
    // 0x249b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249b4c:
    // 0x249b4c: 0x3e00008  jr          $ra
label_249b50:
    if (ctx->pc == 0x249B50u) {
        ctx->pc = 0x249B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B4Cu;
        // 0x249b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B54u;
        goto label_249b54;
    }
    ctx->pc = 0x249B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B4Cu;
        // 0x249b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249B54u;
label_249b54:
    // 0x249b54: 0x0  nop
    ctx->pc = 0x249b54u;
    // NOP
    ctx->pc = 0x249b58u;
}
