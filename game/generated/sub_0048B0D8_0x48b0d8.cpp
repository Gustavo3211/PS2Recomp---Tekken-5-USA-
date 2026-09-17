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

// Function: sub_0048B0D8
// Address: 0x48b0d8 - 0x48b1b0
void sub_0048B0D8_0x48b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B0D8_0x48b0d8");
#endif

    switch (ctx->pc) {
        case 0x48b0e8u: goto label_48b0e8;
        case 0x48b100u: goto label_48b100;
        case 0x48b110u: goto label_48b110;
        case 0x48b130u: goto label_48b130;
        case 0x48b140u: goto label_48b140;
        case 0x48b170u: goto label_48b170;
        case 0x48b198u: goto label_48b198;
        default: break;
    }

    ctx->pc = 0x48b0d8u;

    // 0x48b0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b0dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b0e0: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48B0E0u;
    SET_GPR_U32(ctx, 31, 0x48B0E8u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48B0E0u, 0x48B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B0E8u;
label_48b0e8:
    // 0x48b0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b0f0: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x48b0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x48B0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B0F4u;
        // 0x48b0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B0FCu;
    // 0x48b0fc: 0x0  nop
    ctx->pc = 0x48b0fcu;
    // NOP
label_48b100:
    // 0x48b100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b108: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48B108u;
    SET_GPR_U32(ctx, 31, 0x48B110u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48B108u, 0x48B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B110u;
label_48b110:
    // 0x48b110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b118: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x48b118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b11c: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x48b11cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x48b120: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x48b120u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x48b124: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x48b124u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b128: 0x3e00008  jr          $ra
    ctx->pc = 0x48B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B128u;
        // 0x48b12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B130u;
label_48b130:
    // 0x48b130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b138: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48B138u;
    SET_GPR_U32(ctx, 31, 0x48B140u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48B138u, 0x48B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B140u;
label_48b140:
    // 0x48b140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b148: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x48b148u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b14c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x48b14cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b150: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x48b150u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b154: 0x3e00008  jr          $ra
    ctx->pc = 0x48B154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B154u;
        // 0x48b158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B15Cu;
    // 0x48b15c: 0x0  nop
    ctx->pc = 0x48b15cu;
    // NOP
    // 0x48b160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b168: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48B168u;
    SET_GPR_U32(ctx, 31, 0x48B170u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48B168u, 0x48B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B170u;
label_48b170:
    // 0x48b170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b178: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x48b178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b17c: 0x3e00008  jr          $ra
    ctx->pc = 0x48B17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B17Cu;
        // 0x48b180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B184u;
    // 0x48b184: 0x0  nop
    ctx->pc = 0x48b184u;
    // NOP
    // 0x48b188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48b18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48b190: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x48B190u;
    SET_GPR_U32(ctx, 31, 0x48B198u);
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x48B190u, 0x48B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B198u;
label_48b198:
    // 0x48b198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x48b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48b1a0: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x48b1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x48b1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x48B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B1A4u;
        // 0x48b1a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B1ACu;
    // 0x48b1ac: 0x0  nop
    ctx->pc = 0x48b1acu;
    // NOP
    ctx->pc = 0x48b1b0u;
}
