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

// Function: sub_004A3460
// Address: 0x4a3460 - 0x4a34b0
void sub_004A3460_0x4a3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3460_0x4a3460");
#endif

    switch (ctx->pc) {
        case 0x4a3470u: goto label_4a3470;
        case 0x4a348cu: goto label_4a348c;
        case 0x4a3494u: goto label_4a3494;
        case 0x4a349cu: goto label_4a349c;
        default: break;
    }

    ctx->pc = 0x4a3460u;

    // 0x4a3460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a3464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3468: 0xc124620  jal         func_491880
    ctx->pc = 0x4A3468u;
    SET_GPR_U32(ctx, 31, 0x4A3470u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A3468u, 0x4A3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3470u;
label_4a3470:
    // 0x4a3470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a3474: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x4a3474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x4a3478: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a3478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a347c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4a347cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a3480: 0xa423e820  sh          $v1, -0x17E0($at)
    ctx->pc = 0x4a3480u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3484: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3484u;
    SET_GPR_U32(ctx, 31, 0x4A348Cu);
    ctx->pc = 0x4A3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3484u;
    // 0x4a3488: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3484u, 0x4A348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A348Cu;
label_4a348c:
    // 0x4a348c: 0xc124910  jal         func_492440
    ctx->pc = 0x4A348Cu;
    SET_GPR_U32(ctx, 31, 0x4A3494u);
    ctx->pc = 0x4A3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A348Cu;
    // 0x4a3490: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A348Cu, 0x4A3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3494u;
label_4a3494:
    // 0x4a3494: 0xc12925a  jal         func_4A4968
    ctx->pc = 0x4A3494u;
    SET_GPR_U32(ctx, 31, 0x4A349Cu);
    ctx->pc = 0x4A3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3494u;
    // 0x4a3498: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4968u, 0x4A3494u, 0x4A349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A349Cu;
label_4a349c:
    // 0x4a349c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4a349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a34a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a34a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a34a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a34a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a34a8: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x4A34A8u;
    ctx->pc = 0x4A34ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34A8u;
    // 0x4a34ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x4A34B0u;
}
