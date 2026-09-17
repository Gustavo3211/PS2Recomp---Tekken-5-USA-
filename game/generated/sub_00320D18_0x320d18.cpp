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

// Function: sub_00320D18
// Address: 0x320d18 - 0x320d70
void sub_00320D18_0x320d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320D18_0x320d18");
#endif

    switch (ctx->pc) {
        case 0x320d18u: goto label_320d18;
        case 0x320d1cu: goto label_320d1c;
        case 0x320d20u: goto label_320d20;
        case 0x320d24u: goto label_320d24;
        case 0x320d28u: goto label_320d28;
        case 0x320d2cu: goto label_320d2c;
        case 0x320d30u: goto label_320d30;
        case 0x320d34u: goto label_320d34;
        case 0x320d38u: goto label_320d38;
        case 0x320d3cu: goto label_320d3c;
        case 0x320d40u: goto label_320d40;
        case 0x320d44u: goto label_320d44;
        case 0x320d48u: goto label_320d48;
        case 0x320d4cu: goto label_320d4c;
        case 0x320d50u: goto label_320d50;
        case 0x320d54u: goto label_320d54;
        case 0x320d58u: goto label_320d58;
        case 0x320d5cu: goto label_320d5c;
        case 0x320d60u: goto label_320d60;
        case 0x320d64u: goto label_320d64;
        case 0x320d68u: goto label_320d68;
        case 0x320d6cu: goto label_320d6c;
        default: break;
    }

    ctx->pc = 0x320d18u;

label_320d18:
    // 0x320d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320d1c:
    // 0x320d1c: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x320d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
label_320d20:
    // 0x320d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320d24:
    // 0x320d24: 0x2529d6c0  addiu       $t1, $t1, -0x2940
    ctx->pc = 0x320d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956736));
label_320d28:
    // 0x320d28: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x320d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_320d2c:
    // 0x320d2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x320d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320d30:
    // 0x320d30: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x320d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_320d34:
    // 0x320d34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320d38:
    // 0x320d38: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x320d38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320d3c:
    // 0x320d3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320d40:
    // 0x320d40: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x320d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_320d44:
    // 0x320d44: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x320d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_320d48:
    // 0x320d48: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320d4c:
    // 0x320d4c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x320d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_320d50:
    // 0x320d50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320d54:
    // 0x320d54: 0x40f809  jalr        $v0
label_320d58:
    if (ctx->pc == 0x320D58u) {
        ctx->pc = 0x320D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D54u;
        // 0x320d58: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D5Cu;
        goto label_320d5c;
    }
    ctx->pc = 0x320D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320D5Cu);
        ctx->pc = 0x320D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D54u;
        // 0x320d58: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D54u, 0x320D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320D5Cu;
label_320d5c:
    // 0x320d5c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320d5cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_320d60:
    // 0x320d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320d64:
    // 0x320d64: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x320d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_320d68:
    // 0x320d68: 0x3e00008  jr          $ra
label_320d6c:
    if (ctx->pc == 0x320D6Cu) {
        ctx->pc = 0x320D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D68u;
        // 0x320d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D70u;
        goto label_fallthrough_0x320d68;
    }
    ctx->pc = 0x320D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D68u;
        // 0x320d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320d68:
    ctx->pc = 0x320D70u;
}
