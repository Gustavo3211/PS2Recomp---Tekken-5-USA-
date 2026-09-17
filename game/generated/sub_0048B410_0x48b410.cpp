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

// Function: sub_0048B410
// Address: 0x48b410 - 0x48b470
void sub_0048B410_0x48b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B410_0x48b410");
#endif

    switch (ctx->pc) {
        case 0x48b428u: goto label_48b428;
        case 0x48b430u: goto label_48b430;
        case 0x48b438u: goto label_48b438;
        case 0x48b450u: goto label_48b450;
        case 0x48b460u: goto label_48b460;
        default: break;
    }

    ctx->pc = 0x48b410u;

    // 0x48b410: 0x2602d680  addiu       $v0, $s0, -0x2980
    ctx->pc = 0x48b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48b414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b41c: 0xa440220a  sh          $zero, 0x220A($v0)
    ctx->pc = 0x48b41cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8714), (uint16_t)GPR_U32(ctx, 0));
    // 0x48b420: 0x812460a  j           func_491828
    ctx->pc = 0x48B420u;
    ctx->pc = 0x48B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B420u;
    // 0x48b424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491828u;
    sub_00491828_0x491828(rdram, ctx, runtime); return;
    ctx->pc = 0x48B428u;
label_48b428:
    // 0x48b428: 0xc124c68  jal         func_4931A0
    ctx->pc = 0x48B428u;
    SET_GPR_U32(ctx, 31, 0x48B430u);
    ctx->pc = 0x4931A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931A0u, 0x48B428u, 0x48B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B430u;
label_48b430:
    // 0x48b430: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48B430u;
    SET_GPR_U32(ctx, 31, 0x48B438u);
    ctx->pc = 0x48B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B430u;
    // 0x48b434: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48B430u, 0x48B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B438u;
label_48b438:
    // 0x48b438: 0x2603d680  addiu       $v1, $s0, -0x2980
    ctx->pc = 0x48b438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48b43c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48b440: 0xa460220a  sh          $zero, 0x220A($v1)
    ctx->pc = 0x48b440u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8714), (uint16_t)GPR_U32(ctx, 0));
    // 0x48b444: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x48b444u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x48b448: 0xc124910  jal         func_492440
    ctx->pc = 0x48B448u;
    SET_GPR_U32(ctx, 31, 0x48B450u);
    ctx->pc = 0x48B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B448u;
    // 0x48b44c: 0x3c040018  lui         $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48B448u, 0x48B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48B450u;
label_48b450:
    // 0x48b450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48b450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48b454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b458: 0x812460a  j           func_491828
    ctx->pc = 0x48B458u;
    ctx->pc = 0x48B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B458u;
    // 0x48b45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491828u;
    sub_00491828_0x491828(rdram, ctx, runtime); return;
    ctx->pc = 0x48B460u;
label_48b460:
    // 0x48b460: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48b460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48b464: 0x3e00008  jr          $ra
    ctx->pc = 0x48B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B464u;
        // 0x48b468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B46Cu;
    // 0x48b46c: 0x0  nop
    ctx->pc = 0x48b46cu;
    // NOP
    ctx->pc = 0x48b470u;
}
