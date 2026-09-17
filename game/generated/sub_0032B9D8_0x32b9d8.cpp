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

// Function: sub_0032B9D8
// Address: 0x32b9d8 - 0x32bc80
void sub_0032B9D8_0x32b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B9D8_0x32b9d8");
#endif

    switch (ctx->pc) {
        case 0x32b9fcu: goto label_32b9fc;
        case 0x32ba08u: goto label_32ba08;
        case 0x32ba18u: goto label_32ba18;
        case 0x32ba40u: goto label_32ba40;
        case 0x32ba4cu: goto label_32ba4c;
        case 0x32ba5cu: goto label_32ba5c;
        case 0x32ba8cu: goto label_32ba8c;
        case 0x32ba98u: goto label_32ba98;
        case 0x32baa8u: goto label_32baa8;
        case 0x32bad8u: goto label_32bad8;
        case 0x32bae4u: goto label_32bae4;
        case 0x32baf0u: goto label_32baf0;
        case 0x32bb00u: goto label_32bb00;
        case 0x32bb38u: goto label_32bb38;
        case 0x32bb44u: goto label_32bb44;
        case 0x32bb50u: goto label_32bb50;
        case 0x32bb60u: goto label_32bb60;
        case 0x32bb98u: goto label_32bb98;
        case 0x32bba4u: goto label_32bba4;
        case 0x32bbb0u: goto label_32bbb0;
        case 0x32bbc0u: goto label_32bbc0;
        case 0x32bc08u: goto label_32bc08;
        case 0x32bc1cu: goto label_32bc1c;
        case 0x32bc28u: goto label_32bc28;
        case 0x32bc38u: goto label_32bc38;
        case 0x32bc70u: goto label_32bc70;
        default: break;
    }

    ctx->pc = 0x32b9d8u;

    // 0x32b9d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32b9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32b9dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32b9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b9e0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32b9e4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32b9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32b9e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32b9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b9ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b9f0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x32b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x32b9f4: 0xc0caf2c  jal         func_32BCB0
    ctx->pc = 0x32B9F4u;
    SET_GPR_U32(ctx, 31, 0x32B9FCu);
    ctx->pc = 0x32B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B9F4u;
    // 0x32b9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BCB0u, 0x32B9F4u, 0x32B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B9FCu;
label_32b9fc:
    // 0x32b9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba00: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BA00u;
    SET_GPR_U32(ctx, 31, 0x32BA08u);
    ctx->pc = 0x32BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA00u;
    // 0x32ba04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BA00u, 0x32BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA08u;
label_32ba08:
    // 0x32ba08: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32ba0c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32ba10: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BA10u;
    SET_GPR_U32(ctx, 31, 0x32BA18u);
    ctx->pc = 0x32BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA10u;
    // 0x32ba14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BA10u, 0x32BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA18u;
label_32ba18:
    // 0x32ba18: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32ba18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32ba1c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x32ba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32ba20: 0x3e00008  jr          $ra
    ctx->pc = 0x32BA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA20u;
        // 0x32ba24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BA28u;
    // 0x32ba28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32ba2c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32ba30: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32ba30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32ba34: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x32ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x32ba38: 0xc0caf7a  jal         func_32BDE8
    ctx->pc = 0x32BA38u;
    SET_GPR_U32(ctx, 31, 0x32BA40u);
    ctx->pc = 0x32BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA38u;
    // 0x32ba3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDE8u, 0x32BA38u, 0x32BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA40u;
label_32ba40:
    // 0x32ba40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba44: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BA44u;
    SET_GPR_U32(ctx, 31, 0x32BA4Cu);
    ctx->pc = 0x32BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA44u;
    // 0x32ba48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BA44u, 0x32BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA4Cu;
label_32ba4c:
    // 0x32ba4c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32ba50: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32ba54: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BA54u;
    SET_GPR_U32(ctx, 31, 0x32BA5Cu);
    ctx->pc = 0x32BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA54u;
    // 0x32ba58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BA54u, 0x32BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA5Cu;
