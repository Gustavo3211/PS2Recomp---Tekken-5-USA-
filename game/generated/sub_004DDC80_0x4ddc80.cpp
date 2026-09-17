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

// Function: sub_004DDC80
// Address: 0x4ddc80 - 0x4ddcc8
void sub_004DDC80_0x4ddc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDC80_0x4ddc80");
#endif

    switch (ctx->pc) {
        case 0x4ddc80u: goto label_4ddc80;
        case 0x4ddc84u: goto label_4ddc84;
        case 0x4ddc88u: goto label_4ddc88;
        case 0x4ddc8cu: goto label_4ddc8c;
        case 0x4ddc90u: goto label_4ddc90;
        case 0x4ddc94u: goto label_4ddc94;
        case 0x4ddc98u: goto label_4ddc98;
        case 0x4ddc9cu: goto label_4ddc9c;
        case 0x4ddca0u: goto label_4ddca0;
        case 0x4ddca4u: goto label_4ddca4;
        case 0x4ddca8u: goto label_4ddca8;
        case 0x4ddcacu: goto label_4ddcac;
        case 0x4ddcb0u: goto label_4ddcb0;
        case 0x4ddcb4u: goto label_4ddcb4;
        case 0x4ddcb8u: goto label_4ddcb8;
        case 0x4ddcbcu: goto label_4ddcbc;
        case 0x4ddcc0u: goto label_4ddcc0;
        case 0x4ddcc4u: goto label_4ddcc4;
        default: break;
    }

    ctx->pc = 0x4ddc80u;

label_4ddc80:
    // 0x4ddc80: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x4ddc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4ddc84:
    // 0x4ddc84: 0x3e00008  jr          $ra
label_4ddc88:
    if (ctx->pc == 0x4DDC88u) {
        ctx->pc = 0x4DDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC84u;
        // 0x4ddc88: 0xa48201bc  sh          $v0, 0x1BC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDC8Cu;
        goto label_4ddc8c;
    }
    ctx->pc = 0x4DDC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC84u;
        // 0x4ddc88: 0xa48201bc  sh          $v0, 0x1BC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDC8Cu;
label_4ddc8c:
    // 0x4ddc8c: 0x0  nop
    ctx->pc = 0x4ddc8cu;
    // NOP
label_4ddc90:
    // 0x4ddc90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ddc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ddc94:
    // 0x4ddc94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ddc98:
    // 0x4ddc98: 0x948201bc  lhu         $v0, 0x1BC($a0)
    ctx->pc = 0x4ddc98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 444)));
label_4ddc9c:
    // 0x4ddc9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ddc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4ddca0:
    // 0x4ddca0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ddca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4ddca4:
    // 0x4ddca4: 0x2c43000c  sltiu       $v1, $v0, 0xC
    ctx->pc = 0x4ddca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_4ddca8:
    // 0x4ddca8: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_4ddcac:
    if (ctx->pc == 0x4DDCACu) {
        ctx->pc = 0x4DDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDCA8u;
        // 0x4ddcac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DDCB0u;
        goto label_4ddcb0;
    }
    ctx->pc = 0x4DDCA8u;
    {
        const bool branch_taken_0x4ddca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ddca8) {
            ctx->pc = 0x4DDCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DDCA8u;
            // 0x4ddcac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DDD88u;
            return;
        }
    }
    ctx->pc = 0x4DDCB0u;
label_4ddcb0:
    // 0x4ddcb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ddcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ddcb4:
    // 0x4ddcb4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ddcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4ddcb8:
    // 0x4ddcb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ddcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ddcbc:
    // 0x4ddcbc: 0x8c63b970  lw          $v1, -0x4690($v1)
    ctx->pc = 0x4ddcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949232)));
label_4ddcc0:
    // 0x4ddcc0: 0x600008  jr          $v1
label_4ddcc4:
    if (ctx->pc == 0x4DDCC4u) {
        ctx->pc = 0x4DDCC8u;
        goto label_fallthrough_0x4ddcc0;
    }
    ctx->pc = 0x4DDCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDCC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4ddcc0:
    ctx->pc = 0x4DDCC8u;
}
