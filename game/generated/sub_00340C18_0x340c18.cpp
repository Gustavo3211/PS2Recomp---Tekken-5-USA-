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

// Function: sub_00340C18
// Address: 0x340c18 - 0x340c80
void sub_00340C18_0x340c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340C18_0x340c18");
#endif

    switch (ctx->pc) {
        case 0x340c18u: goto label_340c18;
        case 0x340c1cu: goto label_340c1c;
        case 0x340c20u: goto label_340c20;
        case 0x340c24u: goto label_340c24;
        case 0x340c28u: goto label_340c28;
        case 0x340c2cu: goto label_340c2c;
        case 0x340c30u: goto label_340c30;
        case 0x340c34u: goto label_340c34;
        case 0x340c38u: goto label_340c38;
        case 0x340c3cu: goto label_340c3c;
        case 0x340c40u: goto label_340c40;
        case 0x340c44u: goto label_340c44;
        case 0x340c48u: goto label_340c48;
        case 0x340c4cu: goto label_340c4c;
        case 0x340c50u: goto label_340c50;
        case 0x340c54u: goto label_340c54;
        case 0x340c58u: goto label_340c58;
        case 0x340c5cu: goto label_340c5c;
        case 0x340c60u: goto label_340c60;
        case 0x340c64u: goto label_340c64;
        case 0x340c68u: goto label_340c68;
        case 0x340c6cu: goto label_340c6c;
        case 0x340c70u: goto label_340c70;
        case 0x340c74u: goto label_340c74;
        case 0x340c78u: goto label_340c78;
        case 0x340c7cu: goto label_340c7c;
        default: break;
    }

    ctx->pc = 0x340c18u;

label_340c18:
    // 0x340c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_340c1c:
    // 0x340c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340c20:
    // 0x340c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340c24:
    // 0x340c24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_340c28:
    // 0x340c28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340c2c:
    // 0x340c2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x340c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_340c30:
    // 0x340c30: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_340c34:
    if (ctx->pc == 0x340C34u) {
        ctx->pc = 0x340C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C30u;
        // 0x340c34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340C38u;
        goto label_340c38;
    }
    ctx->pc = 0x340C30u;
    {
        const bool branch_taken_0x340c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340c30) {
            ctx->pc = 0x340C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C30u;
            // 0x340c34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340C70u;
            goto label_340c70;
        }
    }
    ctx->pc = 0x340C38u;
label_340c38:
    // 0x340c38: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x340c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340c3c:
    // 0x340c3c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x340c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_340c40:
    // 0x340c40: 0x40f809  jalr        $v0
label_340c44:
    if (ctx->pc == 0x340C44u) {
        ctx->pc = 0x340C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C40u;
        // 0x340c44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340C48u;
        goto label_340c48;
    }
    ctx->pc = 0x340C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340C48u);
        ctx->pc = 0x340C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C40u;
        // 0x340c44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340C40u, 0x340C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340C48u;
label_340c48:
    // 0x340c48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x340c48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340c4c:
    // 0x340c4c: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
label_340c50:
    if (ctx->pc == 0x340C50u) {
        ctx->pc = 0x340C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C4Cu;
        // 0x340c50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340C54u;
        goto label_340c54;
    }
    ctx->pc = 0x340C4Cu;
    {
        const bool branch_taken_0x340c4c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x340c4c) {
            ctx->pc = 0x340C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C4Cu;
            // 0x340c50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340C70u;
            goto label_340c70;
        }
    }
    ctx->pc = 0x340C54u;
label_340c54:
    // 0x340c54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340c58:
    // 0x340c58: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x340c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
label_340c5c:
    // 0x340c5c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x340c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_340c60:
    // 0x340c60: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_340c64:
    if (ctx->pc == 0x340C64u) {
        ctx->pc = 0x340C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C60u;
        // 0x340c64: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340C68u;
        goto label_340c68;
    }
    ctx->pc = 0x340C60u;
    {
        const bool branch_taken_0x340c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C60u;
        // 0x340c64: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c60) {
            ctx->pc = 0x340C6Cu;
            goto label_340c6c;
        }
    }
    ctx->pc = 0x340C68u;
label_340c68:
    // 0x340c68: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x340c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_340c6c:
    // 0x340c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340c70:
    // 0x340c70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340c74:
    // 0x340c74: 0x3e00008  jr          $ra
label_340c78:
    if (ctx->pc == 0x340C78u) {
        ctx->pc = 0x340C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C74u;
        // 0x340c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340C7Cu;
        goto label_340c7c;
    }
    ctx->pc = 0x340C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C74u;
        // 0x340c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340C7Cu;
label_340c7c:
    // 0x340c7c: 0x0  nop
    ctx->pc = 0x340c7cu;
    // NOP
    ctx->pc = 0x340c80u;
}
