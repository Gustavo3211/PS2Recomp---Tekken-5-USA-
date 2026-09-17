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

// Function: sub_00121FD0
// Address: 0x121fd0 - 0x122038
void sub_00121FD0_0x121fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121FD0_0x121fd0");
#endif

    switch (ctx->pc) {
        case 0x121fd0u: goto label_121fd0;
        case 0x121fd4u: goto label_121fd4;
        case 0x121fd8u: goto label_121fd8;
        case 0x121fdcu: goto label_121fdc;
        case 0x121fe0u: goto label_121fe0;
        case 0x121fe4u: goto label_121fe4;
        case 0x121fe8u: goto label_121fe8;
        case 0x121fecu: goto label_121fec;
        case 0x121ff0u: goto label_121ff0;
        case 0x121ff4u: goto label_121ff4;
        case 0x121ff8u: goto label_121ff8;
        case 0x121ffcu: goto label_121ffc;
        case 0x122000u: goto label_122000;
        case 0x122004u: goto label_122004;
        case 0x122008u: goto label_122008;
        case 0x12200cu: goto label_12200c;
        case 0x122010u: goto label_122010;
        case 0x122014u: goto label_122014;
        case 0x122018u: goto label_122018;
        case 0x12201cu: goto label_12201c;
        case 0x122020u: goto label_122020;
        case 0x122024u: goto label_122024;
        case 0x122028u: goto label_122028;
        case 0x12202cu: goto label_12202c;
        case 0x122030u: goto label_122030;
        case 0x122034u: goto label_122034;
        default: break;
    }

    ctx->pc = 0x121fd0u;

label_121fd0:
    // 0x121fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_121fd4:
    // 0x121fd4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x121fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_121fd8:
    // 0x121fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_121fdc:
    // 0x121fdc: 0x24504380  addiu       $s0, $v0, 0x4380
    ctx->pc = 0x121fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
label_121fe0:
    // 0x121fe0: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x121fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
label_121fe4:
    // 0x121fe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x121fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121fe8:
    // 0x121fe8: 0x24631fd0  addiu       $v1, $v1, 0x1FD0
    ctx->pc = 0x121fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8144));
label_121fec:
    // 0x121fec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_121ff0:
    if (ctx->pc == 0x121FF0u) {
        ctx->pc = 0x121FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FECu;
        // 0x121ff0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FF4u;
        goto label_121ff4;
    }
    ctx->pc = 0x121FECu;
    {
        const bool branch_taken_0x121fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x121FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FECu;
        // 0x121ff0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fec) {
            ctx->pc = 0x122000u;
            goto label_122000;
        }
    }
    ctx->pc = 0x121FF4u;
label_121ff4:
    // 0x121ff4: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x121ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_121ff8:
    // 0x121ff8: 0x24422038  addiu       $v0, $v0, 0x2038
    ctx->pc = 0x121ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8248));
label_121ffc:
    // 0x121ffc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x121ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_122000:
    // 0x122000: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x122000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_122004:
    // 0x122004: 0x8c434384  lw          $v1, 0x4384($v0)
    ctx->pc = 0x122004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17284)));
label_122008:
    // 0x122008: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_12200c:
    if (ctx->pc == 0x12200Cu) {
        ctx->pc = 0x12200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122008u;
        // 0x12200c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122010u;
        goto label_122010;
    }
    ctx->pc = 0x122008u;
    {
        const bool branch_taken_0x122008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122008) {
            ctx->pc = 0x12200Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122008u;
            // 0x12200c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12201Cu;
            goto label_12201c;
        }
    }
    ctx->pc = 0x122010u;
label_122010:
    // 0x122010: 0xc04876c  jal         func_121DB0
label_122014:
    if (ctx->pc == 0x122014u) {
        ctx->pc = 0x122018u;
        goto label_122018;
    }
    ctx->pc = 0x122010u;
    SET_GPR_U32(ctx, 31, 0x122018u);
    ctx->pc = 0x121DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121DB0u, 0x122010u, 0x122018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122018u;
label_122018:
    // 0x122018: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12201c:
    // 0x12201c: 0x40f809  jalr        $v0
label_122020:
    if (ctx->pc == 0x122020u) {
        ctx->pc = 0x122024u;
        goto label_122024;
    }
    ctx->pc = 0x12201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122024u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12201Cu, 0x122024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122024u;
label_122024:
    // 0x122024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122028:
    // 0x122028: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x122028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12202c:
    // 0x12202c: 0x3e00008  jr          $ra
label_122030:
    if (ctx->pc == 0x122030u) {
        ctx->pc = 0x122030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12202Cu;
        // 0x122030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122034u;
        goto label_122034;
    }
    ctx->pc = 0x12202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12202Cu;
        // 0x122030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12202Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122034u;
label_122034:
    // 0x122034: 0x0  nop
    ctx->pc = 0x122034u;
    // NOP
    ctx->pc = 0x122038u;
}