label_32ba5c:
    // 0x32ba5c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32ba5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32ba60: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x32ba60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32ba64: 0x3e00008  jr          $ra
    ctx->pc = 0x32BA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA64u;
        // 0x32ba68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BA6Cu;
    // 0x32ba6c: 0x0  nop
    ctx->pc = 0x32ba6cu;
    // NOP
    // 0x32ba70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32ba70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32ba74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba78: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32ba7c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32ba7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32ba80: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x32ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x32ba84: 0xc0caf8c  jal         func_32BE30
    ctx->pc = 0x32BA84u;
    SET_GPR_U32(ctx, 31, 0x32BA8Cu);
    ctx->pc = 0x32BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA84u;
    // 0x32ba88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BE30u, 0x32BA84u, 0x32BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA8Cu;
label_32ba8c:
    // 0x32ba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba90: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BA90u;
    SET_GPR_U32(ctx, 31, 0x32BA98u);
    ctx->pc = 0x32BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA90u;
    // 0x32ba94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BA90u, 0x32BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA98u;
label_32ba98:
    // 0x32ba98: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32ba9c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32baa0: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BAA0u;
    SET_GPR_U32(ctx, 31, 0x32BAA8u);
    ctx->pc = 0x32BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAA0u;
    // 0x32baa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BAA0u, 0x32BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAA8u;
label_32baa8:
    // 0x32baa8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32baa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32baac: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x32baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x32BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAB0u;
        // 0x32bab4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BAB8u;
    // 0x32bab8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32babc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32babcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32bac0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32bac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32bac4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x32bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x32bac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32bac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bacc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32baccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32bad0: 0xc0cb04a  jal         func_32C128
    ctx->pc = 0x32BAD0u;
    SET_GPR_U32(ctx, 31, 0x32BAD8u);
    ctx->pc = 0x32BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAD0u;
    // 0x32bad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C128u, 0x32BAD0u, 0x32BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAD8u;
label_32bad8:
    // 0x32bad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32badc: 0xc0caf9e  jal         func_32BE78
    ctx->pc = 0x32BADCu;
    SET_GPR_U32(ctx, 31, 0x32BAE4u);
    ctx->pc = 0x32BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BADCu;
    // 0x32bae0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BE78u, 0x32BADCu, 0x32BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAE4u;
label_32bae4:
    // 0x32bae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bae8: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BAE8u;
    SET_GPR_U32(ctx, 31, 0x32BAF0u);
    ctx->pc = 0x32BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAE8u;
    // 0x32baec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BAE8u, 0x32BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAF0u;
label_32baf0:
    // 0x32baf0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32baf4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32baf8: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BAF8u;
    SET_GPR_U32(ctx, 31, 0x32BB00u);
    ctx->pc = 0x32BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAF8u;
    // 0x32bafc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BAF8u, 0x32BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB00u;
label_32bb00:
    // 0x32bb00: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32bb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32bb04: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x32bb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32bb08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32bb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32bb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB0Cu;
        // 0x32bb10: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB14u;
    // 0x32bb14: 0x0  nop
    ctx->pc = 0x32bb14u;
    // NOP
    // 0x32bb18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32bb1c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32bb20: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32bb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32bb24: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x32bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x32bb28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32bb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32bb30: 0xc0cb04a  jal         func_32C128
    ctx->pc = 0x32BB30u;
    SET_GPR_U32(ctx, 31, 0x32BB38u);
    ctx->pc = 0x32BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB30u;
    // 0x32bb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C128u, 0x32BB30u, 0x32BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB38u;
label_32bb38:
    // 0x32bb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb3c: 0xc0cafce  jal         func_32BF38
    ctx->pc = 0x32BB3Cu;
    SET_GPR_U32(ctx, 31, 0x32BB44u);
    ctx->pc = 0x32BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB3Cu;
    // 0x32bb40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BF38u, 0x32BB3Cu, 0x32BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB44u;
label_32bb44:
    // 0x32bb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb48: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BB48u;
    SET_GPR_U32(ctx, 31, 0x32BB50u);
    ctx->pc = 0x32BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB48u;
    // 0x32bb4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BB48u, 0x32BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB50u;
label_32bb50:
    // 0x32bb50: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32bb54: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32bb58: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BB58u;
    SET_GPR_U32(ctx, 31, 0x32BB60u);
    ctx->pc = 0x32BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB58u;
    // 0x32bb5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BB58u, 0x32BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB60u;
