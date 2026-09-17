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

// Function: sub_00329BA0
// Address: 0x329ba0 - 0x329c18
void sub_00329BA0_0x329ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329BA0_0x329ba0");
#endif

    switch (ctx->pc) {
        case 0x329ba0u: goto label_329ba0;
        case 0x329ba4u: goto label_329ba4;
        case 0x329ba8u: goto label_329ba8;
        case 0x329bacu: goto label_329bac;
        case 0x329bb0u: goto label_329bb0;
        case 0x329bb4u: goto label_329bb4;
        case 0x329bb8u: goto label_329bb8;
        case 0x329bbcu: goto label_329bbc;
        case 0x329bc0u: goto label_329bc0;
        case 0x329bc4u: goto label_329bc4;
        case 0x329bc8u: goto label_329bc8;
        case 0x329bccu: goto label_329bcc;
        case 0x329bd0u: goto label_329bd0;
        case 0x329bd4u: goto label_329bd4;
        case 0x329bd8u: goto label_329bd8;
        case 0x329bdcu: goto label_329bdc;
        case 0x329be0u: goto label_329be0;
        case 0x329be4u: goto label_329be4;
        case 0x329be8u: goto label_329be8;
        case 0x329becu: goto label_329bec;
        case 0x329bf0u: goto label_329bf0;
        case 0x329bf4u: goto label_329bf4;
        case 0x329bf8u: goto label_329bf8;
        case 0x329bfcu: goto label_329bfc;
        case 0x329c00u: goto label_329c00;
        case 0x329c04u: goto label_329c04;
        case 0x329c08u: goto label_329c08;
        case 0x329c0cu: goto label_329c0c;
        case 0x329c10u: goto label_329c10;
        case 0x329c14u: goto label_329c14;
        default: break;
    }

    ctx->pc = 0x329ba0u;

label_329ba0:
    // 0x329ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_329ba4:
    // 0x329ba4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x329ba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329ba8:
    // 0x329ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_329bac:
    // 0x329bac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x329bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_329bb0:
    // 0x329bb0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x329bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_329bb4:
    // 0x329bb4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x329bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_329bb8:
    // 0x329bb8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x329bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_329bbc:
    // 0x329bbc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x329bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_329bc0:
    // 0x329bc0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x329bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329bc4:
    // 0x329bc4: 0xad250048  sw          $a1, 0x48($t1)
    ctx->pc = 0x329bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 5));
label_329bc8:
    // 0x329bc8: 0xad23004c  sw          $v1, 0x4C($t1)
    ctx->pc = 0x329bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 3));
label_329bcc:
    // 0x329bcc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_329bd0:
    if (ctx->pc == 0x329BD0u) {
        ctx->pc = 0x329BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BCCu;
        // 0x329bd0: 0xad220050  sw          $v0, 0x50($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BD4u;
        goto label_329bd4;
    }
    ctx->pc = 0x329BCCu;
    {
        const bool branch_taken_0x329bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BCCu;
        // 0x329bd0: 0xad220050  sw          $v0, 0x50($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bcc) {
            ctx->pc = 0x329C08u;
            goto label_329c08;
        }
    }
    ctx->pc = 0x329BD4u;
label_329bd4:
    // 0x329bd4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x329bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_329bd8:
    // 0x329bd8: 0x8d250054  lw          $a1, 0x54($t1)
    ctx->pc = 0x329bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
label_329bdc:
    // 0x329bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_329be0:
    // 0x329be0: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_329be4:
    // 0x329be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_329be8:
    // 0x329be8: 0x8c635a80  lw          $v1, 0x5A80($v1)
    ctx->pc = 0x329be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23168)));
label_329bec:
    // 0x329bec: 0x8c690024  lw          $t1, 0x24($v1)
    ctx->pc = 0x329becu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_329bf0:
    // 0x329bf0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x329bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_329bf4:
    // 0x329bf4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x329bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_329bf8:
    // 0x329bf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329bfc:
    // 0x329bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329c00:
    // 0x329c00: 0x60f809  jalr        $v1
label_329c04:
    if (ctx->pc == 0x329C04u) {
        ctx->pc = 0x329C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C00u;
        // 0x329c04: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C08u;
        goto label_329c08;
    }
    ctx->pc = 0x329C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329C08u);
        ctx->pc = 0x329C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C00u;
        // 0x329c04: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329C00u, 0x329C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329C08u;
label_329c08:
    // 0x329c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329c0c:
    // 0x329c0c: 0x3e00008  jr          $ra
label_329c10:
    if (ctx->pc == 0x329C10u) {
        ctx->pc = 0x329C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C0Cu;
        // 0x329c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C14u;
        goto label_329c14;
    }
    ctx->pc = 0x329C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C0Cu;
        // 0x329c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329C14u;
label_329c14:
    // 0x329c14: 0x0  nop
    ctx->pc = 0x329c14u;
    // NOP
    ctx->pc = 0x329c18u;
}
