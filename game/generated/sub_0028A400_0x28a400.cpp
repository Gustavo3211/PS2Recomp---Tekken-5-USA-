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

// Function: sub_0028A400
// Address: 0x28a400 - 0x28a480
void sub_0028A400_0x28a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A400_0x28a400");
#endif

    switch (ctx->pc) {
        case 0x28a424u: goto label_28a424;
        case 0x28a43cu: goto label_28a43c;
        case 0x28a444u: goto label_28a444;
        case 0x28a44cu: goto label_28a44c;
        case 0x28a46cu: goto label_28a46c;
        default: break;
    }

    ctx->pc = 0x28a400u;

    // 0x28a400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a408: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x28a408u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x28a40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a414: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x28a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x28a418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a41c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A41Cu;
    SET_GPR_U32(ctx, 31, 0x28A424u);
    ctx->pc = 0x28A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A41Cu;
    // 0x28a420: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A41Cu, 0x28A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A424u;
label_28a424:
    // 0x28a424: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x28a424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x28a428: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28a42c: 0x2442df80  addiu       $v0, $v0, -0x2080
    ctx->pc = 0x28a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958976));
    // 0x28a430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a434: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A434u;
    SET_GPR_U32(ctx, 31, 0x28A43Cu);
    ctx->pc = 0x28A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A434u;
    // 0x28a438: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A434u, 0x28A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A43Cu;
label_28a43c:
    // 0x28a43c: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x28A43Cu;
    SET_GPR_U32(ctx, 31, 0x28A444u);
    ctx->pc = 0x28A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A43Cu;
    // 0x28a440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x28A43Cu, 0x28A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A444u;
label_28a444:
    // 0x28a444: 0xc0a2920  jal         func_28A480
    ctx->pc = 0x28A444u;
    SET_GPR_U32(ctx, 31, 0x28A44Cu);
    ctx->pc = 0x28A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A444u;
    // 0x28a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A480u, 0x28A444u, 0x28A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A44Cu;
label_28a44c:
    // 0x28a44c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28A44Cu;
    {
        const bool branch_taken_0x28a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A44Cu;
        // 0x28a450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a44c) {
            ctx->pc = 0x28A470u;
            goto label_28a470;
        }
    }
    ctx->pc = 0x28A454u;
    // 0x28a454: 0x0  nop
    ctx->pc = 0x28a454u;
    // NOP
    // 0x28a458: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x28a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x28a45c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28a460: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x28a460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x28a464: 0xc048b90  jal         func_122E40
    ctx->pc = 0x28A464u;
    SET_GPR_U32(ctx, 31, 0x28A46Cu);
    ctx->pc = 0x28A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A464u;
    // 0x28a468: 0x2484fd74  addiu       $a0, $a0, -0x28C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x28A464u, 0x28A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A46Cu;
label_28a46c:
    // 0x28a46c: 0x0  nop
    ctx->pc = 0x28a46cu;
    // NOP
label_28a470:
    // 0x28a470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a478: 0x3e00008  jr          $ra
    ctx->pc = 0x28A478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A478u;
        // 0x28a47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A480u;
}