label_32bb60:
    // 0x32bb60: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32bb60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32bb64: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x32bb64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32bb68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32bb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32bb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB6Cu;
        // 0x32bb70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB74u;
    // 0x32bb74: 0x0  nop
    ctx->pc = 0x32bb74u;
    // NOP
    // 0x32bb78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32bb7c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32bb80: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32bb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32bb84: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x32bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x32bb88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32bb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb8c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32bb90: 0xc0cb04a  jal         func_32C128
    ctx->pc = 0x32BB90u;
    SET_GPR_U32(ctx, 31, 0x32BB98u);
    ctx->pc = 0x32BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB90u;
    // 0x32bb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C128u, 0x32BB90u, 0x32BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB98u;
label_32bb98:
    // 0x32bb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb9c: 0xc0caffe  jal         func_32BFF8
    ctx->pc = 0x32BB9Cu;
    SET_GPR_U32(ctx, 31, 0x32BBA4u);
    ctx->pc = 0x32BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB9Cu;
    // 0x32bba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BFF8u, 0x32BB9Cu, 0x32BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBA4u;
label_32bba4:
    // 0x32bba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bba8: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BBA8u;
    SET_GPR_U32(ctx, 31, 0x32BBB0u);
    ctx->pc = 0x32BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBA8u;
    // 0x32bbac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BBA8u, 0x32BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBB0u;
label_32bbb0:
    // 0x32bbb0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32bbb4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32bbb8: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BBB8u;
    SET_GPR_U32(ctx, 31, 0x32BBC0u);
    ctx->pc = 0x32BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBB8u;
    // 0x32bbbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BBB8u, 0x32BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBC0u;
label_32bbc0:
    // 0x32bbc0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32bbc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32bbc4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x32bbc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32bbc8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32bbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32bbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x32BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBCCu;
        // 0x32bbd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BBD4u;
    // 0x32bbd4: 0x0  nop
    ctx->pc = 0x32bbd4u;
    // NOP
    // 0x32bbd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32bbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32bbdc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x32bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x32bbe0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x32bbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32bbe4: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x32bbe4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x32bbe8: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x32bbe8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x32bbec: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x32bbecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x32bbf0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32bbf0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x32bbf4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x32bbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x32bbf8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x32bbf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x32bbfc: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x32bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x32bc00: 0xc0cb04a  jal         func_32C128
    ctx->pc = 0x32BC00u;
    SET_GPR_U32(ctx, 31, 0x32BC08u);
    ctx->pc = 0x32BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC00u;
    // 0x32bc04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C128u, 0x32BC00u, 0x32BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC08u;
label_32bc08:
    // 0x32bc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32bc0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32bc10: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32bc10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32bc14: 0xc0cb02e  jal         func_32C0B8
    ctx->pc = 0x32BC14u;
    SET_GPR_U32(ctx, 31, 0x32BC1Cu);
    ctx->pc = 0x32BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC14u;
    // 0x32bc18: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C0B8u, 0x32BC14u, 0x32BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC1Cu;
label_32bc1c:
    // 0x32bc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc20: 0xc0cb056  jal         func_32C158
    ctx->pc = 0x32BC20u;
    SET_GPR_U32(ctx, 31, 0x32BC28u);
    ctx->pc = 0x32BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC20u;
    // 0x32bc24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C158u, 0x32BC20u, 0x32BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC28u;
label_32bc28:
    // 0x32bc28: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32bc2c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x32bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x32bc30: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BC30u;
    SET_GPR_U32(ctx, 31, 0x32BC38u);
    ctx->pc = 0x32BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC30u;
    // 0x32bc34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BC30u, 0x32BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC38u;
label_32bc38:
    // 0x32bc38: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x32bc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32bc3c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x32bc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x32bc40: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x32bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32bc44: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x32bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32bc48: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x32bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC4Cu;
        // 0x32bc50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BC54u;
    // 0x32bc54: 0x0  nop
    ctx->pc = 0x32bc54u;
    // NOP
    // 0x32bc58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc5c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32bc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32bc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bc68: 0xc0ce4f8  jal         func_3393E0
    ctx->pc = 0x32BC68u;
    SET_GPR_U32(ctx, 31, 0x32BC70u);
    ctx->pc = 0x32BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC68u;
    // 0x32bc6c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393E0u, 0x32BC68u, 0x32BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC70u;
label_32bc70:
    // 0x32bc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bc74: 0x3e00008  jr          $ra
    ctx->pc = 0x32BC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC74u;
        // 0x32bc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BC7Cu;
    // 0x32bc7c: 0x0  nop
    ctx->pc = 0x32bc7cu;
    // NOP
    ctx->pc = 0x32bc80u;
}
