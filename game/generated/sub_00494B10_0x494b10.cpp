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

// Function: sub_00494B10
// Address: 0x494b10 - 0x494b80
void sub_00494B10_0x494b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494B10_0x494b10");
#endif

    switch (ctx->pc) {
        case 0x494b10u: goto label_494b10;
        case 0x494b14u: goto label_494b14;
        case 0x494b18u: goto label_494b18;
        case 0x494b1cu: goto label_494b1c;
        case 0x494b20u: goto label_494b20;
        case 0x494b24u: goto label_494b24;
        case 0x494b28u: goto label_494b28;
        case 0x494b2cu: goto label_494b2c;
        case 0x494b30u: goto label_494b30;
        case 0x494b34u: goto label_494b34;
        case 0x494b38u: goto label_494b38;
        case 0x494b3cu: goto label_494b3c;
        case 0x494b40u: goto label_494b40;
        case 0x494b44u: goto label_494b44;
        case 0x494b48u: goto label_494b48;
        case 0x494b4cu: goto label_494b4c;
        case 0x494b50u: goto label_494b50;
        case 0x494b54u: goto label_494b54;
        case 0x494b58u: goto label_494b58;
        case 0x494b5cu: goto label_494b5c;
        case 0x494b60u: goto label_494b60;
        case 0x494b64u: goto label_494b64;
        case 0x494b68u: goto label_494b68;
        case 0x494b6cu: goto label_494b6c;
        case 0x494b70u: goto label_494b70;
        case 0x494b74u: goto label_494b74;
        case 0x494b78u: goto label_494b78;
        case 0x494b7cu: goto label_494b7c;
        default: break;
    }

    ctx->pc = 0x494b10u;

label_494b10:
    // 0x494b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x494b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_494b14:
    // 0x494b14: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x494b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_494b18:
    // 0x494b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x494b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_494b1c:
    // 0x494b1c: 0x24a50ab0  addiu       $a1, $a1, 0xAB0
    ctx->pc = 0x494b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
label_494b20:
    // 0x494b20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x494b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_494b24:
    // 0x494b24: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x494b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_494b28:
    // 0x494b28: 0x84c201b6  lh          $v0, 0x1B6($a2)
    ctx->pc = 0x494b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
label_494b2c:
    // 0x494b2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x494b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_494b30:
    // 0x494b30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x494b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_494b34:
    // 0x494b34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_494b38:
    // 0x494b38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x494b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_494b3c:
    // 0x494b3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x494b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_494b40:
    // 0x494b40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x494b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_494b44:
    // 0x494b44: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x494b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_494b48:
    // 0x494b48: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x494b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_494b4c:
    // 0x494b4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x494b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_494b50:
    // 0x494b50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x494b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_494b54:
    // 0x494b54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x494b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_494b58:
    // 0x494b58: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x494b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_494b5c:
    // 0x494b5c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x494b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_494b60:
    // 0x494b60: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_494b64:
    if (ctx->pc == 0x494B64u) {
        ctx->pc = 0x494B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494B60u;
        // 0x494b64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494B68u;
        goto label_494b68;
    }
    ctx->pc = 0x494B60u;
    {
        const bool branch_taken_0x494b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b60) {
            ctx->pc = 0x494B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494B60u;
            // 0x494b64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494C00u;
            return;
        }
    }
    ctx->pc = 0x494B68u;
label_494b68:
    // 0x494b68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x494b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_494b6c:
    // 0x494b6c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x494b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_494b70:
    // 0x494b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x494b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_494b74:
    // 0x494b74: 0x8c63ac40  lw          $v1, -0x53C0($v1)
    ctx->pc = 0x494b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945856)));
label_494b78:
    // 0x494b78: 0x600008  jr          $v1
label_494b7c:
    if (ctx->pc == 0x494B7Cu) {
        ctx->pc = 0x494B80u;
        goto label_fallthrough_0x494b78;
    }
    ctx->pc = 0x494B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494B78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x494b78:
    ctx->pc = 0x494B80u;
}
