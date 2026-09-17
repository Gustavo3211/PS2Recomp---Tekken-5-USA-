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

// Function: sub_00332C28
// Address: 0x332c28 - 0x332d38
void sub_00332C28_0x332c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332C28_0x332c28");
#endif

    switch (ctx->pc) {
        case 0x332c44u: goto label_332c44;
        case 0x332c4cu: goto label_332c4c;
        case 0x332c60u: goto label_332c60;
        case 0x332c74u: goto label_332c74;
        case 0x332ca8u: goto label_332ca8;
        case 0x332cb4u: goto label_332cb4;
        case 0x332cc0u: goto label_332cc0;
        case 0x332cccu: goto label_332ccc;
        case 0x332cd8u: goto label_332cd8;
        case 0x332ce4u: goto label_332ce4;
        case 0x332cf0u: goto label_332cf0;
        case 0x332cfcu: goto label_332cfc;
        case 0x332d08u: goto label_332d08;
        case 0x332d14u: goto label_332d14;
        case 0x332d20u: goto label_332d20;
        default: break;
    }

    ctx->pc = 0x332c28u;

    // 0x332c28: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332c2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x332c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332c3c: 0xc0cc5e6  jal         func_331798
    ctx->pc = 0x332C3Cu;
    SET_GPR_U32(ctx, 31, 0x332C44u);
    ctx->pc = 0x332C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C3Cu;
    // 0x332c40: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331798u, 0x332C3Cu, 0x332C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C44u;
label_332c44:
    // 0x332c44: 0xc0d11ce  jal         func_344738
    ctx->pc = 0x332C44u;
    SET_GPR_U32(ctx, 31, 0x332C4Cu);
    ctx->pc = 0x344738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344738u, 0x332C44u, 0x332C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C4Cu;
label_332c4c:
    // 0x332c4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332c50: 0x24510d00  addiu       $s1, $v0, 0xD00
    ctx->pc = 0x332c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x332c54: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x332c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x332c58: 0xc0c88c4  jal         func_322310
    ctx->pc = 0x332C58u;
    SET_GPR_U32(ctx, 31, 0x332C60u);
    ctx->pc = 0x332C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C58u;
    // 0x332c5c: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322310u, 0x332C58u, 0x332C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C60u;
label_332c60:
    // 0x332c60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x332c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x332c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c68: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x332c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x332c6c: 0xc0c8b4c  jal         func_322D30
    ctx->pc = 0x332C6Cu;
    SET_GPR_U32(ctx, 31, 0x332C74u);
    ctx->pc = 0x332C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332C6Cu;
    // 0x332c70: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D30u, 0x332C6Cu, 0x332C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C74u;
label_332c74:
    // 0x332c74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x332c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x332c78: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332c7c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x332c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x332c80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332c84: 0x34460035  ori         $a2, $v0, 0x35
    ctx->pc = 0x332c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    // 0x332c88: 0x34420031  ori         $v0, $v0, 0x31
    ctx->pc = 0x332c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49);
    // 0x332c8c: 0x2484f0c0  addiu       $a0, $a0, -0xF40
    ctx->pc = 0x332c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
    // 0x332c90: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x332C90u;
    {
        const bool branch_taken_0x332c90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x332C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332C90u;
        // 0x332c94: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c90) {
            ctx->pc = 0x332C9Cu;
            goto label_332c9c;
        }
    }
    ctx->pc = 0x332C98u;
    // 0x332c98: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x332c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_332c9c:
    // 0x332c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332ca0: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CA0u;
    SET_GPR_U32(ctx, 31, 0x332CA8u);
    ctx->pc = 0x332CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CA0u;
    // 0x332ca4: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CA0u, 0x332CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CA8u;
label_332ca8:
    // 0x332ca8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332cac: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CACu;
    SET_GPR_U32(ctx, 31, 0x332CB4u);
    ctx->pc = 0x332CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CACu;
    // 0x332cb0: 0x2484f100  addiu       $a0, $a0, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CACu, 0x332CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CB4u;
label_332cb4:
    // 0x332cb4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332cb8: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CB8u;
    SET_GPR_U32(ctx, 31, 0x332CC0u);
    ctx->pc = 0x332CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CB8u;
    // 0x332cbc: 0x2484f140  addiu       $a0, $a0, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CB8u, 0x332CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CC0u;
label_332cc0:
    // 0x332cc0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332cc4: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CC4u;
    SET_GPR_U32(ctx, 31, 0x332CCCu);
    ctx->pc = 0x332CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CC4u;
    // 0x332cc8: 0x2484f180  addiu       $a0, $a0, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CC4u, 0x332CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CCCu;
label_332ccc:
    // 0x332ccc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332cd0: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CD0u;
    SET_GPR_U32(ctx, 31, 0x332CD8u);
    ctx->pc = 0x332CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CD0u;
    // 0x332cd4: 0x2484f1c0  addiu       $a0, $a0, -0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CD0u, 0x332CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CD8u;
label_332cd8:
    // 0x332cd8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332cdc: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CDCu;
    SET_GPR_U32(ctx, 31, 0x332CE4u);
    ctx->pc = 0x332CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CDCu;
    // 0x332ce0: 0x2484f200  addiu       $a0, $a0, -0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CDCu, 0x332CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CE4u;
label_332ce4:
    // 0x332ce4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332ce8: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CE8u;
    SET_GPR_U32(ctx, 31, 0x332CF0u);
    ctx->pc = 0x332CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CE8u;
    // 0x332cec: 0x2484f240  addiu       $a0, $a0, -0xDC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CE8u, 0x332CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CF0u;
label_332cf0:
    // 0x332cf0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332cf4: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332CF4u;
    SET_GPR_U32(ctx, 31, 0x332CFCu);
    ctx->pc = 0x332CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332CF4u;
    // 0x332cf8: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332CF4u, 0x332CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332CFCu;
label_332cfc:
    // 0x332cfc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332d00: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332D00u;
    SET_GPR_U32(ctx, 31, 0x332D08u);
    ctx->pc = 0x332D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D00u;
    // 0x332d04: 0x2484f2c0  addiu       $a0, $a0, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332D00u, 0x332D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D08u;
label_332d08:
    // 0x332d08: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332d0c: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332D0Cu;
    SET_GPR_U32(ctx, 31, 0x332D14u);
    ctx->pc = 0x332D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D0Cu;
    // 0x332d10: 0x2484f300  addiu       $a0, $a0, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332D0Cu, 0x332D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D14u;
label_332d14:
    // 0x332d14: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332d18: 0xc0d0b2e  jal         func_342CB8
    ctx->pc = 0x332D18u;
    SET_GPR_U32(ctx, 31, 0x332D20u);
    ctx->pc = 0x332D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D18u;
    // 0x332d1c: 0x2484f340  addiu       $a0, $a0, -0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB8u, 0x332D18u, 0x332D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D20u;
label_332d20:
    // 0x332d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x332D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D2Cu;
        // 0x332d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332D34u;
    // 0x332d34: 0x0  nop
    ctx->pc = 0x332d34u;
    // NOP
    ctx->pc = 0x332d38u;
}
