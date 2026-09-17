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

// Function: sub_00285EF0
// Address: 0x285ef0 - 0x285f70
void sub_00285EF0_0x285ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285EF0_0x285ef0");
#endif

    switch (ctx->pc) {
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        default: break;
    }

    ctx->pc = 0x285ef0u;

label_285ef0:
    // 0x285ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_285ef4:
    // 0x285ef4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x285ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_285ef8:
    // 0x285ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_285efc:
    // 0x285efc: 0x24a53788  addiu       $a1, $a1, 0x3788
    ctx->pc = 0x285efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14216));
label_285f00:
    // 0x285f00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x285f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_285f04:
    // 0x285f04: 0x24067418  addiu       $a2, $zero, 0x7418
    ctx->pc = 0x285f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29720));
label_285f08:
    // 0x285f08: 0x8c870068  lw          $a3, 0x68($a0)
    ctx->pc = 0x285f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_285f0c:
    // 0x285f0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x285f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_285f10:
    // 0x285f10: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x285f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_285f14:
    // 0x285f14: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x285f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_285f18:
    // 0x285f18: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x285f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_285f1c:
    // 0x285f1c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x285f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_285f20:
    // 0x285f20: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x285f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_285f24:
    // 0x285f24: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x285f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_285f28:
    // 0x285f28: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x285f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_285f2c:
    // 0x285f2c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x285f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_285f30:
    // 0x285f30: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x285f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_285f34:
    // 0x285f34: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x285f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_285f38:
    // 0x285f38: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x285f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_285f3c:
    // 0x285f3c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x285f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_285f40:
    // 0x285f40: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x285f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_285f44:
    // 0x285f44: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x285f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_285f48:
    // 0x285f48: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x285f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_285f4c:
    // 0x285f4c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x285f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_285f50:
    // 0x285f50: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x285f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_285f54:
    // 0x285f54: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x285f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_285f58:
    // 0x285f58: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x285f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_285f5c:
    // 0x285f5c: 0x60f809  jalr        $v1
label_285f60:
    if (ctx->pc == 0x285F60u) {
        ctx->pc = 0x285F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F5Cu;
        // 0x285f60: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F64u;
        goto label_285f64;
    }
    ctx->pc = 0x285F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285F64u);
        ctx->pc = 0x285F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F5Cu;
        // 0x285f60: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F5Cu, 0x285F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285F64u;
label_285f64:
    // 0x285f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285f68:
    // 0x285f68: 0x3e00008  jr          $ra
label_285f6c:
    if (ctx->pc == 0x285F6Cu) {
        ctx->pc = 0x285F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F68u;
        // 0x285f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F70u;
        goto label_fallthrough_0x285f68;
    }
    ctx->pc = 0x285F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F68u;
        // 0x285f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285f68:
    ctx->pc = 0x285F70u;
}
