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

// Function: sub_00249B80
// Address: 0x249b80 - 0x249bd0
void sub_00249B80_0x249b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249B80_0x249b80");
#endif

    switch (ctx->pc) {
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        default: break;
    }

    ctx->pc = 0x249b80u;

label_249b80:
    // 0x249b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249b84:
    // 0x249b84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x249b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249b88:
    // 0x249b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249b8c:
    // 0x249b8c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x249b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_249b90:
    // 0x249b90: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_249b94:
    // 0x249b94: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_249b98:
    if (ctx->pc == 0x249B98u) {
        ctx->pc = 0x249B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B94u;
        // 0x249b98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B9Cu;
        goto label_249b9c;
    }
    ctx->pc = 0x249B94u;
    {
        const bool branch_taken_0x249b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x249b94) {
            ctx->pc = 0x249B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B94u;
            // 0x249b98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249BC4u;
            goto label_249bc4;
        }
    }
    ctx->pc = 0x249B9Cu;
label_249b9c:
    // 0x249b9c: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x249b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_249ba0:
    // 0x249ba0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_249ba4:
    if (ctx->pc == 0x249BA4u) {
        ctx->pc = 0x249BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BA0u;
        // 0x249ba4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BA8u;
        goto label_249ba8;
    }
    ctx->pc = 0x249BA0u;
    {
        const bool branch_taken_0x249ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ba0) {
            ctx->pc = 0x249BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249BA0u;
            // 0x249ba4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249BC4u;
            goto label_249bc4;
        }
    }
    ctx->pc = 0x249BA8u;
label_249ba8:
    // 0x249ba8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x249ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_249bac:
    // 0x249bac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_249bb0:
    if (ctx->pc == 0x249BB0u) {
        ctx->pc = 0x249BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BACu;
        // 0x249bb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BB4u;
        goto label_249bb4;
    }
    ctx->pc = 0x249BACu;
    {
        const bool branch_taken_0x249bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249bac) {
            ctx->pc = 0x249BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249BACu;
            // 0x249bb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249BC4u;
            goto label_249bc4;
        }
    }
    ctx->pc = 0x249BB4u;
label_249bb4:
    // 0x249bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249bb8:
    // 0x249bb8: 0x60f809  jalr        $v1
label_249bbc:
    if (ctx->pc == 0x249BBCu) {
        ctx->pc = 0x249BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BB8u;
        // 0x249bbc: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BC0u;
        goto label_249bc0;
    }
    ctx->pc = 0x249BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249BC0u);
        ctx->pc = 0x249BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BB8u;
        // 0x249bbc: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BB8u, 0x249BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249BC0u;
label_249bc0:
    // 0x249bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249bc4:
    // 0x249bc4: 0x3e00008  jr          $ra
label_249bc8:
    if (ctx->pc == 0x249BC8u) {
        ctx->pc = 0x249BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BC4u;
        // 0x249bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249BCCu;
        goto label_249bcc;
    }
    ctx->pc = 0x249BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BC4u;
        // 0x249bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249BCCu;
label_249bcc:
    // 0x249bcc: 0x0  nop
    ctx->pc = 0x249bccu;
    // NOP
    ctx->pc = 0x249bd0u;
}
